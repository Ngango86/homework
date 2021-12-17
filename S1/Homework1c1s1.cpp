#include <stdio.h>
int main(){
    int A,B,C;
    printf("Nhap A=");
    scanf("%d" ,&A);
    printf("Nhap B=");
    scanf("%d" ,&B);
    printf("Nhap C=");
    scanf("%d" ,&C);
    // so sanh A < B
    if(A<B){
        // Yes
        if(A<C){
            // Yes
            printf("So lon nhat: %d" ,A);   
        }else{
            // No
            printf("So lon nhat: %d" ,C);
        } 
    }else{
        // No
        if(B<C){
            // Yes
            printf("So lon nhat: %d" ,B);
        }else{
            // No
            printf("So lon nhat: %d" ,C);
        }
    }   
}
