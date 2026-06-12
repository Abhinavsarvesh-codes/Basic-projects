#include<stdio.h>
int main(){
    char name;
    int maths;
    int physics;
    int chemistry;
    float cutoff;
printf("\nWELCOME TO CUTOFF CALCULATOR!");
printf("\nENTER YOUR NAME :");
scanf("%s" , &name );

printf("ENTER YOUR MATHS MARK :");
scanf("%f" , &maths); 

printf("ENTER YOUR PHYSICS MARK :");
scanf("%f" , &physics); 

printf("ENTER YOUR CHEMISTRY MARK :");
scanf("%f" , &chemistry); 

cutoff = maths+(physics+chemistry)/2;

printf("NAME = %s\n", name );

printf("MATHS = %.0f\n" , maths);

printf("PHYSICS = %.0f\n" , physics);

printf("YOUR CUTOFF = %.1f\n", cutoff );
}