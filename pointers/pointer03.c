
#include <stdio.h>
int main(){
    int arr[5] = {1, 2, 3};
    int *p = arr;

    printf("%d\n", *(p + 1)); // move the pointer value  index 1
    printf("%d\n", *(p + 2));
    return 0;


}