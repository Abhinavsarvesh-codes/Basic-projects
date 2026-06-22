#include<stdio.h>
int f = 0;
int digits = 0 ;
int reverse = 0;
int reverseNumber(int f) {
    while(f!=0){
        digits = f%10;
        reverse = reverse*10+digits;
        f/=10;
    }
    return reverse;
}
int main(){
    printf("Enter a number :");
    scanf("%d", &f);
    printf("%d", reverseNumber(f));
return 0;
}