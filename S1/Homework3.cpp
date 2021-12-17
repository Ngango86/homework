#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    printf("Nhap a=");
    scanf("%d" ,&a);
    printf("Nhap b=");
    scanf("%d" ,&b);
    printf("Nhap c=");
    scanf("%d" ,&c);

    if(a+b>c && b+c>a && a+c>b){
        int p = a+b+c;
        float p2 = (float)p/2;
        float s = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
        printf("Chu vi tam giac: %d\n" ,p);
        printf("Dien tich tam giac: %f\n" ,s);
    }else{
        printf("Day khong phai la 3 canh cua tam giac");
    }
}