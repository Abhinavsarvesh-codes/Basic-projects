#include <stdio.h>
#include <string.h>

int count_consonants(const char *s) {
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        char ch = s[i];
        if(isalpha(ch)&&ch!='a'&&ch!='A'&&ch!='e'&&ch!='E'&&ch!='I'&&ch!='o'&&ch!='i'&&ch!='O'&&ch!='u'&&ch!='U'){
            count++;
        }
    }
    return count;
}
int main() {
    char s[100005];
    fgets(s, sizeof(s), stdin);

    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n')
        s[len - 1] = '\0';

    printf("%d", count_consonants(s));

    return 0;
}