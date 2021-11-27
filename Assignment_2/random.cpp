// Created by uwagbalegeorge on 06/11/2021
// MIT Licensed

#include <iostream>
#include <stdlib.h>
#include <time.h>


int rand_gen(){
	int random_number;
	random_number = rand() % 2;
	return random_number;
}

void rand_gen_seed(){
	srand( (unsigned) time(NULL));
}