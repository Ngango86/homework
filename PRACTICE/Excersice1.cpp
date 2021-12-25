#include <stdio.h>
int main(){
    int n;
    printf("Nhap n=");
    scanf("%d" ,&n);

    float s = 0, i = 1;
    if(n>0){
        while(i<=n){
        s = s + (float)1/i;
        i++;
        }
        printf("S= %f" ,(float)s);
    }else{
        printf("ERROR!");
    }
    
}