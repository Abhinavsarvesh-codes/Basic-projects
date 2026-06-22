#include<stdio.h>
int main(){
float units = 0;
float newunit = 0;
float oldreading =2313;
float newreading = 0;
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
return 0;
}