//
// Created by uwagbalegeorge on 05/02/2022.
//
#include <iostream>
#include <fstream>
using namespace std;
char *is_authorised(char *name, char password){
    int line_num = 0;
    char auth_user_name[50];
    char auth_password[50];
    ifstream file("user_file");
    if(file.is_open()){

        file>>auth_user_name>>auth_password;
    }

    return 0;
}
