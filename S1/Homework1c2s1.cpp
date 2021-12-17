#include <stdio.h>
int main(){
    int A, B, C; // khai bao 1 luc 3 bien A B C
    printf("Nhap A=");
    scanf("%d" ,&A);
    printf("Nhap B=");
    scanf("%d" ,&B);
    printf("Nhap C=");
    scanf("%d" ,&C);

    int Min = A;


    if(B < Min){
        // yes
        Min = B;
    }else{
        // no

    }
    if(C < Min){
        // yes
        Min = C;
    }else{
        // no

    }

    // Day la cu phap dieu kien dieu huong re nhanh (khong phai la lenh) nen khong co dau ; - Lenh la cac yeu cau duoc viet cho de yeu cau may tinh thuc thi theo.
    
    printf ("So nho nhat: %d" ,Min);

}