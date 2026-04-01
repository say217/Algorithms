
// TOdod make the original array from the double \

#include <stdio.h>

int main() {
    int changed[] = {1, 3, 4, 2, 6, 8};
    int n = 6;
    int original[10];
    int k = 0;

    if (n % 2 != 0) {
        printf("Not possible\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (changed[i] == -1) continue; // already used

        int found = 0;
        for (int j = 0; j < n; j++) {
            if (i != j && changed[j] == 2 * changed[i]) {
                original[k++] = changed[i];
                changed[i] = -1; // mark as used
                changed[j] = -1; // mark double as used
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("Not possible\n");
            return 0;
        }
    }

    // Print result
    printf("Original array: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", original[i]);
    }

    return 0;
}

