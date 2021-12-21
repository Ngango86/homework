#include <stdio.h>
int main(){
    int m,d;
    printf("Nhap m=");
    scanf("%d" ,&m);
    printf("Nhap d=");
    scanf("%d" ,&d);

    if(m>0 && m<13 && d>0 && d<32){
        if(m==1){
            printf("Ngay thu: %d trong nam\n", d);
            printf("Ngay thu: %d%7+1" ,d%7+1);
        }else{
            if(m==2){
                if(m<=28){
                   printf("Ngay thu: %d trong nam\n" ,d+31);
                   printf("Ngay thu: (%d+31)%7+1" ,(d+31)%7+1); 
                }else{
                    printf("Error!");
                }
            }else{
                if(m==3){
                    printf("Ngay thu: %d trong nam\n" ,d+31+28);
                    printf("Ngay thu: (%d+31+28)%7+1" ,(d+31+28)%7+1);
                }else{
                    if(m==4){
                        printf("Ngay thu: %d trong nam" ,d+31+28+31);
                        printf("Ngay thu: (%d+31+28+31)%7+1" ,(d+31+28+31)%7+1);
                    }else{
                        if(m==5){
                           printf("Ngay thu: %d trong nam\n" ,d+31+28+31+30);
                           printf("Ngay thu: (%d+31+28+31+30)%7+1" ,(d+31+28+31+30)%7+1);
                        }else{
                            if(m==6){
                              printf("Ngay thu: %d trong nam\n" ,d+31+28+31+30+31);
                              printf("Ngay thu: (%d+31+28+31+30+31)%7+1" ,(d+31+28+31+30+31)%7+1);  
                            }else{
                                if(m==7){
                                    printf("Ngay thu: %d trong nam\n" ,d+31+28+31+30+31+31);
                                    printf("Ngay thu: (%d+31+28+31+30+31+31)%7+1" ,(d+31+28+31+30+31+31)%7+1);  
                                }else
                                   if(m==8){
                                    printf("Ngay thu: %d trong nam\n" ,d+31+28+31+30+31+31+29);
                                    printf("Ngay thu: (%d+31+28+31+30+31+31+29)%7+1" ,(d+31+28+31+30+31+31+29)%7+1); 
                                   }else{
                                       if(m==9){
                                           printf("Ngay thu: %d trong nam\n" ,d+31+28+31+30+31+31+29+30);
                                           printf("Ngay thu: (%d+31+28+31+30+31+31+29+30)%7+1" ,(d+31+28+31+30+31+31+29+30)%7+1);
                                       }else{
                                           if(m==10){
                                             printf("Ngay thu: %d trong nam\n" ,d+31+28+31+30+31+31+29+30+31);
                                             printf("Ngay thu: (%d+31+28+31+30+31+31+29+30+31)%7+1" ,(d+31+28+31+30+31+31+29+30+31)%7+1);  
                                           }else{
                                               if(m==11){
                                                   printf("Ngay thu: %d trong nam\n" ,d+31+28+31+30+31+31+29+30+31+30);
                                                   printf("Ngay thu: (%d+31+28+31+30+31+31+29+30+31+30)%7+1" ,(d+31+28+31+30+31+31+29+30+31+30)%7+1); 
                                               }else{
                                                   if(m==12){
                                                      printf("Ngay thu: %d trong nam\n" ,d+31+28+31+30+31+31+29+30+31+30+31);
                                                      printf("Ngay thu: (%d+31+28+31+30+31+31+29+30+31+30+31)%7+1" ,(d+31+28+31+30+31+31+29+30+31+30+31)%7+1); 
                                                   }else{
                                                       printf("Error!");
                                                   }
                                               }
                                           }
                                       }
                                   }                               
                            }
                        }
                    }
                }
            }
        }
            
        
    }
}