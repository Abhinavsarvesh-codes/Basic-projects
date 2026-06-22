#include<stdio.h>
int main(){
    int num = 0;
    int guess = 0;
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
return 0;
}