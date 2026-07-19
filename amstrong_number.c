#include <stdio.h>
#include <stdbool.h>

bool isArmstrong(int n) {
    int temp=n;
     int count=0;
     temp=n;
     while(temp>0){
        count++;
        temp/=10;
     }
     temp=n;
     int result=0;
     while(temp>0){
        int digit=temp%10;
        int power =1;
        for(int i=0;i<count;i++)
            power*=digit;
        result+=power;
        temp/=10;
     }
        return result==n;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%s\n", isArmstrong(n) ? "True" : "False");
    return 0;
}