#include<stdio.h>
int rem =0;
int sum=0;
int n = 0;
int sumOfDigits(int n) {
    while(n!=0){
     rem  = n%10;
    sum +=  rem;
    n/=10;
    }
    return sum;
}
int main(){
    printf("Enter a number :");
    scanf("%d", &n);
    printf("%d", sumOfDigits(n));
return 0;
}