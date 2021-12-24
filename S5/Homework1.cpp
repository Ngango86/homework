#include <stdio.h>
int main(){
    int n;
    printf("Nhap n=");
    scanf("%d" ,&n);

    float s = 0, i = 1;

    while(i<=n){
       s = s + (float)1/i;
       i++;
    }

    printf("S= %f" ,(float)s);
    
}