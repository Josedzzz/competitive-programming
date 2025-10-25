def gray_code(n):
    if n == 1:
        return ['0', '1']
    # Get Gray code for n-1
    smaller = gray_code(n - 1)
    # Prefix '0' to all codes
    first_half = ['0' + code for code in smaller]
    # Prefix '1' to reversed codes
    second_half = ['1' + code for code in reversed(smaller)]
    return first_half + second_half

def main():
    n = int(input().strip())
    codes = gray_code(n)
    for code in codes:
        print(code)

if __name__ == "__main__":
    main()
