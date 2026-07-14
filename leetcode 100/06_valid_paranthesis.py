

# valid paranthesis

def is_valid_parentheses(s):
    # Stack to store opening brackets
    stack = []

    # Matching brackets
    brackets = {
        ')': '(',
        '}': '{',
        ']': '['
    }

    # Traverse each character
    for char in s:

        # Opening bracket
        if char in "({[":
            stack.append(char)

        # Closing bracket
        else:
            # Check if stack is empty or top doesn't match
            if not stack or stack[-1] != brackets[char]:
                return False

            # Remove the matched opening bracket
            stack.pop()

    # If stack is empty, parentheses are valid
    return len(stack) == 0


# Driver Code
s = input("Enter parentheses: ")

if is_valid_parentheses(s):
    print("Valid")
else:
    print("Invalid")
    
    
    
    
    
    