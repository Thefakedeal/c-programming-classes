#include <stdio.h>

float simple_interest(int p,int t,int r);
int main(){
    int p, t, r;
  
    printf("Please Enter Principal, Time(in Year), and Rate");
    scanf("%d %d %d", &p,&t,&r);
    
    printf("Interest: %f", simple_interest(p,t,r));
    return 0;
}

float simple_interest(int p,int t, int r){
 return (p*t*r)/100;
}