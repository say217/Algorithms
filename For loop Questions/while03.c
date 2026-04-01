

// factorial

#include <stdio.h>

int main(){

int i = 1, fat = 1;
while(i <= 5){
    fat = fat * i;
    i++;
}
printf("%d", fat);
return 0;
}