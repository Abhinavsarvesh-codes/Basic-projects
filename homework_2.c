#include <stdio.h>

int number[1000];
int count = 0;
int input[5];
int k = 0;

void prime_number() {
    for (int num = 2; num <= 1000; num++) {
        int isprime = 1;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isprime = 0;
                break;
            }
        }

        if (isprime) {
            number[count] = num;
            count++;
        }
    }
}

void getInput() {
    printf("Enter any five numbers:\n");
    for (int j = 0; j < 5; j++) {
        scanf("%d", &input[j]);
    }

    printf("Enter the position of prime number: ");
    scanf("%d", &k);
}

int main() {
    prime_number();
    getInput();
    for (int j = 0; j < 5; j++) {
        printf("%d\n", number[k - 1] + input[j]);
    }

    return 0;
}