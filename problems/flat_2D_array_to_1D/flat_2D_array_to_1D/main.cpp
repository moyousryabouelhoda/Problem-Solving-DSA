//
//  main.cpp
//  flat_2D_array_to_1D
//
//  Created by Muhammad Yusry on 14/03/2023.
//

#include <iostream>
#define endl "\n"<<endl

using namespace std;

const int rows = 4, cols = 4;
const int flatSize = rows*cols;

void flat_2D(int arr[rows][cols], int flatArr[]) {
    for (int r=0; r<rows; ++r) {
        for (int c=0; c<cols; ++c) {
            int indx = (r*cols)+c;
            flatArr[indx] = arr[r][c];
        }
    }
    for (int i=0; i<flatSize; ++i) {
        cout<<flatArr[i]<<" ";
    }
    cout<<endl;
}

void flatArr_to_2D(int flatArr[], int arr[rows][cols]) {
    for (int i=0; i<flatSize; ++i) {
        int r = i/cols, c = i%cols;
        arr[r][c] = flatArr[i];
    }
    for (int r=0; r<rows; ++r) {
        for (int c=0; c<cols; ++c)
            cout<<arr[r][c]<<" ";
        cout<<endl;
    }
}

int main() {
    int flatArr[flatSize], arr[rows][cols] = {
        {1,2,3,5},
        {4,5,6,5},
        {7,8,9,5},
        {0,1,2,4}
    };
    
    flat_2D(arr, flatArr);
    flatArr_to_2D(flatArr, arr);

    return 0;
}
