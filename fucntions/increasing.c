#include<stdio.h>
void pow(int a){
if(a == 20) return; 
return pow(a+2);
}
int main(){
    int a=10;
    pow(a);
    return 0;
}