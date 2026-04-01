//Todo Next Permutation



#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3};
    int n = 3;
    
    // Print the first permutation
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
    printf("\n");
    
    while (1) {
        // Step 1: Find the first decreasing element from the right
        int i = n - 2;
        while (i >= 0 && arr[i] >= arr[i + 1])
            i--;
        
        // If no such element, we are done
        if (i < 0) break;
        
        // Step 2: Find element just larger than arr[i]
        int j = n - 1;
        while (arr[j] <= arr[i])
            j--;
        
        // Step 3: Swap arr[i] and arr[j]
        int temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;
        
        // Step 4: Reverse the part after i
        int l = i + 1, r = n - 1;
        while (l < r) {
            temp = arr[l]; arr[l] = arr[r]; arr[r] = temp;
            l++; r--;
        }
        
        // Print current permutation
        for (int k = 0; k < n; k++)
            printf("%d ", arr[k]);
        printf("\n");
    }

    return 0;
}
