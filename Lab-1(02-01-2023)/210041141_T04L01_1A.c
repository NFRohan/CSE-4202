#include<string.h>
#include<stdio.h>

int main(){
    int count, voteMotu = 0, votePatlu = 0;
    char vote[50];

    scanf("%d", &count);

    for(int i = 0; i < count; i++){
        scanf("%s", &vote);
        if(!(strcmp(vote, "Motu"))){
            voteMotu++;
        }
        else{
            votePatlu++;
        }
    }
    
    if(voteMotu > votePatlu){
            printf("Motu");
    }
    else{
            printf("Patlu");
    }
}