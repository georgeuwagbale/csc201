//
// Created by uwagbalegeorge on 05/02/2022.
//

#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

class User{
private:
    char user_name[50];
    char password[50];

public:
    char *get_user_name(){
        return user_name;
    }
    void set_user_name(char *name){
        strcpy(user_name, name);
    }

    char first_name[15], last_name[15], matric_no[14];
    int CSC201, CSC205, MTH201, MTH203, GST201, GPA;
    int line_num = 0;

    int search_records(char *auth_matric_no){
        ifstream file("student_record");
        if(file.is_open()){
            while(!file.eof()){
                file>>first_name>>last_name>>matric_no>>CSC201>>CSC205>>MTH201>>MTH203>>GST201>>GPA;
                if(!strcmp(auth_matric_no, matric_no)) break;
            }
            if(strcmp(auth_matric_no, matric_no) != ) cout << "File not found" << endl;
            else{
                cout << "Student name: " << first_name << " " << last_name << endl;
                cout << "Matric No: " << matric_no <<"\n"<< "CSC201: "<<CSC201<<endl;
                cout << "CSC205: " << CSC205 << "\n" << "MTH201: " << MTH201 << endl;
                cout << "MTH203: " << MTH203 << "\n" << "GST201: " << GST201 << endl;
                cout << "GPA: " << GPA << endl;
            }
        }
        else cout << "Failed to open file" << endl;
        file.close();
        return 0;
    }

    void find_update(char *auth_matric_no){
        search_records(auth_matric_no);
        char option[5];
        cout << "Enter the field you want to edit: "; cin >> option;

        if(!(strcasecmp(option, "csc201"))){
            cout << "CSC201: " << CSC201 << endl;
            cout << "New value: "; cin >> CSC201;
        }
        else if(!(strcasecmp(option, "csc205"))){
            cout << "CSC205: " << CSC205 << endl;
            cout << "New value: "; cin >> CSC205;
        }
        else if(!(strcasecmp(option, "mth201"))){
            cout << "MTH201: " << MTH201 << endl;
            cout << "New value: "; cin >> MTH201;
        }
        else if(!(strcasecmp(option, "mth203"))){
            cout << "MTH205: " << MTH203 << endl;
            cout << "New value: "; cin >> MTH203;
        }
        else if(!(strcasecmp(option, "gst201"))){
            cout << "GST201: " << GST201 << endl;
            cout << "New vlaue: "; cin >> GST201;
        }
        else if(!(strcasecmp(option, "gpa"))){
            cout << "GPA: " << GPA << endl;
            cout << "New value: "; cin >> GPA;
        }

    }

    void update(){
        ifstream file("student_record");
        ofstream new_file("new_record", ios::app);
        char n;
        int line_no = 1;
        if(file.is_open() && new_file.is_open()){
            while(file.get(n)){
                if(n == '\n') line_no++;
                if (line_no != line_num) new_file << n;
            }
            new_file<<"\n"<<first_name<<" "<<last_name<<"\t\t"<<matric_no<<" "<<CSC201<<" "<<CSC205<<" "
                <<MTH201<<" "<<MTH203<<" "<<GST201<<" "<<GPA<<endl;
        }
        file.close();
        new_file.close();
        remove("student_record");
        rename("new_record", "student_record");
    }
};
