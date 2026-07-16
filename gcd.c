#include <stdio.h>

int find_gcd(int a, int b) {
     int  temp;
     while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
     }
     return a;
}
int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d", find_gcd(a, b));
    return 0;
}

