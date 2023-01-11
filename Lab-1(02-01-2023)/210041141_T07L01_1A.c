#include<stdio.h>

int main(){
int lenChar = 0, lenUS = 0, lenUI = 0, lenUL = 0, lenULL = 0;
unsigned char text = 'A';
unsigned short us = 1;
unsigned int ui = 1;
unsigned long ul = 1;
unsigned long long ull = 1;

while(1){
    text <<= 1;
    lenChar++;
    if((int) text == 0){break;}
    }
printf("unsigned char: %d\n", lenChar);

while(1){
    us <<= 1;
    lenUS++;
    if(us == 0){break;}
    }
printf("unsigned short: %d\n", lenUS);

while(1){
    ui <<= 1;
    lenUI++;
    if(ui == 0){break;}
    }
printf("unsigned int: %d\n", lenUI);

while(1){
    ul <<= 1;
    lenUL++;
    if(ul == 0){break;}
}
printf("unsigned long: %d\n", lenUL);

while(1){
    ull <<= 1;
    lenULL++;
    if(ull == 0){break;}
    }
printf("unsigned long long: %d\n", lenULL);
}