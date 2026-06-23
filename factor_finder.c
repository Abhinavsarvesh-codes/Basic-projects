#include<stdio.h>
int main(){
    int num=0;
    printf("\nEnter a number :");
    scanf("%d",&num);
    printf("\nFactors of %d are" , num);
for(int i=1;i<=num;i++){
  if(num%i==0){
    printf(" %d,", i);  
    } 
}
    return 0;
}