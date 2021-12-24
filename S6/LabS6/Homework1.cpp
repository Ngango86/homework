#include <stdio.h>
int main(){
	int n,i,x,s;
    s = 0;
	do{
	printf("Nhap so n= "); 
    scanf("%d",&n);   
	}while(n<0);
        x = n % 10;                 
        s = s + x;                   
        n = n / 10;    
    printf("Tong cua so vua nhap la : %d" ,s);

}