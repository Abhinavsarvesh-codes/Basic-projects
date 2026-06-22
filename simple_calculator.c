#include<stdio.h>
int main(){
double x=0.0;
double y=0.0;
double z=0.0;
char operator = "" ;
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
return 0;
}