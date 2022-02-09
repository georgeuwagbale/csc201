//
// Created by uwagbalegeorge on 05/02/2022.
//
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
int is_authorised(char *name, char *password){
    char auth_user_name[50];
    char auth_password[50];
    ifstream file("auth");
    if(file.is_open()){
        file>>auth_user_name>>auth_password;
        if(!(strcmp(auth_user_name, name)) && (!strcmp(auth_password, password))){
            cout << "Authorized!" << endl;
            return 1;
        } else return 0;
    }
    else {
        cout << "File failed to open" << endl;
        return 0;
    }

}
