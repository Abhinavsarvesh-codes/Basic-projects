#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int findMinElement(int *arr, int n) {
    if(n==0){
        return 0;
    }
    else{
        int small=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]<small){
                small=arr[i];
            }
        }
        return small;
    }
}
int main() {
    char input[100005];
    fgets(input, sizeof(input), stdin);

    int n = 0;
    int arr[100005];

    int len = strlen(input);
    if (input[len - 1] == '\n') input[len - 1] = '\0';

    if (strcmp(input, "[]") != 0) {
        char *token = strtok(input + 1, ",]");
        while (token != NULL) {
            arr[n++] = atoi(token);
            token = strtok(NULL, ",]");
        }
    }

    printf("%d", findMinElement(arr, n));
    return 0;
}