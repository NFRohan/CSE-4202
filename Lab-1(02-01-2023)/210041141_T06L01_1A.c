#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float f(float x, int n)
{
    return (x * x * x - n);
}
float df(float x)
{
    return 3 * x * x;
}
void main()
{
    float b = 5, m, e = 0.0001, num;
    int i;
    printf("\n Newton Raphson's Method : To find Cube Root");
    printf("\n Enter Number whose Cube root to be found :- \n");
    scanf("%f", &num);
    m = (b) - ((f(b, num)) / df(b));
    i = 1;
    while (fabs(f(m, num)) > e)
    {
        b = m;
        m = (b) - ((f(b, num)) / df(b));
        i = i + 1;
        printf("\n Square root of %.2f is %.2f", num, m);
    }
}