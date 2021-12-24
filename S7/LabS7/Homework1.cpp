#include <stdio.h>
int main(){
	int n,t=0,tb=0;
	do{	
	printf("So phan tu trong mang(so lon hon 0) : ");
	scanf("%d",&n);
	}while(n<=0);

    int ary[n];
    int i;
    for(i=1; i<=n; i++)
    {    
   	printf("So thu %d :",i);
	scanf("%d",&ary[i]);
	if(ary[i] %2 != 0){   
    t++;
    tb=tb+ary[i];
	}
    }
    if(t != 0 ){  
	  printf("Trung binh so le : %f ",(float)tb/t);
	}else{
		printf("Dsach k co so le");
	}

}