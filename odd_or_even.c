#include<stdio.h>
int N;
char* checkEvenOrOdd(int N) {
    if(N%2==0){
           return "even";      
    }
    else {
           return "odd";
    }
}
int main(){
printf("Enter a number :");
    scanf("%d", &N);
    printf("%s", checkEvenOrOdd(N));
return 0;
}