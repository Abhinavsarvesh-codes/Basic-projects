
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_anagram(char *s1, char *s2) {
    int length_of_s1=strlen(s1);
    int length_of_s2=strlen(s2);
    int count_of_s1=0;
    int count_of_s2=0;
    char charcter;
    if(length_of_s1!=length_of_s2){
        return false;
    }
    else{
            for(int i=0;i<length_of_s1;i++){
            charcter=s1[i];
                for(int j=0;j<length_of_s1;j++){
                    if(charcter==s1[j]){
                        count_of_s1++;
                }
                    if(charcter==s2[j]){
                        count_of_s2++;
                }
    }
}
        if(count_of_s1!=count_of_s2){
            return false;
}
        else{
            return true;
}
}
}
int main() {
    char s1[100000], s2[100000];

    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    printf(is_anagram(s1, s2) ? "True" : "False");

    return 0;
}