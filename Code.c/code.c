#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int abc;
int choice = 0;
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
float maths = 0;
float physics = 0;
float chemistry = 0;
float cutoff = 0.0f;
char noun1 [50] = "";
char adjective1 [50] = "";
char adjective2 [50] = "";
char adjective3 [50] = "";
char verb [50] = "";
char noun2 [50] = "";
char noun3 [50] = "";
int guess;
char operator ;
double x=0.0;
double y=0.0;
double z=0.0;

int main(){
int num = rand()%100+1;
ABHINAVSARVESH:

printf("WELCOME TO ABHINAVSARVESH'S PROGRAMS\n");

printf("PLEASE CHOOSE THE PROGRAM WHICH YOU WANT TO USE\n");

printf("PLEASE USE CAPITAL LETTERS\n");

printf("1.AGE CALCULATOR\n");

printf("2.CUTOFF CALCULATOR\n");

printf("3.STORY\n");

printf("4.SIMPLE CALCULATOR\n");

printf("5.NUMBER GUESSING GAME\n");

scanf("%d" ,&choice );

if(choice == 1 ){
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

}

else if(choice == 2){

printf("\nWELCOME TO CUTOFF CALCULATOR!");
printf("\nENTER YOUR NAME :");
scanf("%s" , &name );

printf("ENTER YOUR MATHS MARK :\n");
scanf("%f" , &maths); 

printf("ENTER YOUR PHYSICS MARK :\n");
scanf("%f" , &physics); 

printf("ENTER YOUR CHEMISTRY MARK :\n");
scanf("%f" , &chemistry); 

cutoff = maths+(physics+chemistry)/2;

printf("NAME = %s\n", name );

printf("MATHS = %.0f\n" , maths);

printf("PHYSICS = %.0f\n" , physics);

printf("YOUR CUTOFF = %.1f\n", cutoff );

}
else if(choice == 3){

printf("\nWELCOME TO STORY CREATOR!");
printf("\nENTER A NOUN (A NAME OF A PERSON (MALE) ) : ");
scanf("%s" , noun1 );

printf("\nENTER A NOUN (A NAME OF AN ANIMAL) : ");
scanf("%s" , noun2 );

printf("\nENTER A NOUN (A NAME OF PLACE) : ");
scanf("%s" , noun3 );

printf("\nENTER AN ADJECTIVE (DESCRIBING THE PERSON) : ");
scanf("%s" , adjective1 );

printf("\nENTER AN ADJECTIVE (DESCRIBING THE ANIMAL) : ");
scanf("%s" , adjective2 );

printf("\nENTER AN ADJECTIVE (DESCRIBING THE PLACE) : ");
scanf("%s" , adjective3 );

printf("\nENTER A VERB : ");
scanf("%s" , verb );

printf("\n ONCE A %s KING NAMED %s  LIVED IN HIS KINGDOM . \n" , adjective1 , noun1);

printf("HIS KINGDOM WAS LOCATED IN %s %s.\n ", adjective3 , noun3);

printf("HE WANTED TO TRAIN HIS %s %s.\n " , verb , noun2 );

printf("BUT %s WAS VERY %s.\n" , noun2 , adjective2);

printf("SO THE KING WAS AMAZED!");

}

else if(choice == 4){

printf("WELCOME TO SIMPLE CALCULATOR \n");

printf("ENTER THE FIRST NUMBER :\n");
scanf(" %lf" , &x);

printf("ENTER THE OPERATOR :\n");
scanf(" %c" , &operator);

printf("ENTER THE SECOND NUMBER :\n");
scanf(" %lf" , &y);

switch(operator){
case'+':
z = x + y;
break;

case'-':
z = x - y;
break;

case'*':
z = x * y;
break;

case'/':
z = x / y;
break;

default:
printf("INVALID OPERATOR");
}
printf("%.1lf %c %.1lf = %.1lf" , x , operator , y , z);

}
else if(choice == 5){
srand(time(0));
 
printf("=======Welcome to number guessing game==========\n");
 printf("guess a number between 1 to 100\n");
 do{

scanf("%d" , &guess);

if(num>guess){
 printf("It's low\n");


}
else if(num<guess){
printf("It's high\n"); 
}
 else{
     printf("Your guess is wright ! It's %d \n" , num );
 };
}
while(num != guess);

}


printf("\nDO YOU WANT TO USE IT AGAIN ? THEN ENTER 0 :");
scanf("%d",&again);
if(again == 0){
goto ABHINAVSARVESH;
}
printf("\nTHANK YOU !");
return 0; 

}

