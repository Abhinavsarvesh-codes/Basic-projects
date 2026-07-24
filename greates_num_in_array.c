#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int findMax(int *arr, int n) {
     if(n==0){
        return 0;
     }
     else{
        int greatest=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>greatest){
                greatest=arr[i];
            }
        }
        return greatest;
     }
}
int main() {
    char line[100005];
    fgets(line, sizeof(line), stdin);

    int len = strlen(line);
    if (len > 0 && line[len - 1] == '\n') line[len - 1] = '\0';

    int arr[100005];
    int n = 0;

    if (strcmp(line, "[]") != 0) {
        char *p = line + 1; // skip '['
        while (*p && *p != ']') {
            arr[n++] = atoi(p);
            while (*p && *p != ',' && *p != ']') p++;
            if (*p == ',') p++;
        }
    }

    printf("%d", findMax(arr, n));
    return 0;
}