#include<stdio.h>
#include<string.h>

#define MAX_LEN 5000

char isLegal(char a){
    if(a == '0' || a == '1' || a == '2' || a == '3' || a =='4' || a == '5' || a == '6' || a == 'O'){
        return 1;
    }
    else
        return 0;
}
int main(){
    char playString[MAX_LEN];
    int ballCount = 0, legalCount = 0, overs = 0, balls = 0;
    gets(playString);
    ballCount = strlen(playString);
    //count legal balls
    for(int i = 0; i < ballCount; i++){
        if(isLegal(playString[i])){
            legalCount++;
        }
    }
    //calculate complete overs
    overs = legalCount / 6;
    balls = legalCount - overs * 6;
    //text if plural overs 
    if(overs > 1){
        if(balls == 0){printf("%d OVERS", overs);}
        if(balls == 1){printf("%d OVERS %d BALL", overs, balls);}
        if(balls > 1){printf("%d OVERS %d BALLS", overs, balls);}
    }
    //text if a single over
    else if(overs == 1){
        if(balls == 0){printf("%d OVER", overs);}
        if(balls == 1){printf("%d OVER %d BALL", overs, balls);}
        if(balls > 1){printf("%d OVER %d BALLS", overs, balls);}
    }
    //text if first over is incomplete
    else if(overs == 0){
        if(balls == 0){printf("0 OVERS 0 BALLS");}
        if(balls == 1){printf("%d BALL", balls);}
        if(balls > 1){printf("%d BALLS", balls);}
    }
}