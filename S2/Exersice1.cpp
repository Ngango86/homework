#include<stdio.h>
int main(){
    float a,b; // khai bao mot luc hai bien a b
    printf("Nhap a=");
    scanf("%f" ,&a);
    printf("Nhap b=");
    scanf("%f" ,&b);

    // So Sanh A>=B
    if(a>=b){
        // Yes
        if(b==0){
            // Yes
            printf("Error!");
        }else{
            // No
            float t = a/b;
            printf("ket qua: %f",t);
        }
    }else{
        // No
       printf("ket qua: %f",a*b); 
    }
}