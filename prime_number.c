#include<stdio.h>
#include<stdbool.h>
int s = 0;
int n = 0;
bool isPrime(int s) {
    if(s<=1) return false;
    for(int i=2;i<n;i++){
        if(s%i==0)
            return false;
        
    }return true;
}
int main(){
     printf("Enter a number :");
    scanf("%d", &s);
    printf("%s\n", isPrime(s) ? "True" : "False");
return 0;
}