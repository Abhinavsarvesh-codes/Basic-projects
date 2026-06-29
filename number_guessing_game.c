#include<stdio.h>
#include<time.h>
int main(){
    int num = rand()%100+1;
    int guess = 0;
    int attempts = 0;
srand(time(0));
 
printf("=======Welcome to number guessing game==========\n");
 printf("guess a number between 1 to 100\n");
 do{

scanf("%d" , &guess);
attempts++;
if(num>guess){
 printf("It's low\n");


}
else if(num<guess){
printf("It's high\n"); 
}
 else{
      printf("Yes It's %d you have guessed the correct answer in %d attempts \n",num,attempts );
 };
}
while(num != guess);
return 0;
}