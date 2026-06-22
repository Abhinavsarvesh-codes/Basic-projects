#include<stdio.h>
int main(){
char noun1 [50] = "";
char adjective1 [50] = "";
char adjective2 [50] = "";
char adjective3 [50] = "";
char verb [50] = "";
char noun2 [50] = "";
char noun3 [50] = "";
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

    return 0;
}
