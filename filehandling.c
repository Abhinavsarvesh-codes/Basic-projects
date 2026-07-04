#include <stdio.h>
FILE *fp;
char name[50];
int tmark, emark, mmark, smark, ssmark, choice;
void read(){
    int serial, count = 1;
    fp = fopen("Student_details.txt", "r");
    if (fp == NULL) {
        printf("\nFile not found!");
        return;
    }
    printf("\nEnter the serial number of the student: ");
    scanf("%d", &serial);
    while (fscanf(fp, "%49s", name) == 1){
        fscanf(fp, "%d", &tmark);
        fscanf(fp, "%d", &emark);
        fscanf(fp, "%d", &mmark);
        fscanf(fp, "%d", &smark);
        fscanf(fp, "%d", &ssmark);
        if (count == serial){
            printf("\n---------- Student %d ----------", serial);
            printf("\nName                : %s", name);
            printf("\nTamil mark          : %d", tmark);
            printf("\nEnglish mark        : %d", emark);
            printf("\nMaths mark          : %d", mmark);
            printf("\nScience mark        : %d", smark);
            printf("\nSocial Science mark : %d", ssmark);
            printf("\nTotal mark          : %d", tmark + emark + mmark + smark + ssmark);
            if(tmark >= 35 && emark >= 35 && mmark >= 35 && smark >= 35 && ssmark >= 35){
                printf("\nVerdict             : PASS");
            }
            else
                printf("\nVerdict             : FAIL");

            fclose(fp);
            return;
        }
        count++;
    }
    printf("\nStudent with serial number %d not found.", serial);
    fclose(fp);
}
void write()
{
    int n;
    fp = fopen("Student_details.txt", "w");
    if (fp == NULL)
    {
        printf("\nError opening file!");
        return;
    }
    printf("\nHow many students do you want to enter? ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("\n----- Student %d -----", i);

        printf("\nEnter your name : ");
        scanf("%49s", name);

        printf("Enter Tamil mark : ");
        scanf("%d", &tmark);

        printf("Enter English mark : ");
        scanf("%d", &emark);

        printf("Enter Maths mark : ");
        scanf("%d", &mmark);

        printf("Enter Science mark : ");
        scanf("%d", &smark);

        printf("Enter Social Science mark : ");
        scanf("%d", &ssmark);

        fprintf(fp, "%s\n", name);
        fprintf(fp, "%d\n", tmark);
        fprintf(fp, "%d\n", emark);
        fprintf(fp, "%d\n", mmark);
        fprintf(fp, "%d\n", smark);
        fprintf(fp, "%d\n", ssmark);
    }

    fclose(fp);

    printf("\nStudent data saved successfully.");
}

void append()
{
    int n;

    fp = fopen("Student_details.txt", "a");

    if (fp == NULL)
    {
        printf("\nError opening file!");
        return;
    }

    printf("\nHow many students do you want to add? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("\n----- Student %d -----", i);

        printf("\nEnter your name : ");
        scanf("%49s", name);

        printf("Enter Tamil mark : ");
        scanf("%d", &tmark);

        printf("Enter English mark : ");
        scanf("%d", &emark);

        printf("Enter Maths mark : ");
        scanf("%d", &mmark);

        printf("Enter Science mark : ");
        scanf("%d", &smark);

        printf("Enter Social Science mark : ");
        scanf("%d", &ssmark);

        fprintf(fp, "%s\n", name);
        fprintf(fp, "%d\n", tmark);
        fprintf(fp, "%d\n", emark);
        fprintf(fp, "%d\n", mmark);
        fprintf(fp, "%d\n", smark);
        fprintf(fp, "%d\n", ssmark);
    }

    fclose(fp);

    printf("\nStudent data appended successfully.");
}

int main()
{
    printf("\n---------- Student Details ----------");
    printf("\n1. Enter student data (New File)");
    printf("\n2. Read a student's data");
    printf("\n3. Add student data");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        write();
    }
    else if (choice == 2)
    {
        read();
    }
    else if (choice == 3)
    {
        append();
    }
    else
    {
        printf("\nInvalid choice!");
    }

    return 0;
}