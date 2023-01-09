#include <stdio.h>
//swap
void swap(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

//sort
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
    int set_one[500], set_two[500], set_size, checkbit = 0;
    scanf("%d", &set_size);
    //fill first set
    for(int i = 0; i <set_size; i++){
        scanf("%d", &set_one[i]);
    }
    //fill second set
    for(int j = 0; j <set_size; j++){
        scanf("%d", &set_two[j]);
    }
    //sort sets
    bubble_sort(set_one, set_size);
    bubble_sort(set_two, set_size);

    for(int k = 0; k < set_size; k++){
        if(set_one[k] != set_two[k]){
            checkbit++;
        }
    }
    if (checkbit > 0){
        printf("DIFFERENT");
    }
    else{
        printf("SAME");
    }
    
}