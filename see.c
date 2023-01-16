#include "system.h"

void see(void)
{
    opt_t check;
    FILE *ptr;
    int test = 0;
    int rate;
    int choice;
    float time;
    float intrst;
    ptr = fopen("record.dat", "r");
    printf("Do you want to check by\n1.Account no\n2.Name\nEnter your choice:");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter the account number:");
        scanf("%d", &check.acc_no);
        while (fscanf(ptr, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d", &up.acc_no, up.name, &add.month, &add.day, &add.year, &up.age, up.address, up.citizenship, &up.phone, up.acc_type, &up.amt, &add_2.month, &add_2.day, &add_2.year) != EOF)
        {
            if (up.acc_no == check.acc_no)
            {
                system("cls");
                test = 1;
                printf("\nAccount NO.:%d\n'Name:%s \nDOB:%d/%d/%d \nAge:%d \nAddress:%s \nCitizenship No:%s \nPhone number:%.0lf \nType Of Account:%s \nAmount deposited:$ %.2f \nDate Of Deposit:%d/%d/%d\n\n", up.acc_no, up.name, add.month, add.day, add.year, up.age, up.address, up.citizenship, up.phone,
                       up.acc_type, up.amt, add_2.month, add_2.day, add_2.year);

                if (strcmp(up.acc_type, "fixed1") == 0)
                {
                    time = 1.0;
                    rate = 9;
                    intrst = interest(time, up.amt, rate);
                    printf("\n\nYou will get $%.2f as interest on %d/%d/%d", intrst, add_2.month, add_2.day, add_2.year + 1);
                }
                else if (strcmp(up.acc_type, "fixed2") == 0)
                {
                    time = 2.0;
                    rate = 11;
                    intrst = interest(time, up.amt, rate);
                    printf("\n\nYou will get $.%.2f as interest on %d/%d/%d", intrst, add_2.month, add_2.day, add_2.year + 2);
                }
                else if (strcmp(up.acc_type, "fixed3") == 0)
                {
                    time = 3.0;
                    rate = 13;
                    intrst = interest(time, up.amt, rate);
                    printf("\n\nYou will get $.%.2f as interest on %d/%d/%d", intrst, add_2.month, add_2.day, add_2.year + 3);
                }
                else if (strcmp(up.acc_type, "saving") == 0)
                {
                    time = (1.0 / 12.0);
                    rate = 8;
                    intrst = interest(time, up.amt, rate);
                    printf("\n\nYou will get $.%.2f as interest on %d of every month", intrst, add_2.day);
                }
                else if (strcmp(up.acc_type, "current") == 0)
                {

                    printf("\n\nYou will get no interest\a\a");
                }
            }
        }
    }
    else if (choice == 2)
    {
        printf("Enter the name:");
        scanf("%s", check.name);
        while (fscanf(ptr, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d", &up.acc_no, up.name, &add.month, &add.day, &add.year, &up.age, up.address, up.citizenship, &up.phone, up.acc_type, &up.amt, &add_2.month, &add_2.day, &add_2.year) != EOF)
        {
            if (strcmp(up.name, check.name) == 0)
            {
                system("cls");
                test = 1;
                printf("\nAccount No.:%d\nName:%s \nDOB:%d/%d/%d \nAge:%d \nAddress:%s \nCitizenship No:%s \nPhone number:%.0lf \nType Of Account:%s \nAmount deposited:$%.2f \nDate Of Deposit:%d/%d/%d\n\n", up.acc_no, up.name, add.month, add.day, add.year, up.age, up.address, up.citizenship, up.phone,
                       up.acc_type, up.amt, add_2.month, add_2.day, add_2.year);
                if (strcmp(up.acc_type, "fixed1") == 0)
                {
                    time = 1.0;
                    rate = 9;
                    intrst = interest(time, up.amt, rate);
                    printf("\n\nYou will get $.%.2f as interest on %d/%d/%d", intrst, add_2.month, add_2.day, add_2.year + 1);
                }
                else if (strcmp(up.acc_type, "fixed2") == 0)
                {
                    time = 2.0;
                    rate = 11;
                    intrst = interest(time, up.amt, rate);
                    printf("\n\nYou will get $.%.2f as interest on %d/%d/%d", intrst, add_2.month, add_2.day, add_2.year + 2);
                }
                else if (strcmp(up.acc_type, "fixed3") == 0)
                {
                    time = 3.0;
                    rate = 13;
                    intrst = interest(time, up.amt, rate);
                    printf("\n\nYou will get $.%.2f as interest on %d/%d/%d", intrst, add_2.month, add_2.day, add_2.year + 3);
                }
                else if (strcmp(up.acc_type, "saving") == 0)
                {
                    time = (1.0 / 12.0);
                    rate = 8;
                    intrst = interest(time, up.amt, rate);
                    printf("\n\nYou will get $.%.2f as interest on %d of every month", intrst, add_2.day);
                }
                else if (strcmp(up.acc_type, "current") == 0)
                {

                    printf("\n\nYou will get no interest\a\a");
                }
            }
        }
    }

    fclose(ptr);
    if (test != 1)
    {
        system("cls");
        printf("\nRecord not found!!\a\a\a");
    see_invalid:
        printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
        scanf("%d", &main_exit);
        system("cls");
        if (main_exit == 1)
            menu();
        else if (main_exit == 2)
            cclose();
        else if (main_exit == 0)
            see();
        else
        {
            system("cls");
            printf("\nInvalid!\a");
            goto see_invalid;
        }
    }
    else
    {
        printf("\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d", &main_exit);
    }
    if (main_exit == 1)
    {
        system("cls");
        menu();
    }

    else
    {

        system("cls");
        cclose();
    }
}
