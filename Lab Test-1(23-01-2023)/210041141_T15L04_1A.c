#include<stdio.h>

int main(){
    long long int num, toggleTarget, shifter, modNum;
    //get number and which bit to flip
    scanf("%lld %lld", &num, &toggleTarget);
    //shift bits
    shifter = 1 << toggleTarget;
    //toggle target bit
    modNum = num ^ shifter;
    
    printf("%lld", modNum);
}