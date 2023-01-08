// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#include<string.h>


int main() {
    int num;
    char numString[50];
    scanf("%d", &num);
    itoa(num, numString, 10);
    printf("%d\n", strlen(numString));
    return 0;
}