#include <stdio.h>

    // in call by refrecne the address of the 
    // actual arguments passed to the formal arguments
    //  and whatever the changes we are doing in the formal
    //  arguments they are reflected at the addrss of the actual argiments
    void swap(int*,int*);
int main()
{
   int num1,num2;

   scanf("%d%d",&num1,&num2);
   printf("before swap num1 = %d and num2 = %d\n",num1,num2);
   swap(&num1,&num2);
   printf("\n after swap num1 = %d and num2 =%d",num1,num2);
}  
   void swap(int *a, int *b)
   {
       int temp; //function defination
       printf("\nbefore swap num1 = %d and num2 = %d",*a,*b);
       temp =*a;
       *a=*b;
       b=temp;
       printf("\n after swap num1 = %d and num2 =%d",a,b);
   }


