#include<stdio.h>
//swap
void swap(float* p1, float* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

//sort descending
void bubble_sort_des(float target[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (target[j] < target[j + 1])
				swap(&target[j], &target[j + 1]);
}
//driver
int main(){
    float target[101], og[101], currNum = 0;
    int n, mth, counter = 0, index;
    //get array size
    scanf("%d", &n);
    //fill array
    for(int i = 0; i < n; i++){
        scanf("%f", &target[i]);
    }
    //copy array
    for(int k = 0; k < n; k++){
        og[k] = target[k];
    }
    //get which'th highest num to find
    scanf("%d", &mth);
    //sort array
    bubble_sort_des(target, n);

    //find m'th highest number
    for(int j = 0; j < n; j++){
        if(target[j] != currNum){
            currNum = target[j];
            counter++;
        }
        if(counter == mth){
            break;
        }
    }
    //find m'th highest number's index in original array
    for(int l = 0; l < n; l++){
        index = l;
        if(og[l] == currNum){
            break;
        }
    }
    printf("%d", index);

}