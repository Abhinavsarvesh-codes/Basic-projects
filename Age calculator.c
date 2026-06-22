#include<stdio.h>
int main(){
char name [20] = "";
int birthyear = 0;
int again;
int birthmonth = 0;
int birthdate = 0;
int currentyear = 0;
int currentmonth = 0;
int currentdate = 0;
int ageyear = 0;
int agemonth = 0;
int agedate = 0;
    printf("\nWELCOME TO AGE CALCULATOR!");

printf("\nEnter your name :");
scanf("%s" , name);

printf("Enter your year of birth :\n");
scanf("%d" , &birthyear);

printf("Enter your month of birth :\n");
scanf("%d" , &birthmonth);

printf("Enter your date of birth :\n" );
scanf("%d" , &birthdate);

printf("Enter current year :\n");
scanf("%d" , &currentyear);

printf("Enter current month :\n");
scanf("%d" , &currentmonth);

printf("Enter current date :\n");
scanf("%d" , &currentdate);

if(currentdate<birthdate){
currentdate += 30;
currentmonth--;
}
agedate = currentdate-birthdate;

if(currentmonth<birthmonth){
currentmonth += 12;
currentyear--;
}
agemonth = currentmonth-birthmonth;

ageyear = currentyear-birthyear;
printf("\n%s your age is %d years %d months %d days!" , name, ageyear , agemonth , agedate );


    return 0;
}