#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
srand(time(0));
int attempts=0;
int gen=0;
int number;
int num1=0;
int num2=0;
int num3=0;
int num4=0;
int num[4];
bool dup;
int len = sizeof(num)/sizeof(num[0]);
cout<<"******Welcome to four digit number guessing game******"<<endl;
cout<<"Rules of the game:"<<endl;
cout<<"1. I will guess a four digit number."<<endl;
cout<<"2. Guess a four digit number and enter it."<<endl;
cout<<"3. If you guessed one of the position of the number then I will say the number with its positon. "<<endl; 
for(int i=0;i<4;i++){
do{
    gen = rand()%10;
    dup = false;
for(int j=0;j<i;j++){
 if(num[j]==gen){
    dup = true;
    break;
}
}
}while(dup); 
num[i]=gen;
}
do{
    std::cout<<"\nEnter your guess: ";
    cin>>number;
    num4=number%10;
    number=number/10;
    num3=number%10;
    number=number/10;
    num2=number%10;
    number=number/10;
    num1=number%10;
    number=number/10;
    int count =0;  
    bool n1 = false;
    bool n2 = false;
    bool n3 = false;
    bool n4 = false;
for(int i=0;i<len;i++){
    if(num[i]==num1)
        n1 = true;
    if(num[i]==num2)
        n2 = true;
    if(num[i]==num3)
        n3 = true;
    if(num[i]==num4)
        n4 = true;
}
if(n1) count++;
if(n2) count++;
if(n3) count++;
if(n4) count++;
if(count==1){
std::cout<<"One number is correct"<<endl;
}
else if(count==2){
std::cout<<"Two numbers are correct"<<endl;
}
else if(count==3){
std::cout<<"Three numbers are correct"<<endl;
}
else if(count==4){
std::cout<<"Four numbers are correct"<<endl;
}
else{
    cout<<"Nothing is correct!"<<endl;
}
if(num[0]==num1){
    std::cout<<"Position of "<<num1<<" is correct"<<endl; 
}
if(num[1]==num2){
    std::cout<<"Position of "<<num2<<" is correct"<<endl; 
}
if(num[2]==num3){
    std::cout<<"Position of "<<num3<<" is correct"<<endl; 
}
if(num[3]==num4){
    std::cout<<"Position of "<<num4<<" is correct"<<endl; 
}
attempts++;
}while(!(num[0]==num1&&num[1]==num2&&num[2]==num3&&num[3]==num4));
std::cout<<"The number is "<<num[0]<<num[1]<<num[2]<<num[3]<<endl;
std::cout<<"You have guessed the number in "<<attempts<<" attempts";
}

