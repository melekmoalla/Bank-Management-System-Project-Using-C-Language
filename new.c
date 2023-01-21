#include "system.h"

int _islower(char *c)
{
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] >= 'A' && c[i] <= 'z')
            return (1);
    }

    return (0);
}

bool has_number(const char *string)
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (isdigit(string[i]))
        {
            return true;
        }
    }
    return false;
}
int _check(char *s)
{
    printf("%c", s[0]);
    printf("%c", s[1]);
    if (s[0] == '0')
        return (0);
    if ((s[0] == '1') && ((s[1] == '0') || (s[1] == '1') || (s[1] == '2')))
        return (0);
    else
    {
        return (1);
    }
}

int _strlen(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; ++i)
        ;
    return (i);
}

void new_acc(void)
{
    FILE *ptr;

    ptr = fopen("record.dat", "a+");
account_no:
    printf("\n\t\t################\n");
    printf("\t\t## ADD RECORD ##");
    printf("\n\t\t################");
    printf("\n\n !!!!!!!!!please write the date like this example -> (01/01/2000) !!!!");
    printf("\n\n\nEnter today's month(mm/dd/yyyy): (");
    //**********************************//
    scanf("%s", &add.month);
    while (1)
    {

        if (_check(&add.month) != 0)
        {
            printf("\nwrite curful\n");
            printf("please write the date like this example -> (01/01/2000");
            printf("\n\n\nEnter today's month (mm/dd/yyyy): ( : ");
        }
        else
        {
            break;
        }
        scanf("%s", &add.month);
    }
}
/**
printf("\n\n\nEnter today's day(mm/dd/yyyy): (mm / :");
scanf("%s", &add.day);
while (_islower(&add.day) == false || _strlen(&add.day) != 2)
{
    printf("write curful\n");
    printf("\n\n\nEnter today's day(mm/dd/yyyy): (mm /  :");
    scanf("/%s", &add.day);
}
    printf("\n\n\nEnter today's day(mm/dd/yyyy): (mm / dd / :");
scanf("%s", &add.year);
while (_islower(&add.year) == 1 || _strlen(&add.year) != 4)
{
    printf("write curful\n");
    printf("\n\n\nEnter today's day(mm/dd/yyyy): (mm / dd / :");
    scanf("/%s", &add.year);
}

printf("\nEnter the account number:");
scanf("%s", &up.acc_no);
while (_islower(&up.acc_no) == 1)
{
    printf("write curful !!!!\n");
    printf("\nEnter the account number:");
    scanf("%s", &up.acc_no);
}
printf("\nEnter the name:");
scanf("%s", up.name);
while (has_number(up.name) == 1)
{
    printf("write curful !!!!\n");
    printf("\nEnter the name:");
    scanf("%s", up.name);
}
printf("\nEnter the date of birth(mm/dd/yyyy):");

printf("\nEnter the age:");
scanf("%hhd", &up.age);
while (_islower(&up.age) == 1)
{
    printf("write curful !!!!\n");
    printf("\nEnter the account number:");
    scanf("%s", &up.age);
}
printf("\nEnter the address:");
scanf("%s", up.address);
while (has_number(up.address) == 1)
{
    printf("write curful !!!!\n");
    printf("\nEnter the address:");
    scanf("%s", up.address);
}
printf("\nEnter the citizenship number:");
scanf("%s", up.citizenship);
while (_islower(up.citizenship) == 1)
{
    printf("write curful !!!!\n");
    printf("\nEnter the citizenship number:");
    scanf("%s", up.citizenship);
}
printf("\nEnter the phone number: ");
scanf("%hhd", &up.phone);
while (_islower(&up.phone) == 1)
{
    printf("write curful !!!!\n");
    printf("\nEnter the phone number: ");
    scanf("%hhd", &up.phone);
}
printf("\nEnter the amount to deposit:$");
scanf("%hhd", &up.amt);
while (_islower(&up.amt) == 1)
{
    printf("write curful !!!!\n");
    printf("\nEnter the amount to deposit:$");
    scanf("%s", &up.amt);
}
printf("\nType of account:\n\t#Saving\n\t#Current\n\t#Fixed1(for 1 year)\n\t#Fixed2(for 2 years)\n\t#Fixed3(for 3 years)\n\n\tEnter your choice:");
scanf("%s", up.acc_type);

fprintf(ptr, "%d %s %d/%d/%d %d %s %s %d %s %d %d/%d/%d\n", up.acc_no, up.name, add.month, add.day, add.year, up.age, up.address, up.citizenship, up.phone, up.acc_type, up.amt, add_2.month, add_2.day, add_2.year);

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
**/