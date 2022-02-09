// Created by uwagbalegeorge on 06/11/2021
// MIT Licensed

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
using namespace std;

int main(){
    string first_name, last_name, matric_no, CSC201, CSC205, MTH201, MTH203, GST201, GPA;
    ifstream file("C:\\Users\\uwagb\\CLionProjects\\csc201\\student_record");
    if(file.is_open()) {
        while (!file.eof()) {
                file>>first_name>>last_name>>matric_no>>CSC201>>CSC205>>MTH201>>MTH203>>GST201>>GPA;
                //cout<<first_name<<" "<<last_name<<"\t"<<matric_no<<"\t"<<CSC201<<"\t"<<CSC205<<"\t"<<MTH201<<"\t"<<MTH203
                //<<"\t"<<GST201<<"\t"<<GPA<< endl;
                cout << matric_no << endl;
            //if(!strcmp(auth_matric_no, matric_no)) break;
            //line_num++;
        }
    }
    return 0;
}


int rand_gen(){
	int random_number;
	random_number = rand() % 2;
	return random_number;
}

void rand_gen_seed(){
	srand( (unsigned) time(NULL));
}