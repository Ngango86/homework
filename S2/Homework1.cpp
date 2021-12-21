#include <stdio.h>
int main(){
    int n;
    printf("Nhap n=");
    scanf("%d" ,&n);
    int m=0;
    if(n>0){
        int sd = n%10;
        int m = m*10+sd;
        int n = n/10;
        if(n>0){
            int sd = n%10;
            int m = m*10+sd;
            int n = n/10;
            if(n>0){
                int sd = n%10;
                int m = m*10+sd;
                int n = n/10;
            }else{
                printf("hien thi: %d" ,m);
            }
        }else{
            printf("hien thi: %d" ,m);
        }
    
    }else{
        printf("Hien thi: %d" ,m);

    }
    
}