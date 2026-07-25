#include <stdio.h>
#include <string.h>

int countCharacter(char *s, char ch) {
    int count=0;
    int i=0;
     while(s[i]!='\0'){
        if(s[i]==ch){
            count++;
        }
        i++;
     }
     return count;
}
int main() {
    char s[100005];
    char ch;

    if (!fgets(s, sizeof(s), stdin)) return 0;

    // remove newline
    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n')
        s[len - 1] = '\0';

    if (scanf(" %c", &ch) != 1) return 0;  // read single char

    printf("%d", countCharacter(s, ch));
    return 0;
}