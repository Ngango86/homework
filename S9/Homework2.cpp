#include <stdio.h>
int Tongso(int n) {
	int i,t,x;
	while (n >0) {
		x = n % 10;                 // chia 10 lay phan du
		t = t + x;                   // lay phan du cong lai
		n = n / 10;
	}
	return t;
}

int main() {
	int n;
	do {
		printf("Nhap so n>0 : ");  // lay So n
		scanf("%d",&n);
	} while(n<0);
	printf("Tong la : %d ",Tongso(n));         
         // lay ra Tongso khi truyen n

}