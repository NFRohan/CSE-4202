#include<stdio.h>
#include<string.h>

int main(){
    int n, count = 0;
    char target[3];
    char word[50];
    scanf("%d %s", &n, &target);
    for(int i = 0; i < n; i++){
        scanf("%s", &word);
        if(word[0] == target[0]){
            if(word[1] == target[1]){
                if(word[2] == target[2]){
                    count++;
                }
            }
        }
        
    }
    printf("%d", count);
}