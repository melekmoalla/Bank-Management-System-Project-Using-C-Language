#include "system.h"

void erase(void)
{
    opt_t rem;
    FILE *old, *new;
    int test = 0;
    old = fopen("record.dat", "r");
    new = fopen("new.dat", "w");
    printf("Enter the account no. of the customer you want to delete:");
    scanf("%d", &rem.acc_no);
    while (fscanf(old, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n", &up.acc_no, up.name, &add.month, &add.day, &add.year, &up.age, up.address, up.citizenship, &up.phone, up.acc_type, &up.amt, &add_2.month, &add_2.day, &add_2.year) != EOF)
    {
        if (up.acc_no != rem.acc_no)
            fprintf(new, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n", up.acc_no, up.name, add.month, add.day, add.year, up.age, up.address, up.citizenship, up.phone, up.acc_type, up.amt, add_2.month, add_2.day, add_2.year);
        else
        {
            test++;
            printf("\nRecord deleted successfully!\n");
        }
    }
    fclose(old);
    fclose(new);
    remove("record.dat");
    rename("new.dat", "record.dat");
    if (test == 0)
    {
        printf("\nRecord not found!!\a\a\a");
    erase_invalid:
        printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
        scanf("%d", &main_exit);

        if (main_exit == 1)
            menu();
        else if (main_exit == 2)
            cclose();
        else if (main_exit == 0)
            erase();
        else
        {
            printf("\nInvalid!\a");
            goto erase_invalid;
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