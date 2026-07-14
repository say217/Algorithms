# Palindrome


def is_palindrome(x):
    # Negative numbers are not palindromes
    if x < 0:
        return False

    original = x
    reverse_num = 0

    # Reverse the number
    while x > 0:
        digit = x % 10
        reverse_num = reverse_num * 10 + digit
        x = x // 10

    # Compare original and reversed number
    if original == reverse_num:
        return True
    else:
        return False


# Driver Code
num = int(input("Enter a number: "))

if is_palindrome(num):
    print("Palindrome")
else:
    print("Not Palindrome")
    
    
    
    

