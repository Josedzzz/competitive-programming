def binary_to_mod12(binary_str):
    # Start with 0
    current = 0
    # Process each binary digit from left to right
    for bit in binary_str:
        # Multiply current result by 2 (shift left in binary)
        # Then add the new bit
        current = (current * 2 + int(bit)) % 12
    return current

while True:
    s = input().strip()
    if s == "*":
        break
    print(binary_to_mod12(s))
