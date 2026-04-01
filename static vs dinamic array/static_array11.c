//! Check if two arrays are equal (same elements, same frequency).


#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {1, 2, 3, 4};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    if(n1 != n2) {
        printf("Arrays are not equal\n");
        return 0;
    }

    for(int i = 0; i < n1; i++) {
        if(arr1[i] != arr2[i]) {
            printf("Arrays are not equal\n");
            return 0;
        }
    }

    printf("Arrays are equal\n");
    return 0;
}
