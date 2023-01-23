#include<stdio.h>
#include<string.h>
//swap
void swap(char* p1, char* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

//sort descending
void bubble_sort_des(char target[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (target[j] < target[j + 1])
				swap(&target[j], &target[j + 1]);
}
int main(){
    char genome[500];
    int len;
    gets(genome);
    len = strlen(genome);
    bubble_sort_des(genome, len);
}