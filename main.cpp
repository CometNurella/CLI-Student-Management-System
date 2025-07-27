#include<stdio.h>
#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<deque>


using namespace std;

void MainMenu() {
    cout << "\n\t\tLogin as :\n";
    cout << "\n\t\t1. Admin\n";
    cout << "\n\t\t2. Student\n";
    cout << "\n\t\t3. Exit\n";
    cout << "\n\n\t\tEnter your choice : ";



    
}

void Admin_Function() {
    //This function will have its own header file
    cout << "\n\tAdmin Function\n";


}

void Student_Function() {
    //This will use a function from Admin_Function()
    cout << "\n\tStudent Function\n";


}

int main() {
    // cout << "Hello World\n";
    // MainMenu();

    bool BooleanFlag {false};
    int choice;
    // cin >> choice;


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

        default: cout << "Invalid option\n";
        }
    } while (!BooleanFlag);
    

    return 0;
}


