#include<stdio.h>
int main()
{
    int J = 0;
    int limit = 0;
    printf("\nEnter the multiplication table number : ");
    scanf("%d",&J);
    printf("\nEnter the limit :");
    scanf("%d",&limit);
    for(int i = 1;i<=limit;i++){
        printf(" %d x %d = %d\n " ,i,J,i*J);
    }
    return 0;
}