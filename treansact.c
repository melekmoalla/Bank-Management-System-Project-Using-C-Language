#include "system.h"

void transact(void)
{
    opt_t transaction;
    int choice, test = 0;
    FILE *old, *new;

    printf("Enter the account no. of the customer:");
    scanf("%d", &transaction.acc_no);
    if (up.acc_no != 0)
    {
        old = fopen("record.dat", "r");
        new = fopen("new.dat", "w");
        while (fscanf(old, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n", &up.acc_no, up.name, &add.month, &add.day, &add.year, &up.age, up.address, up.citizenship, &up.phone, up.acc_type, &up.amt, &add_2.month, &add_2.day, &add_2.year) != EOF)
        {
            if (up.acc_no == transaction.acc_no)
            {
                test = 1;
                if (strcmp(up.acc_type, "fixed1") == 0 || strcmp(up.acc_type, "fixed2") == 0 || strcmp(up.acc_type, "fixed3") == 0)
                {
                    printf("\a\a\a\n\nYOU CANNOT DEPOSIT OR WITHDRAW CASH IN FIXED ACCOUNTS!!!!!");
                    fordelay(1000000000);
                    system("cls");
                    menu();
                }
                printf("\n\nDo you want to\n1.Deposit\n2.Withdraw?\n\nEnter your choice(1 for deposit and 2 for withdraw):");
                scanf("%d", &choice);
                if (choice == 1)
                {
                    printf("Enter the amount you want to deposit:$ ");
                    scanf("%f", &transaction.amt);
                    up.amt += transaction.amt;
                    fprintf(new, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n", up.acc_no, up.name, add.month, add.day, add.year, up.age, up.address, up.citizenship, up.phone, up.acc_type, up.amt, add_2.month, add_2.day, add_2.year);
                    printf("\n\nDeposited successfully!");
                }
                else
                {
                    printf("Enter the amount you want to withdraw:$ ");
                    scanf("%f", &transaction.amt);
                    up.amt -= transaction.amt;
                    fprintf(new, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n", up.acc_no, up.name, add.month, add.day, add.year, up.age, up.address, up.citizenship, up.phone, up.acc_type, up.amt, add_2.month, add_2.day, add_2.year);
                    printf("\n\nWithdrawn successfully!");
                }
            }
            else
            {
                fprintf(new, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n", up.acc_no, up.name, add.month, add.day, add.year, up.age, up.address, up.citizenship, up.phone, up.acc_type, up.amt, add_2.month, add_2.day, add_2.year);
            }
        }

        fclose(old);
        fclose(new);
        remove("record.dat");
        rename("new.dat", "record.dat");
    }
    if (test != 1)
    {
        printf("\n\nRecord not found!!");
    transact_invalid:
        printf("\n\n\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
        scanf("%d", &main_exit);
        system("cls");
        if (main_exit == 0)
            transact();
        else if (main_exit == 1)
            menu();
        else if (main_exit == 2)
            cclose();
        else
        {
            printf("\nInvalid!");
            goto transact_invalid;
        }
    }

    else
    {
        printf("\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d", &main_exit);
        system("cls");
        if (main_exit == 1)
            menu();
        else
            cclose();
    }
}