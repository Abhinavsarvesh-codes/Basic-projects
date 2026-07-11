#include <stdio.h>

int main() {
    int i,j,n,a,choice;
    printf("\n+++++++++ Welcome to accending and decending sorter++++++++");
    printf("\n1.Accending ordeder");
    printf("\n2.Decending order");
    printf("\nEnter your choice :");
    scanf("%d",&choice);
    if(choice==2){
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers :");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("\n%d",arr[i]);
    }
    }
    else if(choice==1){
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers :");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("\n%d",arr[i]);
        
    }
    }
    return 0;
}