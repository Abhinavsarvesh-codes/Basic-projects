#include<stdio.h>
int v = 0;
int n = 0;
int factorial(int v) {
    if(v==0) return 1;
    int fact = 1;
     for(int i = 2;i<=n;i++){
       fact *=i;
       return fact;
     }
     
    }
int main(){
    printf("Enter a number :");
    scanf("%d", &v);
    printf("%d", factorial(v));
return 0;
}