#include<stdio.h>
#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<deque>


using namespace std;

void Home_Display() {
    cout << "\t\tLogin as :\n";
    cout << "\n\t\t1. Admin\n";
    cout << "\n\t\t2. Student\n";
    cout << "\n\t\t3. Exit\n";
    cout << "\n\n\t\tEnter your choice : ";



    
}

int main() {
    // cout << "Hello World\n";
    // Home_Display();

    bool BooleanFlag {true};
    int option;


    do {
        switch (option) {
        case '1':
        break;

        case '2':
        break; 

        case '3': BooleanFlag = false;
        break;

        default: cout << "Invalid option\n";
        }
    } while (BooleanFlag);
    

    return 0;
}


