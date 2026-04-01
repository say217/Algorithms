
// buble sort 


#include <stdio.h>
int main(){

    int arr[] = {5, 3, 4, 1, 2};
    int n=5, i, j;
    int temp;

    for(i=0; i<= n-2; i++){
        for(j = 0; j<= n-2-i; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    printf("The sorted array----:\n");
    for(i=0; i <=n-1; i++){
        printf("%d ", arr[i]);
    }
}















