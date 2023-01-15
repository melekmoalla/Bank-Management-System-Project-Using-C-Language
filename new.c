#include "system.h"

void new_acc(void)
{
    FILE *ptr;


    ptr = fopen("record.dat", "a+");
account_no:
    printf("\n\t\t################\n");
    printf("\t\t## ADD RECORD ##");
    printf("\n\t\t################");
    printf("\n\n\nEnter today's date(mm/dd/yyyy):");
    scanf("%d/%d/%d", &add.month, &add.day, &add.year);
    printf("\nEnter the account number:");
    scanf("%d", &up.acc_no);
    printf("\nEnter the name:");
    scanf("%s", up.name);
    printf("\nEnter the date of birth(mm/dd/yyyy):");
    scanf("%d/%d/%d", &add_2.month, &add_2.day, &add_2.year);
    printf("\nEnter the age:");
    scanf("%d", &up.age);
    printf("\nEnter the address:");
    scanf("%s", up.address);
    printf("\nEnter the citizenship number:");
    scanf("%s", up.citizenship);
    printf("\nEnter the phone number: ");
    scanf("%lf", &up.phone);
    printf("\nEnter the amount to deposit:$");
    scanf("%f", &up.amt);
    printf("\nType of account:\n\t#Saving\n\t#Current\n\t#Fixed1(for 1 year)\n\t#Fixed2(for 2 years)\n\t#Fixed3(for 3 years)\n\n\tEnter your choice:");
    scanf("%s", up.acc_type);

    fprintf(ptr, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n", up.acc_no, up.name, add.month, add.day, add.year, up.age, up.address, up.citizenship, up.phone, up.acc_type, up.amt, add_2.month, add_2.day, add_2.year);

    fclose(ptr);
    printf("\nAccount created successfully!");
add_invalid:
    printf("\n\n\n\t\tEnter |1| to try again or |2| to exit:");
    scanf("%d", &main_exit);
    system("cls");
    if (main_exit == 1)
    {
        menu();
    }
    else if (main_exit == 2)
    {
        system("clear");
        cclose();
    }
    else if (main_exit > 0 && main_exit <= 5000000000000000000)
    {
        printf("\nInvalid");
        fordelay(1000000000);
        goto add_invalid;
    }
    else
    {
        system("clear");
        printf("please, write curful\n");
        printf("please, write curful\n");
        printf("please, write curful\n");
        printf("please, write curful\n");
        printf("!!!!!!!!!!!!!!!!!!!\n");
        system("sls");
        return (menu());
    }
}