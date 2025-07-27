#include<stdio.h>
#include<iostream>


#include "AdminFunc.h"
using namespace std;

void MainMenu() {
    cout << "\n\t\tLogin as :\n";
    cout << "\n\t\t1. Admin\n";
    cout << "\n\t\t2. Student\n";
    cout << "\n\t\t3. Exit\n";
    cout << "\n\n\t\tEnter choice : ";

}

// void Admin_Function() {
//     //This function will have its own header file
//     cout << "\n\tAdmin Function\n";
// }


// void Student_Function() {
//     //This will use a function from Admin_Function()
//     cout << "\n\tStudent Function\n";
// }

int main() {
    // cout << "Hello World\n";

    bool BooleanFlag {false};
    int choice;
    


    do {
        MainMenu();
        cin >> choice;

        switch (choice) {
            case 1: Admin_Function();
            break;

            case 2: Student_Function();
            break; 

            case 3: BooleanFlag = true;
                cout << "\n\t\tExit program\n";
            break;

            default: cout << "\t\tInvalid option\n";
        }
    } while (!BooleanFlag);
    

    return 0;
}


