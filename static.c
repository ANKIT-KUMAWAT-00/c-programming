# include <stdio.h>
void disp(){
    // int a = 0;
    static int a;// we dont hvae to declare static first value it directly takes 0 first then it perform therte task
    printf("a = %d\n",a);
    a+=5;
}
int main(){
    disp();
    disp();
    disp();
    
}
