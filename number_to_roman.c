#include <stdio.h>
#include <string.h>

char* int_to_roman(int n){
    static char roman[][5]={"I","II","III","IV","V","VI","VII","VIII","IX","X","XI","XII"};
    int num[]={1,2,3,4,5,6,7,8,9,10,11,12};
    for(int i=0;i<12;i++){
        if(n==num[i]){
            return roman[i];
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%s", int_to_roman(n));
}