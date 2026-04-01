// two sum

#include <stdio.h>

int main(){
    int arr[] = {1, 3, 2, 7, 5, 8};
    int n, i, j;
    int target = 9;
    int n = sizeof(arr)/ sizeof(arr[0]);

    for(i=0; i < n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] + arr[j] == target){
                printf("The pair is found at index %d , %d\n", i, j);
                return 0;
            }
        }
    }


    printf("No pair found\n");
    return 0;
}


// return 0; ends the program right after finding the first valid pair


/*!SECTION

int found = 0;

for (int i = 0; i < n && !found; i++) {
    for (int j = i + 1; j < n; j++) {
        if (arr[i] + arr[j] == target) {
            printf("Indexes: %d and %d\n", i, j);
            found = 1;
            break;
        }
    }
}


*/


/*!SECTION

For all possible pairs 


#include <stdio.h>

int main() {
    int arr[] = {2, 7, 11, 15, -2, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    printf("Pairs with sum %d:\n", target);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}




1. What is the Two Sum problem?

Answer:
Given an array and a target value, find two distinct indices such that their values add up to the target.

2. What is the brute-force solution?

Answer:
Check every possible pair.

Time: O(n²)
Space: O(1)

3. What is the optimal solution?

Answer:
Use a hash map to store visited numbers and their indices.

Time: O(n)
Space: O(n)

4. How does the hash-map solution work?

Answer:
For each number x, check if target - x exists in the map.
If yes, return indices. Otherwise, store x.

5. Why is this better than brute force?

Answer:
It eliminates nested loops and reduces time from quadratic to linear.

6. Can this work with duplicate numbers?

Answer:
Yes, because each number is stored with its index.

7. What if the same number is used twice?

Answer:
Disallowed. The algorithm ensures different indices.
*/
