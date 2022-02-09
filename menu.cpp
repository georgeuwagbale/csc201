//
// Created by uwagbalegeorge on 07/02/2022.
//

#include <iostream>
#include <cstring>

using namespace std;

int menu(Staff user){
    char option;
    char student_matric_no[14];
    cout << "\t\tMAIN MENU" << endl;
    cout << "To SEARCH for a Student's Result --- Press F" << endl;
    cout << "To UPDATE a Student's Result --- Press U" << endl;
    cout << "To SAVE a Student's Result to File --- Press P" << endl;
    cout << "To VIEW ALL Results --- Press A" << endl;
    cout << "To EXIT the program --- Press E" << endl;
    cout << ">> "; cin >> option;

    tolower(option);
    switch (option) {
        case 'f':

            cout << "Enter student Matric_NO: "; cin >> student_matric_no;
            user.search_records(student_matric_no);
            break;
        case 'u':
            cout << "Enter student Matric_NO: "; cin >> student_matric_no;
            user.find_update(student_matric_no);
            break;
        case 'p':
            user.add_new_data();
            break;
        case 'a':
            user.view_all();
            break;
        case 'e':
            exit(0);
        default:
            break;
    }

}
