#include <stdio.h>
int main(){
	int n,x,t=0;
	do{	
	printf("So phan tu trong mang(so lon hon 0) : ");
	scanf("%d",&n);
	}while(n<=0);
	
    printf("Nhap so can tim kiem : ");
    scanf("%d",&x);
    
    int ary[n];
    int i;
    for(i=1; i<=n; i++)
    {    
   	printf("So thu %d :",i);
	scanf("%d",&ary[i]);
	if(x==ary[i]){
	t++;
	}
    }
    if(t>0){
    	printf("X nam trong mang");
	}else{
		printf("X khong nam trong mang");
	}

}