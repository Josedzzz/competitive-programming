def hanoi(n, source, destination, auxiliary, moves):
    if n == 1:
        # Base case: move single disk directly
        moves.append(f"{source} {destination}")
        return
    # Step 1: Move n-1 disks from source to auxiliary
    hanoi(n - 1, source, auxiliary, destination, moves)
    # Step 2: Move largest disk from source to destination
    moves.append(f"{source} {destination}")
    # Step 3: Move n-1 disks from auxiliary to destination
    hanoi(n - 1, auxiliary, destination, source, moves)

def main():
    n = int(input().strip())
    # Minimum number of moves: 2^n - 1
    print(2**n - 1)
    # Generate the moves
    moves = []
    hanoi(n, 1, 3, 2, moves)
    # Print all moves
    for move in moves:
        print(move)

if __name__ == "__main__":
    main()
