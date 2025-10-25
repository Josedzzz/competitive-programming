def isPalindrome(s):
    cleaned = ''.join(c.lower() for c in s if c.isalpha())
    left, right = 0, len(cleaned) - 1
    while left < right:
        if cleaned[left] != cleaned[right]:
            return False
        left += 1
        right -= 1
    return True

while True:
    s = input()
    if s == "*":
        break
    if isPalindrome(s):
        print("Y")
    else:
        print("N")
