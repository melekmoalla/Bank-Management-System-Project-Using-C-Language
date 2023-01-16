#include "system.h"

void menu(void)
{
    int choice, i = 0;

    option_t op[] = {{1, new_acc},
                     {2, edit},
                     {3, transact},
                     {4, see},
                     {5, erase},
                     {6, view_list},
                     {7, cclose},
                     {0, NULL}};

    printf("\n\n\t\t\tCUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM\n");
    printf("\n\t\t\t##########################################");
    printf("\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t##########################################");
    printf("\n\n\t\t1.Create new account\n");
    printf("\t\t2.Update information of existing account\n");
    printf("\t\t3.For transactions\n");
    printf("\t\t4.Check the details of existing account\n");
    printf("\t\t5.Removing existing account\n");
    printf("\t\t6.View customer's list\n");
    printf("\t\t7.Exit\n");
    printf("\n\n\n\t\t Enter your choice:");
    scanf("%d", &choice);

    while (op[i].num && choice)
    {

        if (choice == op[i].num)
        {
            op[i].f();
            break;
        }
        i++;
    }
}
