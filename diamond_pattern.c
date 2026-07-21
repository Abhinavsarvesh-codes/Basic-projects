#include <stdio.h>
void diamondPattern(int n){
    int space;
    int star;
    for(int i=1;i<=n;i++){
        for(space=n-i;space>0;space--){
            printf(" ");
        }
        for(star=1;star<=i;star++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=n-1;i++){
        for(space=1;space<=i;space++){
            printf(" ");
        }
        for(star=n-i;star>0;star--){
            printf("* ");
        }
        printf("\n");
    }
}
int main() {
    int n;
    scanf("%d", &n);
    diamondPattern(n);
    return 0;
}