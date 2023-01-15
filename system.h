#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>

// global variable//

int main_exit;

typedef struct date
{
    int month, day, year;
} date_t;

typedef struct opt
{

    char name[60];
    int acc_no;
    int age;
    char address[60];
    char citizenship[15];
    double phone;
    char acc_type[10];
    float amt;

} opt_t;

typedef struct option
{
    int num;
    void (*f)(void);
} option_t;

date_t add;
date_t add_2;
opt_t up;


void fordelay(int j);
void cclose(void);
void menu(void);
void new_acc(void);
void edit(void);
void view_list(void);
void erase(void);
