#include <stdio.h>
int main() {
    int n=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int space=n-i;space>0;space--){
            printf(" ");
        }if(i%2!=0){
        for(int star=1;star<=i;star++){
            printf("* ");
            printf("\n");
        }  
        }
      
    }
    for(int i=1;i<=n-1;i++){
         for(int space=1;space<=i;space++){
            printf(" ");
        }if(i%2==0){
        for(int star=n-i;star>0;star--){
            printf("* ");
             printf("\n");
        }
    }
    }
    return 0;
}