#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
// #include<iomanip>
#include<algorithm>
#include<set>
#include"Student.h"
using namespace std;

template<typename T>
void display (const set<T> &s) {
    for_each(s.begin(), s.end(),    
        [](T x) {cout << x << "\n";});
}
static set<Student> settest;


// void UpdateData();
// void AddStudentDetails();
// void DeleteStudent();
void ViewTable();
// void ReturnToMainMenu();
// void Exit();




void AdminMenu() {
    cout << "\n\t\t|  Logged in as admin  |\n\n";
    cout << "\n\t\t1. Add student details\n";
    cout << "\n\t\t2. Delete student\n";
    cout << "\n\t\t3. View table\n";
    cout << "\n\t\t4. Return to main menu\n";
    cout << "\n\t\t5. Exit\n";
    cout << "\n\t\tEnter choice : ";
}


void Admin_Function() {
    bool BooleanFlag {false};
    int choice;
    
    // cout << "\n\tAdmin Function\n";

    do {
        AdminMenu();
        cin >> choice;

        switch (choice) {
            // case 1: AddStudentDetails();
            // break;

            // case 2: DeleteStudent();
            // break;

            case 3: ViewTable();
            break;

            // case 4: ReturnToMainMenu();
            // break;

            case 5: BooleanFlag = true;
                cout << "\n\t\tExit Admin Menu\n";   
            break;

            default: cout << "\t\tInvalid option\n";

        }
    } while (!BooleanFlag);
}

//Functions for Admin_Function below

// void ReadFile() {
//     ifstream in_file {"data.csv"};
//     if (!in_file.is_open()) {
//         cerr << "\tFAILED TO OPEN CSV FILE\n" << endl;
//         return;
//     } else {
//         std::string dNAME, dCOLLEGE, dSUBJECT, dATTENDANCE, dPHYSICS, dCHEMISTRY, dMATHS;
//         cout << "\tCSV FILE OPENED SUCCESSFULLY\n" << endl;
//         while (!in_file.eof()) {
//             getline(in_file, dNAME, ',');
//             getline(in_file, dCOLLEGE, ',');
//             getline(in_file, dSUBJECT, ',');
//             getline(in_file, dATTENDANCE, ',');
//             getline(in_file, dPHYSICS, ',');
//             getline(in_file, dCHEMISTRY, ',');
//             getline(in_file, dMATHS, ',');
//             // getline(in_file, dNAME, ','); 
//             settest.emplace(dNAME, dCOLLEGE, dSUBJECT, dATTENDANCE, dPHYSICS, dCHEMISTRY, dMATHS);
//             display(settest);
//         }
//     }
// }




void ViewTable() {
    auto TableHeader = [] () {cout << "\n\t\t\t\t\t\t\t\t|Student Record|\n\n" << "\n--------------------------------------------------------------------------------------------------------------\n\n\n"
                                   << "ID" << "\t" << "Name" << "\t\t\t" << "College" << "\t\t" << "Subject" << "\t\t"  
                                   << "Attendance" << "\t\t" << "Physics" << "\t\t" << "Chemistry" << "\t\t" << "Maths" << "\n";};

    auto TableFooter = [] () {cout << "\n\n\n--------------------------------------------------------------------------------------------------------------\n";};

    TableHeader();

    ifstream in_file {"data.csv"};
    if (!in_file.is_open()) {
        cerr << "\tFAILED TO OPEN CSV FILE\n" << endl;
        return;
    } else {
        std::string dNAME, dCOLLEGE, dSUBJECT, dATTENDANCE, dPHYSICS, dCHEMISTRY, dMATHS;
        cout << "\tCSV FILE OPENED SUCCESSFULLY\n" << endl;
        while (!in_file.eof()) {
            getline(in_file, dNAME, ',');
            getline(in_file, dCOLLEGE, ',');
            getline(in_file, dSUBJECT, ',');
            getline(in_file, dATTENDANCE, ',');
            getline(in_file, dPHYSICS, ',');
            getline(in_file, dCHEMISTRY, ',');
            getline(in_file, dMATHS, '\n');
            // getline(in_file, dNAME, ','); 
            settest.emplace(dNAME, dCOLLEGE, dSUBJECT, dATTENDANCE, dPHYSICS, dCHEMISTRY, dMATHS);
            display(settest);


        }
    }



    TableFooter();

    



}

void Student_Function() {
    //This will use a function from Admin_Function()
    cout << "\n\tStudent Function\n";
}