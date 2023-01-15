#include "system.h"

void edit(void)
{
    opt_t upup;
    int choice, test = 0;
    FILE *old, *new;
    old = fopen("record.dat", "r");
    new = fopen("new.dat", "w");

    printf("\nEnter the account no. of the customer whose info you want to change:");
    scanf("%d", &upup.acc_no);
    while (fscanf(old, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n", &up.acc_no, up.name, &add.month, &add.day, &add.year, &up.age, up.address, up.citizenship, &up.phone, up.acc_type, &up.amt, &add_2.month, &add_2.day, &add_2.year) != EOF)
    {
        if (up.acc_no == upup.acc_no)
        {
            test = 1;
            printf("\nWhich information do you want to change?\n1.Address\n2.Phone\n\nEnter your choice(1 for address and 2 for phone):");
            scanf("%d", &choice);
        }
        if (choice == 1)
        {
            printf("Enter the new address:");
            scanf("%s", upup.address);
            fprintf(new, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n", up.acc_no, up.name, add.month, add.day, add.year, up.age, up.address, up.citizenship, up.phone, up.acc_type, up.amt, add_2.month, add_2.day, add_2.year);
            system("cls");
            printf("Changes saved!");
        }
        else if (choice == 2)
        {
            printf("Enter the new phone number:");
            scanf("%lf", &upup.phone);
            fprintf(new, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n", up.acc_no, up.name, add.month, add.day, add.year, up.age, up.address, up.citizenship, up.phone, up.acc_type, up.amt, add_2.month, add_2.day, add_2.year);
            system("cls");
            printf("Changes saved!");
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

    if (test != 1)
    {
        system("cls");
        printf("\nRecord not found!!\a\a\a");
    edit_invalid:
        printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
        scanf("%d", &main_exit);
        system("cls");
        if (main_exit == 1)

            menu();
        else if (main_exit == 2)
            cclose();
        else if (main_exit == 0)
            edit();
        else
        {
            printf("\nInvalid!\a");
            goto edit_invalid;
        }
    }
    else
    {
        printf("\n\n\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d", &main_exit);
        system("cls");
        if (main_exit == 1)
            menu();
        else
            cclose();
    }
}