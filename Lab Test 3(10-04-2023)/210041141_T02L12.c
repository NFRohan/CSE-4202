#include<stdio.h>
#include<math.h>
int main(){
    int len = 0, exp = 0;
    long long int max = 0, temp = 0, base = 0;
    float x;
    scanf("%d",  &len);

    long long int series[len];
   
    for(int i=0; i<len; i++){
        scanf("%lld", &series[i]);
    }
    for(int j = 0; j < len; j++){
        if (series[j] > max)
            max = series[j];
    }
    temp = max;
    while (temp != 0){
        temp /=  10;
        exp++;
    }
    printf("%d\n", max);

    if(max == 1){base = 1;}
    else {base = pow(10, exp);}
    
    for(int k = 0; k < len; k++){
        x = ((series[k] / (float) base) * 100);
        printf("%.2f%% ", x);
    }
}