#include <stdio.h>

int fibonacci(int n);


int main(){
    int n;

    printf("Enter number");
    scanf("%d", &n);

    for(int i=1; i<=n;i++){
        printf("%d ", fibonacci(i));
    }

}

int fibonacci(int n){
    if(n==1){
        return 1;
    }else if(n==2){
        return 1;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}