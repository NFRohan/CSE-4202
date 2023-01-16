#include<stdio.h>
#define MAX_LEN 500

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
int LinearSearch(int * array, int low, int high, int target){
    int checksum = 0;
    for(int j = low; j < high; j++){
        if(array[j] == target){
            checksum++;
        }
    }
    return checksum;
}
//swap
void swap(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

//sort function
void bubble_sort(int target[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (target[j] > target[j + 1])
				swap(&target[j], &target[j + 1]);
}

//driver
int main(){
    int arr[MAX_LEN], left, right, target, checksum;

    //set left and right
    left = 0;
    scanf("%d %d", &right, &target);

    //fill array
    for (int i = 0; i < right; i++){
        scanf("%d", &arr[i]);
    }

    //sort
    bubble_sort(arr, right - 1);

    //perform binary search
    
    if (BinarySearch(arr, left, right, target) != -1){
        printf("Found");
    }
    else{
        printf("Not Found");
    }

    if (LinearSearch(arr, left, right, target) != 0){
        printf("\nFound");
    }
    else{
        printf("\nNot Found");
    }
    
    return 0;
}