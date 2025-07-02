//
//  main.cpp
//  find_2nd_max_in_2d_array
//
//  Created by Muhammad Yusry on 17/03/2023.
//

#include <iostream>
#define endl "\n"<<flush

using namespace std;

const int rows = 4, columns = 4;

void flat_2d_array(int arr2D[rows][columns], int arr[]) {
    for (int r=0; r<rows; ++r)
        for (int c=0; c<columns; ++c)
            arr[((r*columns)+c)] = arr2D[r][c];
}

void insertion_sort(int arr[], int size) {
    for (int i=0; i<size; ++i) {
        int cpy = arr[i];
        int j = i-1;
        while (j>=0 && (arr[j] > cpy)) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = cpy;
    }
}

void find_2nd_max(int arr2D[rows][columns]) {
    const int arrSize = rows*columns;
    int result[arrSize];
    flat_2d_array(arr2D, result);
    insertion_sort(result, arrSize);
    cout<<result[arrSize-2]<<endl;
}

int main() {
    int arr[rows][columns] = {
        {1,2,23,4},
        {132,322,13,40},
        {121,23,32,43},
        {11,2,322,433}
    };
    find_2nd_max(arr);
    return 0;
}
