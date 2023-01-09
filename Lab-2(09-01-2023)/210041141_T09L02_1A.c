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
    float target[101];
    int n, checkbit;
    //get size and array
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%f", &target[i]);
    }
    //sort array in descending order
    bubble_sort_des(target, n);
    //check strictness
    for(int j = 0; j < (n - 1); j++){
        if(target[j] == target[j + 1]){
            checkbit++;
        }
    }
    //printy print
    if(checkbit > 0){
        printf("No\n");
    }
    else{
        printf("Yes\n");
        for(int k = 0; k < n; k++){
        printf("%g ", target[k]);
        }
    }
}