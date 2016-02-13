//
//  main.cpp
//  selectionSort
//
//  Created by Kevin Zhang on 2016-02-09.
//  Copyright © 2016 Kevin Zhang. All rights reserved.
//

#include <iostream>
using namespace std;

void selectionSort(int arr[], int arr_size);
void printArray(int arr[], int arr_size);

int main(int argc, const char * argv[]) {
    // insert code here...
    int arr_size= 5;
    int arr[5] = {3,1,2,5,4};
    
    selectionSort(arr, arr_size);
    printArray(arr, arr_size);
    return 0;
}

void selectionSort(int arr[], int arr_size){
    for (int i=0; i< arr_size; ++i) {
        for (int j =i+1; j< arr_size; ++j) {
            if (arr[i]>arr[j]) {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void printArray(int arr[], int arr_size){
    //read every element of the array
    for (int i = 0; i<arr_size; ++i) {
        cout<< " " <<arr[i];
    }
    //print out that element
}