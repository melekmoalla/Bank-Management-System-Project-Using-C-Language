#include "system.h"

int main(void)
{
    char pass[10], password[5] = "code";
    int i = 0;

    printf("\n\n\tEnter the password to login:");
    printf("\ncheck robot !!!!!\n");
    printf("Pease write the world in this framework\n");
    printf("\t\t############################\n");
    printf("\t\t##### c\xB2\xB2 o\xB2 d\xB2\xB2\xB2 e\xB2\xB2 ######\n");
    printf("\t\t############################\n");
    printf("\n\n\tEnter the password to login: ");
    scanf("%s", pass);
    if (strcmp(pass, password) == 0)
    {
        printf("\n\nPassword Match!\n LOADING");
        for (i = 0; i <= 6; i++)
        {
            fordelay(100000000);
            printf(".");
        }
        menu();
        printf("\n");
    }
    else
    {
        printf("\n\nWrong password!!\a\a\a");
    login_try:
        printf("\nEnter |1| to try again or |2| to exit:");
        scanf("%d", &main_exit);
        if (main_exit == 1)
        {
            main();
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
            goto login_try;
        }
        else
        {
            printf("write curful\n");
            return (main());
        }
    }
    return (0);
}