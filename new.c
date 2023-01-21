#include "system.h"

/***************************************chek of the alphabet if there are or not ******************/
int _islower(char *c)
{
    int a = 0;
    char m[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    for (int i = 0; i < strlen(c); i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if (c[i] == m[j])
            {
                a = 1;
            }
        }
        if (a != 1)
        {
            return (1);
        }
    }

    return (0);
}

/*********************check of the number of there are or not ***************** */
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

/**************************check of the year birth *******************************/
int _check1(char *s)
{
    if (s[0] == '0')
        return (0);
    if (s[0] == '1')
        return (0);
    if (s[0] == '2')
        return (0);
    if (s[0] == '3' && ((s[1] == '0') || (s[1] == '1')))
        return (0);
    else
    {
        return (1);
    }
}

/************************* check of the  month *******************************/
int _check(char *s)
{
    if (s[0] == '0')
        return (0);
    if ((s[0] == '1') && ((s[1] == '0') || (s[1] == '1') || (s[1] == '2')))
        return (0);
    else
    {
        return (1);
    }
}

/*************************check of the year **************************************/
int _check2(char *s)
{
    if (s[3] == '\0')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

/****************************** function creat new account *********************************************/

void new_acc(void)
{
    FILE *ptr;

    ptr = fopen("record.dat", "a+");
account_no:
    printf("\n\t\t################\n");
    printf("\t\t## ADD RECORD ##");
    printf("\n\t\t################");
    printf("\n\n !!!!!! please write the date like this example -> (01/01/2023) !!!!");
    printf("\n\n\nEnter today's month (mm : ");
    //*******************condition for the month ***********************//
    scanf("%s", &(add.month));
    while (1)
    {
        if (_check(&add.month) != 0 || _islower(&add.month) != 0 || strlen(&add.month) != 2)
        {
            printf("\nwrite carefull\n");
            printf("please write the date like this example -> (01/01/2023)");
            printf("\n\n\nEnter today's month (mm : ");
        }
        else
            break;
        scanf("%s", &add.month);
    }
    char s2[20000];
    strcpy(s2, &add.month);
    /**************condityhon for the day*****************************/
    printf("\n\n\nEnter today's day(%s/ dd :", s2);
    scanf("%s", &add.day);
    while (1)
    {
        if (_check1(&add.day) != 0 || _islower(&add.day) != 0 || strlen(&add.day) != 2)
        {
            printf("\nwrite carefull\n");
            printf("please write the date like this example -> (01/01/2023");
            printf("\n\n\nEnter today's day(%s/ dd :", s2);
        }
        else
            break;
        scanf("%s", &add.day);
    }
    /**************condityhon for the year*****************************/

    printf("\ncreated date successfully!");
    char s3[2000];
    strcpy(s3, &add.day);
    printf("\n     -> %s/%s/2023", s2, s3);
    char s1[] = "2023";
    strcpy(&add.year, s1);

    /*******************condition for the account number***************/
    printf("\nEnter the account number: ");
    scanf("%s", &up.acc_no);
    while (1)
    {
        if (_islower(&up.acc_no) != 0)
        {
            printf("\nwrite carefull\n");
            printf("\nEnter the account number:");
        }
        else
            break;
        scanf("%s", &up.acc_no);
    }
    printf("\n%s", &up.acc_no);
    /*******************condition for the account number********************************************
    printf("\nEnter the name:");
    scanf("%s", up.name);
    while (has_number(up.name) == 1)
    {
        printf("write curful !!!!\n");
        printf("\nEnter the name:");
        scanf("%s", up.name);
    }
    /**********************condition  for the date of birth*************/
    printf("\nEnter the date of birth(mm/dd/yyyy):");

    printf("\nEnter the age:");
    scanf("%hhd", &up.age);
    while (_islower(&up.age) == 1)
    {
        printf("write curful !!!!\n");
        printf("\nEnter the account number:");
        scanf("%s", &up.age);
    }
    /***************************condition for the address**************/
    printf("\nEnter the address:");
    scanf("%s", up.address);
    while (has_number(up.address) == 1)
    {
        printf("write curful !!!!\n");
        printf("\nEnter the address:");
        scanf("%s", up.address);
    }
    /*******************condition for the number city ****************/
    printf("\nEnter the citizenship number:");
    scanf("%s", up.citizenship);
    while (_islower(up.citizenship) == 1)
    {
        printf("write curful !!!!\n");
        printf("\nEnter the citizenship number:");
        scanf("%s", up.citizenship);
    }
    /**************** condition for the phone number ******************/
    printf("\nEnter the phone number: ");
    scanf("%hhd", &up.phone);
    while (_islower(&up.phone) == 1)
    {
        printf("write curful !!!!\n");
        printf("\nEnter the phone number: ");
        scanf("%hhd", &up.phone);
    }
    /****************condition for amount **************************/
    printf("\nEnter the amount to deposit:$");
    scanf("%hhd", &up.amt);
    while (_islower(&up.amt) == 1)
    {
        printf("write curful !!!!\n");
        printf("\nEnter the amount to deposit:$");
        scanf("%s", &up.amt);
    }
    /***************conditio for the chose ******************/
    printf("\nType of account:\n\t#Saving\n\t#Current\n\t#Fixed1(for 1 year)\n\t#Fixed2(for 2 years)\n\t#Fixed3(for 3 years)\n\n\tEnter your choice:");
    scanf("%s", up.acc_type);
    /****************** sign in in the ffile ***************************************************************/
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
