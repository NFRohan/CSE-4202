#include<stdio.h>
#include<stdio.h>
#include<string.h>

int BinarySearch(int* array, int low, int high, int target){
    int mid;
    while (low <= high){
        //set mid
        mid = low + (high - low) / 2;
        //check mid
        if(array[mid] == target){
            return mid;
        }
        //redefine L and R
        if(array[mid] < target){
            low = mid + 1;
        }
        if(array[mid]  > target){
            high = mid - 1;
        }
    }
    return -1;

}
//driver
int main(){
    
    int numbers[5000], numberCount = 0, diff, targetNum, checkbit = 0;
    //get and count numbers
    while(1){
        scanf("%d", &numbers[numberCount]);
        if(numbers[numberCount] == -1){
            break;
        }
        numberCount++;
    }
    
    //find the difference
    diff = numbers[1] - numbers[0];
    
    //check if any numbers skip
    for(int i = 0; i < numberCount - 1; i++){
        targetNum = numbers[i] + diff;
        if(BinarySearch(numbers, 0, numberCount, targetNum) == -1){
            printf("%d", targetNum);
        }
        else{checkbit++;}
        
    }
    if (checkbit == numberCount - 1){
        printf("-1");
    }   

}