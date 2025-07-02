//
//  main.cpp
//  flat_multidimensionl_array
//
//  Created by Muhammad Yusry on 17/03/2023.
//

#include <iostream>
#define endl "\n"<<flush

using namespace std;

const int _3d_size = 2, _3d_rows = 2, _3d_columns = 2, flatSize = _3d_size*_3d_rows*_3d_columns;

void flat_3d_array(int arr[_3d_size][_3d_rows][_3d_columns], int flat[]) {
    for (int i=0; i<_3d_size; ++i)
        for (int r=0; r<_3d_rows; ++r)
            for (int c=0; c<_3d_columns; ++c) {
                int indx = (i*(_3d_rows*_3d_columns))+(r*_3d_columns+c);
                flat[indx] = arr[i][r][c];
            }
}

void flat_to_3d(int flat[], int resArr3d[_3d_size][_3d_rows][_3d_columns]) {
    for (int indx=0; indx<flatSize; ++indx) {
        int i,r,c;
        i = indx/(_3d_rows*_3d_columns);
        r = (indx-(i*_3d_rows*_3d_columns))/(_3d_columns);
        c = (indx-(i*_3d_rows*_3d_columns))%(_3d_columns);
        resArr3d[i][r][c] = flat[indx];
    }
}

int main() {
    int arr3d[_3d_size][_3d_rows][_3d_columns] = {{{1,2},{3,4}},{{5,6},{7,8}}};
    int flat[flatSize];
    flat_3d_array(arr3d, flat);
    int resArr3d[_3d_size][_3d_rows][_3d_columns];
    flat_to_3d(flat, resArr3d);
    return 0;
}
