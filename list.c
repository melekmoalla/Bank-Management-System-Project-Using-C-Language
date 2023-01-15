#include "system.h"

void view_list(void)
{
    FILE *view;
    view = fopen("record.dat", "r");
    int test = 0;

    while (fscanf(view, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d", &up.acc_no, up.name, &add.month, &add.day, &add.year, &up.age, up.address, up.citizenship, &up.phone, up.acc_type, &up.amt, &add_2.month, &add_2.day, &add_2.year) != EOF)
    {
        if (test == 0)
            printf("\nACC. NO.\tNAME\t\t\tADDRESS\t\t\tPHONE\n");
        printf("\n%6d\t %10s\t\t\t%10s\t\t%.0lf", up.acc_no, up.name, up.address, up.phone);
        test++;
    }
    fclose(view);
    if (test == 0)
    {
        printf("\nNO RECORDS!!\n");
    }
view_list_invalid:
    printf("\n\nEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d", &main_exit);
    system("cls");
    if (main_exit == 1)
        menu();
    else if (main_exit == 0)
        cclose();
    else
    {
        printf("\nInvalid!\a");
        goto view_list_invalid;
    }
}