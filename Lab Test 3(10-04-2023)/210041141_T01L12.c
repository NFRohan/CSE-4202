#include <stdio.h>
#include<string.h>
int main()
{
    int rb = 0, lb = 0, len, dpx;
    char line[1024];

    gets(line);
    printf("%s is ", line);

    len = strlen(line);
    for(int i = 0; i < len; i++){
        if(line[i] == '('){lb++;}
        else if(line[i] == '"'){
            i++;
            while(line[i] != '"'){
                if(line[i] == '\\'){i += 2;}
                else{i++;}
            }
        }
        
        else if(line[i] == ')'){rb++;}
    }
    if(rb == lb){printf("Properly matched opening and closing parentheses!\n");}
    else if(rb > lb){
        printf("%d extra closing parentheses!\n", (rb-lb));
    }
    else if(rb < lb){
        printf("%d extra opening parentheses!\n", (lb-rb));
    }

    
}