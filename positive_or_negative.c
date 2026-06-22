#include<stdio.h>
int M;
char* checkSign(int M) {
    if(M>0){
        return "Positive";
    }
    else if(M<0){
        return "Negative" ;
    }
    else{
        return "Neutral";
    }
}
int main(){
    printf("Enter a number :");
    scanf("%d", &M);
    printf("%s", checkSign(M));
return 0;
}