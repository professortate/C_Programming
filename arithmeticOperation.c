#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num1=10,num2=20, *ptr1,*ptr2,*ptr3;
    ptr1=&num1;
    ptr2=&num2;

    int sum=*ptr1 + *ptr2;
    printf("The sum is %d\n",sum);

    int sub=*ptr2 - *ptr1;
    printf("b-a is %d\n",sub);
    
    int mul=*ptr1 * *ptr2;
    printf("The product of a and b is %d\n",mul);
   
   int div =*ptr2 / *ptr1;
    printf("b/a is %d\n",div);


}