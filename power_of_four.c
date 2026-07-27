#include <stdio.h>
#include <stdbool.h>
bool isPowerOfFour(int n) {
if(n<=0){
    return false;
}
while(n%4==0){
    n/=4;
}
return n==1;
}
int main() {
    int n;
    scanf("%d", &n);

    printf(isPowerOfFour(n) ? "True" : "False");
    return 0;
}