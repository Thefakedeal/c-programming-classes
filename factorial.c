#include <stdio.h>

int factorial(int n);

int main(){
    int n;
    printf("Please inter Number");
    scanf("%d",&n);
    printf("%d! = %d", n, factorial(n));
    return 0;
}


int factorial(int n){
    if(n==0){
        return 1;
    }else{
        return n * factorial(n-1);
    }

}