#include <stdio.h>
#define MAX_LEN 100000

//get first
int first(int array[], int target, int n)
{
	int low = 0, high = n - 1, firIn = -1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (array[mid] > target)
			high = mid - 1;
		else if (array[mid] < target)
			low = mid + 1;
		else {
			firIn = mid;
			high = mid - 1;
		}
	}
	return firIn;
}

//get last
int last(int array[], int target, int n)
{
	int low = 0, high = n - 1, lasIn = -1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (array[mid] > target)
			high = mid - 1;
		else if (array[mid] < target)
			low = mid + 1;

		else {
			lasIn = mid;
			low = mid + 1;
		}
	}
	return lasIn;
}

//driver
int main()
{
	int arr[MAX_LEN], index_first, index_last, right, target, checksum;

    //set right and target
    scanf("%d %d", &right, &target);

    //fill array
    for (int i = 0; i < right; i++){
        scanf("%d", &arr[i]);
    }
    if(first(arr,target, right - 1) != -1){
	    printf("Found(%d,%d)", first(arr,target, right - 1), last(arr, target, right - 1));
    }
    else{
        printf("Not Found");
    }
	return 0;
}