#include<stdio.h>
void leap_year_generator(){
    int year1=0;
    int year2=0;
    int leapyear=0;
    printf("------Leap years between %d and %d are ------\n",year1,year2);
    printf("Enter the starting year :\n");
    scanf("%d",&year1);
    printf("Enter the ending year :\n");
    scanf("%d",&year2);
for(int i=year1;i<=year2;i++){
    if(i%4==0){
        printf("%d\n",i);
        leapyear++;
    }
}
printf("\nThere are %d leap years",leapyear);
}
void leap_year_check(){
    int year=0;
printf("Enter the year :");
scanf("%d",&year);
if(year%4==0){
    printf("It's leap year\n");
}
else{
    printf("It's not a leapyear\n");
}
}
int main(){
int choice=0;
printf("Welcome to leap year program\n");
printf("1.Leapyear generator.\n");
printf("2.Check the leap year.\n");
scanf("%d",&choice);
if(choice==1){
    leap_year_generator();
}
else if(choice==2){
    leap_year_check();
}
    return 0;
}