/*
    Project: Library Management System Milestone 2
    Author : O. Butuba DSE-01-0786/2021
    Date   : Nov 23, 2021
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
void execute_action(int action);
void close();
int main()
{

    int action;

    action = menu();          //function call

    execute_action(action);

    close();

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

void execute_action(int action)
{
    switch(action) {
    case 1:
        printf("List of users\n");
        break;
    case 2:
        printf("Add new User:\n");
        break;

    case 3:
        printf("Editing User:\n");
        break;

    case 4:
        printf("Deleting Users:\n");
        break;

    case 5:
        printf("Changing Password\n");
        break;

    case 6:
        printf("You have been Logged Out\n");
        break;

    case 7:
        close();
        break;

    default:
        printf("Invalid action!");

    }
}

void close() {
    printf("\nThanks for using the system\n");
    printf("Created by Butuba\n");
    printf("Bye\n");
    Sleep(2000);
    exit(0);

}
