import math

def nCr(n, r):
    """Compute binomial coefficient C(n, r)"""
    if r < 0 or r > n:
        return 0
    return math.comb(n, r)

def combination_rank(n, k, arr):
    rank = 0
    for i in range(k):
        # Start from the smallest possible value for this position
        start = 1 if i == 0 else arr[i-1] + 1
        # For each possible value smaller than arr[i] at this position
        for val in range(start, arr[i]):
            # Count combinations that have this value at position i
            # Remaining positions: k - i - 1
            # Available numbers: n - val
            rank += nCr(n - val, k - i - 1)
    return rank

def main():
    import sys
    data = sys.stdin.read().strip().split()
    
    n = int(data[0])
    k = int(data[1])
    arr = list(map(int, data[2:2+k]))
    
    result = combination_rank(n, k, arr)
    print(result)

if __name__ == "__main__":
    main()
