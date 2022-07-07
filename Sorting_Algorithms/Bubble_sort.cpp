//
// Created by uwagbalegeorge on 25/05/2022.
//

#include <iostream>
using namespace std;

int *bubble_sort(int  *array, int array_lenght, int count = 0){

    if (array[count] > array[count+1]){
        int a = array[count];
        int b = array[count +1];
        array[count] = b;
        array[count + 1] = a;
        count++;
    }else{
        count++;
    }

    if (count < array_lenght){
        bubble_sort(array,array_lenght,count);
    } else{
        for (int i=0; i<array_lenght; i++){
            if (array[i] > array[i+1]) bubble_sort(array, array_lenght, 0);
        }
    }

    return array;
}

int main(){
    int numbers[] = {3,2,8,9,5,4,10};

    int array_length = sizeof(numbers) / sizeof(int);
    int *result = bubble_sort(numbers, array_length);

    for (int i=0; i < array_length; i++){
        cout << result[i] << " ";
    }
    return 0;
}
