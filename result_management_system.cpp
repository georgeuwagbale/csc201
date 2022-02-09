//
// Created by uwagbalegeorge on 05/02/2022.
//

#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

class Staff{
private:
    char user_name[50]{};
    char user_password[50]{};

public:
    char *get_user_name(){
        return user_name;
    }
    void set_user_name(char *name){
        strcpy(user_name, name);
    }
    void set_password(char *password){
        strcpy(user_password, password);
    }

    string first_name, last_name, matric_no, CSC201, CSC205, MTH201, MTH203, GST201, GPA;
    int line_num = 0;

    int search_records(char *auth_matric_no){
        line_num = 0;
        ifstream file("student_record");
        if(file.is_open()){
            while(!file.eof()){
                file>>first_name>>last_name>>matric_no>>CSC201>>CSC205>>MTH201>>MTH203>>GST201>>GPA;
                //cout << matric_no << endl;
                line_num++;
                if (auth_matric_no == matric_no) break;

            }
            if(auth_matric_no != matric_no ) cout << "File not found" << endl;
            else{
                cout << "Student name: " << first_name << " " << last_name << endl;
                cout << "Matric No: " << matric_no <<"\n"<< "CSC201: "<<CSC201<<endl;
                cout << "CSC205: " << CSC205 << "\n" << "MTH201: " << MTH201 << endl;
                cout << "MTH203: " << MTH203 << "\n" << "GST201: " << GST201 << endl;
                cout << "GPA: " << GPA << endl;
                return 1;
            }
        }
        else cout << "Failed to open file" << endl; file.close();
            return 0;
    }

    int find_update(char *auth_matric_no){
        if (search_records(auth_matric_no)) {
            char option[5];
            cout << "Enter the field you want to edit: ";
            cin >> option;

            if (!(strcasecmp(option, "csc201"))) {
                cout << "CSC201: " << CSC201 << endl;
                cout << "New value: ";
                cin >> CSC201;
            } else if (!(strcasecmp(option, "csc205"))) {
                cout << "CSC205: " << CSC205 << endl;
                cout << "New value: ";
                cin >> CSC205;
            } else if (!(strcasecmp(option, "mth201"))) {
                cout << "MTH201: " << MTH201 << endl;
                cout << "New value: ";
                cin >> MTH201;
            } else if (!(strcasecmp(option, "mth203"))) {
                cout << "MTH205: " << MTH203 << endl;
                cout << "New value: ";
                cin >> MTH203;
            } else if (!(strcasecmp(option, "gst201"))) {
                cout << "GST201: " << GST201 << endl;
                cout << "New vlaue: ";
                cin >> GST201;
            } else if (!(strcasecmp(option, "gpa"))) {
                cout << "GPA: " << GPA << endl;
                cout << "New value: ";
                cin >> GPA;
            }
            update();
            return 0;
        }
        else return 1;
    }

    void update() const {
        ifstream file("student_record");
        ofstream new_file("new_record", ios::app);
        char n;
        int line_no = 1;
        if(file.is_open() && new_file.is_open()){
            while(file.get(n)){
                if(n == '\n') line_no++;
                if (line_no != line_num) new_file << n;
            }
            new_file<<first_name<<" "<<last_name<<"\t\t"<<matric_no<<"\t"<<CSC201<<"\t"<<CSC205<<"\t"
                <<MTH201<<"\t"<<MTH203<<"\t"<<GST201<<"\t"<<GPA<<endl;
        }
        file.close();
        new_file.close();
        remove("student_record");
        rename("new_record", "student_record");
        cout << "Update Successful" << endl;
    }

    void add_new_data(){
        cout << "First name: "; cin >> first_name;
        cout << "Last name: "; cin >> last_name;
        cout << "Matric No.: "; cin >> matric_no;
        cout << "CSC201: "; cin >> CSC201;
        cout << "CSC205: "; cin >> CSC205;
        cout << "MTH201: "; cin >> MTH201;
        cout << "MTH203: "; cin >> MTH203;
        cout << "GST201: "; cin >> GST201;
        cout << "GPA: "; cin >> GPA;
        update();
    }

    void view_all(){
        char text[220];
        ifstream file("student_record");
        if(file.is_open()){
            while(!file.eof()){
                file.getline(text, 220);
                cout << text << endl;
            }
        }
    }
};