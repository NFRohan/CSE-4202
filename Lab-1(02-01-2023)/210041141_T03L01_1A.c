#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int cmpfunc(const void* a, const void* b){
    const int* num1 = a;
    const int* num2 = b;
    return (*num1 - *num2);
}
int main(){
    int nums[10000]; 
    int n, maxCount = 0, currentCount = 0;
    int currNum, maxNum;

    scanf("%d", &n);

    for (int k = 0; k < n; k++){
        scanf("%d", &nums[k]);
    }
    
    qsort(nums, n, sizeof(int), cmpfunc);
    
    for(int i = 0; i < n; i++){
        printf("%d", nums[i]);
    }
    
    for(int i = 0; i < n; i++){
        currentCount = 0;
        currNum = nums[i];
        for(int j = 0; j < n; j++){
            if(nums[i] == nums[j]){
                currentCount++;
                if(currentCount > maxCount){
                    maxCount = currentCount;
                    maxNum = currNum;
                }
                if(currentCount == maxCount){
                    if(currNum < maxNum){
                        maxNum = currNum;
                    }
                }
            }
        }
    }
    printf("\n%d", maxNum);
}