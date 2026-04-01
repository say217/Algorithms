//Todo Grou[ Anagrams 
/*!SECTION

Problem Statement

You are given an array of strings.
Group the strings that are anagrams of each other.

Anagrams: Words formed by rearranging the same characters.
Example: "eat", "tea", "ate"

Example

Input

["eat","tea","tan","ate","nat","bat"]


Output

[
  ["eat","tea","ate"],
  ["tan","nat"],
  ["bat"]
]
*/





#include <stdio.h>
#include <string.h>

void buildKey(char word[], char key[]) {
    int count[26] = {0};

    for (int i = 0; word[i] != '\0'; i++) {
        count[word[i] - 'a']++;
    }

    int pos = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            key[pos++] = 'a' + i;
            key[pos++] = count[i] + '0';  // works for small words
        }
    }
    key[pos] = '\0';
}

int main() {
    char words[][10] = {"eat", "tea", "tan", "ate", "nat", "bat"};
    int n = 6;

    for (int i = 0; i < n; i++) {
        char key[50];
        buildKey(words[i], key);
        printf("Word: %s -> Key: %s\n", words[i], key);
    }

    return 0;
}
