/*
    Project: Library Management System Milestone 2
    Author : O. Butuba DSE-01-0786/2021
    Date   : Nov 16, 2021
    Compiler: GCC
    Language: C99
    License : MIT

*/

/*

Users - view users add, edit, delete, login, change password

Catalogue
Issuance
Serial
Acquisition

Navigation

*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//function prototype
int menu();
int execute_action();
int main()
{

    int action;
    action = menu();//function call

    printf("\n");

    execute_action();//execute action

    return 0;
}//end main

//function definition

int menu()//header
{
    int action;
    do {
        printf("Welcome to County Online Library!\n ");
        printf("What would you like to do?\n");

        printf("1. view users. \n");
        printf("2. Add new User. \n");
        printf("3. Edit User. \n");
        printf("4. Delete User. \n");
        printf("5. Change Password");
        printf("6. Logout. \n");
        printf("7. Exit \n");

        printf("Selected action(1-7): ");
        scanf("%d", &action);
        if(action < 1 || action > 7) {
            system("cls");// clears space
            printf("\n Invalid Action. Try again \n");
    }//end if

    }while (action < 1 || action > 7);

    return action;
}//end menu()

int execute_action()
{
    int action;
   switch(action)
    {
        case 1:
        printf("Here is the list of all Users:\n");
        puts("User 1");
        puts("User 2");
        puts("User 3");
        puts("User 4");
        puts("User 5");
        puts("User 6");
        puts("User 7");
        puts("User 8");
        puts("User 9");
        puts("User 10");
        break;

        case 2:
        printf("Add new Users:");
        break;

        case 3:
        printf("Edit Users:");
        break;

        case 4:
        printf("Delete Users:");
        break;

        case 5:
        printf("Change Password:");
        break;

        case 6:
        printf("Log Out:");
        break;

        case 7:
        printf("Exit System");
        break;

    }//end switch

}//end execute_action
