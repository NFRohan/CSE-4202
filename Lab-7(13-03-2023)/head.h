#pragma 
#include<stdlib.h>

typedef struct _intDArrayController
{
    int *elements;
    size_t Count;
    size_t capacity;

} intDArrayController;

intDArrayController intDArray_new(void);
int intDArray_Add(intDArrayController* controller, int element);
int intDArray_RemoveLastElement(intDArrayController* controller);
void IntDArray_Print(intDArrayController* controller);