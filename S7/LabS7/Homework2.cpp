#include <stdio.h>
int main(){
	int n,t=0,tb=0;
	do{	
	printf("So phan tu trong mang(so lon hon 0) : ");
	scanf("%d",&n);
	}while(n<=0);

    int ary[n];
    int i;
    for(i=0; i<n; i++)
    {    
   	printf("So thu %d :",i);
	scanf("%d",&ary[i]);
	if((ary[i] %2 != 0)&&(i%2 == 0)){
    printf("%d la so le o vi tri chan \n",ary[i]);          // sole o vitri chan
    t++;
    tb=tb+ary[i];   
	}
    }
    printf("\nTrung binh so le %d/%d= : %f ",tb,t,(float)tb/t);
}
