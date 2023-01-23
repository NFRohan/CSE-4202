#include<stdio.h>

int main(){
    long long int num, toggleTarget, shifter, modNum;
    scanf("%lld %lld", &num, &toggleTarget);
    shifter = 1 << toggleTarget;
    modNum = num ^ shifter;
    printf("%lld", modNum);
}