#include<stdio.h>

char xorCrypt(char * str, char key){
    int i = 0;
    while(*str != '\0'){
        *str = *str ^ key;
        printf("%c", *str);
        str++;
    }
}
int main(){
   char base[1000], cypherKey;
   gets(base);
   scanf("%c", &cypherKey);
   xorCrypt(base, cypherKey);
}