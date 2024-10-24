#include <stdio.h>
int main(){
    int x[20],n,i,sum=0,*p;
    printf("Enter number of elements in an array");
    scanf("%d",&n);
    printf("Enter an elements of an array:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",(x+i));
        sum+= *(x+i);
    }

    printf("The sum of array is %d",sum);
    return 0;
}