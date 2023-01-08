#include<stdio.h>
char oddEven(int i){
    if(i & 1 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int num;
    scanf("%d", &num);
    if(oddEven(num)){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}