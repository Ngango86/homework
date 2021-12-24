#include <stdio.h>
#include <math.h>
int main(){
	int n,tong=0;
	printf("Nhap n : ");
	scanf("%d",&n);
	
	if(n>0){
		for(int i=1;i<=n;i++){
		if(n%i==0){
			printf("Uoc cua %d la %d \n", n,i);
			tong=tong+i;
		}
	}
	printf("Tong uoc cua %d = %d",n,tong);
	}else{
		printf("Nhap so lon hon 0");
	}

}