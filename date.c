#include <stdio.h>

int main()
{
    int date = 0;
    int month = 0;
    int year = 0;
    int choice = 0;
    int days = 0;
    int original_days = 0;
    int total_days = 0;

    printf("Enter the date: ");
    scanf("%d", &date);

    printf("Enter the month: ");
    scanf("%d", &month);

    printf("Enter the year: ");
    scanf("%d", &year);

    printf("\n1. Check after the current date");
    printf("\n2. Check before the current date");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter number of days: ");
    scanf("%d", &days);

    original_days = days;

    while (days > 0)
    {

        switch (month)
        {
            case 4: case 6: case 9: case 11:
                total_days = 30;
                break;

            case 1: case 3: case 5: case 7:
            case 8: case 10: case 12:
                total_days = 31;
                break;

            case 2:
                if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
                    total_days = 29;
                else
                    total_days = 28;
                break;
        }

        if (choice == 1)
        {
            date++;
            days--;

            if (date > total_days)
            {
                date = 1;
                month++;

                if (month > 12)
                {
                    month = 1;
                    year++;
                }
            }
        }
        else if (choice == 2)
        {
            date--;
            days--;
            if (date < 1)
         {        month--;

            if (month < 1)
              {
                  month = 12;
                    year--;
}
         switch (month)
            {
                case 4: case 6: case 9: case 11:
                    total_days = 30;
                    break;
                case 1: case 3: case 5: case 7:
                case 8: case 10: case 12:
                    total_days = 31;
                        break;

                case 2:
                        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
                        total_days = 29;                        else
                    total_days = 28;
                        break;
                }

                date = total_days;
        }
        }
        else
        {
         printf("Invalid choice!\n");
            return 0;
        }
    }

    if (choice == 1)
    {
        printf("\nAfter %d days, the date is %d/%d/%d\n",
               original_days, date, month, year);
    }
    else
    {
        printf("\nBefore %d days, the date is %d/%d/%d\n",
               original_days, date, month, year);
    }

    return 0;
}