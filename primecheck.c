#include<stdio.h>
int main(){
    int a=47;
    // for(int i=2;i<a; i++){
    //     if(a%i==0){ printf("composite fn \n"); break;}
    //     else {printf("prime fn \n");break ;}
    // }
    int a=0;
    for (int i=2;i<a; i++){
        if(a%i==0){
            a=1;
            break;
        }
}
if(a==0) printf("prime fn \n");
else printf("composite fn \n");
}