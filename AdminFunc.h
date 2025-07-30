#ifndef ADMIN_FUNC_H
#define ADMIN_FUNC_H
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<limits>
#include<algorithm>
#include<list>
#include<memory>
using namespace std;

// void UpdateData();
void AddStudentDetails();
// void DeleteStudent();
void ViewTable();
bool ReturnToMainMenu(bool &flag);
bool Exit(bool &flag);


void AdminMenu() {
    cout << "\n\n\t\t|  Logged in as admin  |\n\n";
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
        cin.ignore(numeric_limits<streamsize>::max(),'\n');

        switch (choice) {
            case 1: AddStudentDetails();
            break;

            // case 2: DeleteStudent();
            // break;

            case 3: ViewTable();
            break;

            case 4: ReturnToMainMenu(BooleanFlag);
            break;

            case 5: Exit(BooleanFlag);
            break;

            default: cout << "\t\tInvalid option\n";

        }
    } while (!BooleanFlag);
}

//Functions for Admin_Function below

void AddStudentDetails() {
    ofstream out_file {"data.csv", ios::app};

    if (!out_file.is_open()) {
        cerr << "\tFAILED TO OPEN CSV file\n" << endl;
        return;
    } else {
        cout << "\n\t\t|Enter data|\n";
        string name, college, subject, attendance, physics, chemistry, maths;

        cout << "\nEnter Name : ";
        getline(cin, name);
        cout << "\nEnter College : ";
        getline(cin, college);
        cout << "\nEnter Subject : ";
        getline(cin, subject);
        cout << "\nEnter Attendance : ";
        getline(cin, attendance);
        cout << "\nEnter Marks for Physics : ";
        getline(cin, physics);
        cout << "\nEnter Marks for Chemistry : ";
        getline(cin, chemistry);
        cout << "\nEnter Marks for Maths : ";
        getline(cin, maths);

        stringstream ss;
        ss << "\n" << name << "," << college << "," << subject << "," << attendance << ","
           << physics << "," << chemistry << "," << maths;
        out_file << ss.str();

        out_file.close();
    }
}


void ViewTable() {
    auto TableHeader = [] () {cout << "\n\t\t\t\t\t\t|Student Record|\n\n" << "\n----------------------------------------------------------------------------------------------------------------------\n\n\n"
                                   << "ID" << "\t" << "Name" << "\t\t\t" << "College" << "\t\t" << "Subject" << "\t\t"  
                                   << "Attendance" << "\t" << "Physics" << "\t\t" << "Chemistry" << "\t" << "Maths" << "\n";};

    auto TableFooter = [] () {cout << "\n\n\n----------------------------------------------------------------------------------------------------------------------\n";};

    TableHeader();
    ifstream in_file {"data.csv"};
    if (!in_file.is_open()) {
        cerr << "\tFAILED TO OPEN CSV file\n" << endl;
        return;
    } else {
        int countline{0};
        std::string dNAME, dCOLLEGE, dSUBJECT, dATTENDANCE, dPHYSICS, dCHEMISTRY, dMATHS;
        // cout << "\tCSV out_file OPENED SUCCESSFULLY\n" << endl;
        while (getline(in_file, dNAME, ',')) {
            getline(in_file, dCOLLEGE, ',');
            getline(in_file, dSUBJECT, ',');
            getline(in_file, dATTENDANCE, ',');
            getline(in_file, dPHYSICS, ',');
            getline(in_file, dCHEMISTRY, ',');
            getline(in_file, dMATHS, '\n');
            countline++;
            // static int id {1};
            cout << countline << "\t"
                << dNAME << "\t\t\t"
                << dCOLLEGE << "\t\t"
                << dSUBJECT << "\t\t"
                << dATTENDANCE << "%\t\t"
                << dPHYSICS << "\t\t"
                << dCHEMISTRY << "\t\t"
                << dMATHS << "\n";
        }
        in_file.close();
    }
    TableFooter();
}

bool ReturnToMainMenu(bool &flag) {
    flag = true;
    cout << "\n\tReturn to main menu\n";
    return flag;
}

// NOTE to self: The function below will terminate the program improperly.
// I have no idea why Code-Recursion wrote something similar to this
// because it just looks stupid. I'd rather return to the main menu then exit.
bool Exit(bool &flag) {
    flag = true;
    cout << "\n\tExit\n";
    exit(0);
}





void Student_Function() {

}

#endif