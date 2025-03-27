#include <stdio.h>
void sum()

{
    // functions
    // types of function
    // no return type no arg ----> void sum()
    // no return tyoe arg ----> void sum(int a,int b,float,char)
    // return type no args --> int sum()
    // return tyoe no args --> int sum()
 // function prototype it is used to tell the compiler about the structure of user defined
 int a,b,c;
 scanf("%d%d",&a,&b);
 c=a+b;
 printf("%d\n",c);

  }

int main(){
    printf("in main fun\n");

    sum();
    printf("back in main fun");
    sum();

}
// int mul(){
    // in call by value the alue of the actual 
    // arguments is passed to the formal arguments,and 
    // whatever the cahnges we are making in formal arguments
    //  they are not reflected back and whatever the changes we
    // are making in the formal arguments they are not reflected back in actual arguments
// }
