#include<stdio.h>
int times = 0;
int m = 0;
int countDigits(int m) {

    if(m == 0){
        return 1;
    }
    else{
        while(m!=0){
            times++;
            m/=10;
        }
        return times;
    }

}
int main(){
    printf("Enter a number :");
    scanf("%d", &m);
    printf("%d", countDigits(m));
return 0;
}