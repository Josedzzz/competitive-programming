from itertools import permutations

def main():
    s = input().strip()
    # Generate all permutations and remove duplicates using set
    all_perms = set(permutations(s))
    # Convert to strings and sort
    result = sorted(''.join(p) for p in all_perms)
    print(len(result))
    for perm in result:
        print(perm)

if __name__ == "__main__":
    main()
