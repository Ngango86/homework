#include <stdio.h>
int main(){
    int Tk, Ls, n;
    printf("Nhap Tk=");
    scanf("%d" ,&Tk);
    printf("Nhap Ls=");
    scanf("%d" ,&Ls);
    printf("Nhap So nam=");
    scanf("%d" ,&n);
        
    if(Ls>0 && Tk>0 && n==4){
        if(Tk==4000){
            int Tienlai = Tk*8/100;
            Tk = Tk + (Tienlai*n);
            printf("Tong tien thu duoc sau 4 nam: %d" ,Tk);

        }else{
            printf("Error!");
        }
    }else{
        printf("Error!");
    }

}