# LeetCode 7: Reverse Integer


def reverse_integer(x):
    # Store the sign
    sign = 1
    if x < 0:
        sign = -1

    # Make the number positive
    x = abs(x)

    # Reverse the number
    reverse_num = 0

    while x > 0:
        digit = x % 10
        reverse_num = reverse_num * 10 + digit
        x = x // 10

    # Restore the sign
    reverse_num = reverse_num * sign

    # Check 32-bit signed integer range
    if reverse_num < -2**31 or reverse_num > 2**31 - 1:
        return 0

    return reverse_num


# Driver Code
num = int(input("Enter an integer: "))

result = reverse_integer(num)

print("Reversed Integer:", result)


