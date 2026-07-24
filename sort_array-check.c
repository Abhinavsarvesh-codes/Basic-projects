#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool isSorted(int *arr, int n) {
    // write your solution below
for (int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        return false;
    }
}
return true;
}



// --------------------------------------------------------------
int main() {
    char input[100005];
    fgets(input, sizeof(input), stdin);

    int len = strlen(input);
    if (len > 0 && input[len - 1] == '\n')
        input[len - 1] = '\0';

    int arr[100005];
    int n = 0;

    if (strcmp(input, "[]") != 0) {
        char *p = input + 1;  // skip '['
        while (*p && *p != ']') {
            arr[n++] = atoi(p);
            while (*p && *p != ',' && *p != ']') p++;
            if (*p == ',') p++;
        }
    }

    if (isSorted(arr, n))
        printf("True");
    else
        printf("False");

    return 0;
}