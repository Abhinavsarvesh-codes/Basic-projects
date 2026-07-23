#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int findSecondLargest(int *arr, int n) {
    // write your solution below
    int greatest=arr[0];
    if(n<2){
        return -1;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>greatest){
            greatest=arr[i];
        }
    }
    int second=0;
    int found=0;
    for(int i=0;i<n;i++){
    if(arr[i]!=greatest&&arr[i]>second){
        second=arr[i];
        found=1;
    }
    }
    if(!found) return -1;
    return second;
    }




// --------------------------------------------------------------
int main() {
    char input[100005];
    fgets(input, sizeof(input), stdin);

    int len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') input[len - 1] = '\0';

    if (strcmp(input, "[]") == 0) {
        printf("-1");
        return 0;
    }

    int arr[100005], n = 0;
    char *p = input + 1; // skip '['

    while (*p && *p != ']') {
        arr[n++] = atoi(p);
        while (*p && *p != ',' && *p != ']') p++;
        if (*p == ',') p++;
    }

    printf("%d", findSecondLargest(arr, n));
    return 0;
}