//Todo

/*!SECTION


Problem Summary

You are given an array height[], where each element represents the height of a vertical line on the x-axis.
Choose two lines such that together with the x-axis they form a container that can hold the maximum amount of water.

Water contained between lines i and j:
Area=min(height[i],height[j])×(j−i)

Input:
height = [1,8,6,2,5,4,8,3,7]

Output:
49

Explanation:
Lines at index 1 (height 8) and 8 (height 7):

min(8,7)×(8−1)=7×7=49
*/
#include <stdio.h>

int maxarea(int* height, int n){
    int left = 0, right = n - 1;
    int maxarea = 0;


    while(left < right){
        int h = height[left] < height[right] ? height[left] : height[right];
        int area = h * (right - left);

        if(area > maxarea){
            maxarea = area;

        }
        if(height[left] < height[right]){
            left++;
        }
        else{
            right--;
        }
    }
    return maxarea;
}

int main(){
     int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(height) / sizeof(height[0]);
    int result = maxarea(height, n);
    printf("Maximum water stored = %d\n", result);

    return 0;
}






