#include<stdio.h>
int main(){
float maths = 0.0f;
float physics = 0.0f;
float chemistry = 0.0f;
float cutoff = 0.0f;
char name ="";
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


    return 0;
}