#include<stdio.h>
    int num[3];
    int i=0;
    int third_position=0;
    int second_position=0;
    int one,two,three,four=0;
void position_three(){
third_position=num[0]/10;
    third_position%=10;
    printf("\nThird position : %d",third_position);

}
void position_two(){
        second_position=num[1]/10;
        second_position/=10;
        second_position%=10;
    printf("\nSecond position : %d",second_position);  
}
void biggest_number(){
    four=num[2]%10;
    num[2]/=10;
    three=num[2]%10;
    num[2]/=10;
    two=num[2]%10;
    num[2]/=10;
    one=num[2]%10;
    int large=one;
    if(two>large){
        large = two;
    }
    if(three>large){
        large = three;
    }
    if(four>large){
        large = four;
    }
    printf("\nGreatest number : %d",large);
 
}
int main(){
printf("\nEnter three values between (1111 to 9999) : ");
    for(i=0;i<3;i++){
    scanf("%d",&num[i]);
    }
    position_three();
    position_two();
    biggest_number();
       return 0;
}