#include <stdio.h>
int main() {
    char choice;
    int m1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int m2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    int result[3][3] = {0};

    printf("Matrix 1:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", m1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix 2:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", m2[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter your choice (+, -, *): ");
    scanf(" %c", &choice);  
       switch (choice) {
    case '+':
        printf("Addition:\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%d\t", m1[i][j] + m2[i][j]);
            }
            printf("\n");
        }
        break;

    case '-':
        printf("Subtraction:\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%d\t", m1[i][j] - m2[i][j]);
            }
            printf("\n");
        }
        break;

    case '*':
            for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result[i][j] = 0;
                for (int k = 0; k < 3; k++) {
                    result[i][j] += m1[i][k] * m2[k][j];
                }
            }
        }

        printf("Multiplication:\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%d\t", result[i][j]);
            }
            printf("\n");
        }
        break;

    default:
        printf("Invalid choice!\n");
    }

    return 0;
}
