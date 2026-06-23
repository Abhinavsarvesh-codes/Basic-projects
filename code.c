#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
int abc;
int n = 0;
int N =0;
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
int times = 0;
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
int M = 0;
int rem =0;
int sum=0;
int m = 0;
int f = 0;
int digits = 0 ;
int reverse = 0;
char operator ;
double x=0.0;
double y=0.0;
double z=0.0;
int o=0;
int p=1;
int K =0;
int v =0;
int s = 0;
int l=0;
int j=0;
float units = 0;
float newunit = 0;
float oldreading =2313;
float newreading = 0;
bool result;
int J = 0;
int limit = 0;
int NUM = 0;
char* checkEvenOrOdd(int N) {
    if(N%2==0){
           return "even";      
    }
    else {
           return "odd";
    }
}
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
 int sumOfDigits(int n) {
    while(n!=0){
     rem  = n%10;
    sum +=  rem;
    n/=10;
    }
    return sum;
     
}
int countDigits(int m) {

    if(m == 0){
        return 1;
    }
    else{
        while(m!=0){
            times++;
            m/=10;
        }
        return times;
    }

}
int reverseNumber(int f) {
    while(f!=0){
        digits = f%10;
        reverse = reverse*10+digits;
        f/=10;
    }
    return reverse;
}
int fibonacci(int n) {
if(n == 0) return 0;
for(int i=2;i<=n;i++){
int result = o+p;
o = p;
p = result ;
}
return p;         
}
bool isPerfectNumber(int K) {
    if(K<=1)  return false;
    int add = 0 ;
    for(int a = 1; a<K; a++){
        if(n%a==0){
            add+=a;
        }
    }return add == K ;   
}

int factorial(int v) {
    if(v==0) return 1;
    int fact = 1;
     for(int i = 2;i<=n;i++){
       fact *=i;
       return fact;
     }
     
    }
    bool isPrime(int s) {
    if(s<=1) return false;
    for(int i=2;i<n;i++){
        if(s%i==0)
            return false;
        
    }return true;
}
int squareRoot(int l) {
    
 for(int i=1;i*i<=l;i++){
 j = i;
}
    return j;
}
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

printf("6.CHECK ODD OR EVEN\n");

printf("7.CHECK WHETHER POSITIVE OR NEGATIVE\n");

printf("8.SUM THE DIGITS OF A VALUE\n");

printf("9.TO COUNT THE DIGITS OF A VALUE\n");

printf("10.TO REVERSE A NUMBER\n");

printf("11.FIBONACCI NUMBER\n");

printf("12.PERFECT NUMBER\n");

printf("13.FACTORIAL\n");

printf("14.PRIME NUMBER\n");

printf("15.SQUARE ROOT\n");

printf("16.EB BILL GENERATOR \n");

printf("17. MULTIPLICATION TABLE\n");

printf("18.FACTOR FINDER\n");

scanf("%d" ,&choice );

if(choice == 1 ){
    //AGE CALCULATOR PROGRAM
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
// CUTOFF CALCULATOR PROGRAM
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
    // STORY WRITING PROGRAM
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

printf("\n ONCE A %s KING NAMED %s LIVED IN HIS KINGDOM . \n" , adjective1 , noun1);

printf("HIS KINGDOM WAS LOCATED IN %s %s.\n ", adjective3 , noun3);

printf("HE WANTED TO TRAIN HIS %s %s.\n " , verb , noun2 );

printf("BUT %s WAS VERY %s.\n" , noun2 , adjective2);

printf("SO THE KING WAS AMAZED!");

}

else if(choice == 4){
// SIMPLE CALCULATOR PROGRAM
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
    // NUMBER GUESSING GAME
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
else if(choice == 6){
    // CHECK ODD OR EVEN
    printf("Enter a number :");
    scanf("%d", &N);
    printf("%s", checkEvenOrOdd(N));
}
else if(choice == 7){
    // CHECK POSITIVE OR NEGATIVE
    printf("Enter a number :");
    scanf("%d", &M);
    printf("%s", checkSign(M));
}
else if(choice == 8){
    // ADD THE DIGITS IN A VALUE
    printf("Enter a number :");
    scanf("%d", &n);
    printf("%d", sumOfDigits(n));
}
else if(choice == 9){
    // COUNT THE NUMBERS IN A VALUE
    printf("Enter a number :");
    scanf("%d", &m);
    printf("%d", countDigits(m));
}
else if(choice == 10){
    // REVERSE THE NUMBER
    printf("Enter a number :");
    scanf("%d", &f);
    printf("%d", reverseNumber(f));
}
else if(choice == 11){
    printf("Enter a number :");
  if (scanf("%d", &n) != 1) return 0;
    printf("%d", fibonacci(n));
}
else if(choice == 12){
    printf("Enter a number :");
    scanf("%d", &K);
    result = isPerfectNumber(K);
    printf(result ? "True" : "False");
}
else if(choice == 13){
    printf("Enter a number :");
    scanf("%d", &v);
    printf("%d", factorial(v));
}
else if(choice == 14){
    printf("Enter a number :");
    scanf("%d", &s);
    printf("%s\n", isPrime(s) ? "True" : "False");
}
else if(choice == 15){
    printf("Enter a number :");
    scanf("%d", &l);
    printf("%d", squareRoot(l));
}
else if(choice == 16){
    printf("\nEnter your current EB reading :");
    scanf("%f" , &newreading);
    units = newreading-oldreading;
    printf("\nTotal units : %.2f" , units);
    if(units<=500){
        if(units<=200){
            printf("\nIt's completely free !");
        }
        else if(units>200&&units<=400){
            newunit = units-200;
            newunit*=4.70;
            printf("\nBill = %.2f",newunit);
        }
        else if(units>400&&units<=500){
            newunit = units-200;
            newunit*=6.30;
            printf("\nBill = %.2f",newunit);
        }
    }
    else if(units>500){
        if(units<=100){
            printf("\nIt's completely free !");
        }
        else if(units>100&&units<=400){
            newunit = units - 100;
            newunit*=4.70;
            printf("\nBill = %.2f",newunit);
       }
        else if(units>400&&units<=500){
            newunit = units - 100;
            newunit*=6.30;
            printf("\nBill = %.2f",newunit);
        }
        else if(units>600&&units<=700){
            newunit = units - 100;
            newunit*=8.40;
            printf("\nBill = %.2f",newunit);
        }
        else if(units>700&&units<=800){
            newunit = units - 100;
            newunit*=9.45;
            printf("\nBill = %.2f",newunit);
        }
         else if(units>800&&units<=1000){
            newunit = units - 100;
            newunit*=10.50;
            printf("\nBill = %.2f",newunit);
        }
}
else if(units>1000){
            units*=11.55;
            printf("\nBill = %.2f",units);
}
}
else if(choice == 17){
    printf("\nEnter the multiplication table number : ");
    scanf("%d",&J);
    printf("\nEnter the limit :");
    scanf("%d",&limit);
    for(int i = 1;i<=limit;i++){
        printf(" %d x %d = %d\n " ,i,J,i*J);
    }
}
else if(choice == 18){
      printf("\nEnter a number :");
    scanf("%d",&num);
    printf("\nFactors of %d are" , num);
for(int i=1;i<=num;i++){
  if(num%i==0){
    printf(" %d,", i);  
    } 
}
}
printf("\nDO YOU WANT TO USE IT AGAIN ? THEN ENTER 0 :");
scanf("%d",&again);
if(again == 0){
goto ABHINAVSARVESH;
}
printf("\nTHANK YOU !");
return 0; 

}

