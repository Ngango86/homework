#include <stdio.h>
#include <math.h>

int Tinh(int a, int b,int c) {
	if((a + b > c)&&(a + c > b)&&(b + c > a)) {
	int C = a+b+c;
	return C;
	} else {
		return false;
	}
}
int main() {
	int a,b,c;

	printf("Moi nhap 3 canh cua mot tam giac \n");
	printf("Canh Thu nhat co do dai la : ");
	scanf("%d",&a);
	printf("Canh Thu hai co do dai la : ");
	scanf("%d",&b);
	printf("Canh Thu ba co do dai la : ");
	scanf("%d",&c);
	
	if(Tinh(a,b,c)==0){
		printf("Khong phai tam giac ");
	}else
	printf("Chu vi tam giac la %d ",Tinh(a,b,c));  
}
