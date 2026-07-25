#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* findFirstVowel(const char *s) {
    const char *vowels="aeiouAEIOU";
    for(int i=0;s[i]!='\0';i++){
        for(int j=0;vowels[j]!='\0';j++){
            if(s[i]==vowels[j]){
                char *res=malloc(2);
                res[0]=s[i];
                res[1]='\0';
                return res;
            }
        }
    }
    char *res=malloc(5);
    strcpy(res,"None");
    return res;
}
int main() {
    char s[100005];
    fgets(s, sizeof(s), stdin);
    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') s[len - 1] = '\0';

    char *result = findFirstVowel(s);
    printf("%s\n", result);
    free(result);

    return 0;
}