

#longest common prefix


def longest_common_prefix(strings):
    # If the list is empty
    if not strings:
        return ""

    # Take the first string as reference
    prefix = ""

    # Traverse each character of the first string
    for i in range(len(strings[0])):

        current_char = strings[0][i]

        # Compare with all other strings
        for word in strings:

            # Check index out of range or character mismatch
            if i >= len(word) or word[i] != current_char:
                return prefix

        # If all strings have the same character
        prefix += current_char

    return prefix


# Driver Code
strings = input("Enter strings separated by space: ").split()

result = longest_common_prefix(strings)

print("Longest Common Prefix:", result)



