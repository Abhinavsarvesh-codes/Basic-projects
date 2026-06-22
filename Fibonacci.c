#include<stdio.h>
int o=0;
int p=1;
int n = 0;
int fibonacci(int n) {
if(n == 0) return 0;
for(int i=2;i<=n;i++){
int result = o+p;
o = p;
p = result ;
}
return p;         
}
int main(){
printf("Enter a number :");
 if (scanf("%d", &n) != 1) return 0;
printf("%d", fibonacci(n));
return 0;
}