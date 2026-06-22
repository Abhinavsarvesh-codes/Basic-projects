#include<stdio.h>
#include<stdbool.h>
int K =0;
int result = 0;
int n = 0; 
bool isPerfectNumber(int K) {
    if(K<=1)  return false;
    int add = 0 ;
    for(int a = 1; a<K; a++){
        if(n%a==0){
            add+=a;
        }
    }return add == K ;   
}
int main(){
    printf("Enter a number :");
    scanf("%d", &K);
    result = isPerfectNumber(K);
    printf(result ? "True" : "False");
return 0;
}