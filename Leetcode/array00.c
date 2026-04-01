
// selection sort in c



#include <stdio.h>

int main(){
    int arr[5] = {3, 4, 5, 1, 2};
    int i, j, temp, min;

    for(i = 0; i <=  5 - 2; i++){
        min = i;

        for(j = i + 1; j < 5 ; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }


    printf("The sorted array\n");
    for(i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}


/*!SECTION

What is Selection Sort?

Answer:
Selection Sort is a comparison-based sorting algorithm that 
repeatedly selects the smallest element from the unsorted portion 
of the array and places it at the correct sorted position.


Space Complexity?

Answer:
O(1) — It is an in-place sorting algorithm.


Is Selection Sort stable?

Answer:
No. Selection Sort is not stable because it swaps elements that
may change relative order of equal values.


How many swaps does Selection Sort perform?

Answer:
Exactly n − 1 swaps in all cases.


When is Selection Sort preferred?

Answer:

When memory usage must be minimal.
When dataset size is very small.



Can Selection Sort be used on linked lists?

Answer:
Yes, but it is inefficient due to repeated traversals.


Why Selection Sort is inefficient?

Answer:
Because it compares every element with every other element regardless of data order


Is Selection Sort adaptive?

Answer:
No. It does not terminate early even if the array is already sorted.


*/


