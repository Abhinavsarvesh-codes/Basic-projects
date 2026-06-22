#include<stdio.h>
int l=0;
int j=0;
int squareRoot(int l) {
    
 for(int i=1;i*i<=l;i++){
 j = i;
}
    return j;
}
int main(){
    printf("Enter a number :");
    scanf("%d", &l);
    printf("%d", squareRoot(l));
return 0;
}