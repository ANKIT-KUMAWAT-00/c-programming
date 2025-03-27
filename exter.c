# include <stdio.h>
void first();
int main(){
   extern int x;
   printf("\nx=%d",x);// x is used before its defination [posssible becAUSE OF EXTERN]
   first();
   printf("\nx=%d",x);// change done by first are visible here
   return 0;
    
}
void first(){
    extern int x;
    printf("\nx=%d",x);// x is again used before its defination
    x+=10;
}
int x =10; //defination of external variable x
