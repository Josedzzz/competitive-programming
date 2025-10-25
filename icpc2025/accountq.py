def compute_indices(transactions):
    n = len(transactions)
    
    # Compute d and w
    max_deposit = 0
    max_withdrawal = 0
    
    for amount in transactions:
        if amount > 0:
            max_deposit = max(max_deposit, amount)
        elif amount < 0:
            if max_withdrawal == 0:
                max_withdrawal = amount
            else:
                max_withdrawal = min(max_withdrawal, amount)
    
    # Compute r using prefix sums
    prefix_sums = {0: -1}
    current_sum = 0
    max_length = 0
    
    for i in range(n):
        if transactions[i] > 0:
            current_sum += 1
        elif transactions[i] < 0:
            current_sum -= 1
        
        if current_sum in prefix_sums:
            max_length = max(max_length, i - prefix_sums[current_sum])
        else:
            prefix_sums[current_sum] = i
    
    # Handle special case of all zeros
    if max_deposit == 0 and max_withdrawal == 0:
        max_length = 0
        
    return max_deposit, max_withdrawal, max_length

def main():
    import sys
    data = sys.stdin.read().strip().split()
    idx = 0
    
    while idx < len(data):
        n = int(data[idx])
        idx += 1
        if n == 0:
            break
            
        transactions = list(map(int, data[idx:idx+n]))
        idx += n

        d, w, r = compute_indices(transactions)
        print(f"{d} {w} {r}")

if __name__ == "__main__":
    main()
