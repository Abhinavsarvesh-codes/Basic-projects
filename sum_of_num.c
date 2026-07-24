#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sumArray(int *arr, int n) {
    int total=0;
     for(int i=0; i<=n; i++){
        total+=arr[i];
     }
     return total;
}
int main() {
    char input[100005];
    fgets(input, sizeof(input), stdin);

    int len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') 
        input[len - 1] = '\0';

    int arr[100005];
    int n = 0;

    if (strcmp(input, "[]") != 0) {
        char *ptr = input + 1; // skip '['

        while (*ptr != '\0' && *ptr != ']') {
            char numStr[20];
            int idx = 0;

            while (*ptr != ',' && *ptr != ']' && *ptr != '\0') {
                numStr[idx++] = *ptr;
                ptr++;
            }

            numStr[idx] = '\0';
            arr[n++] = atoi(numStr);

            if (*ptr == ',') ptr++;
        }
    }

    printf("%d", sumArray(arr, n));
    return 0;
}