#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int A[5];
    int B[5]={1,2,3,4,5};
    int C[10]={2,4,6};
    int D[5]={0};
    int E[]={1,2,3,4,5,6};

    for(i=0;i<5;i++)
        printf("%u \n",&A[i]);//to get the array of an element
    return 0;
}
