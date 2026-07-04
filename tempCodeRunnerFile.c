#include<stdio.h>
int main(){
FILE *fp;
int phone=0;
fp=fopen("Sample.txt","w");
printf("\nEnter your phone number :");
scanf("%d",&phone);
fprintf(fp,"%d",phone);
fclose(fp);
fp=fopen("Sample.txt","r");
fscanf(fp,"%d",&phone);
printf("Your phone number: %d",phone);
fclose(fp);
    return 0;

}