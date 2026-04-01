
// ! Frequency  of an array 
#include <stdio.h>
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 1, 2, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }
        printf("Element %d appears %d times\n", arr[i], count);
    }

    return 0;
}






























































































