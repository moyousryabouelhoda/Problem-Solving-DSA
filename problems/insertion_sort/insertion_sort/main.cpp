//
//  main.cpp
//  insertion_sort
//
//  Created by Muhammad Yusry on 19/02/2023.
//

#include <iostream>

using namespace std;

void insertion_sort(int *arr, int size) {
    for (int i=1; i<size; ++i) {
        int cpy = arr[i];
        int j = i-1;
        for (; j>=0; --j) {
            if (arr[j] < cpy)
                break;
            arr[j+1] = arr[j];
        }
        arr[j+1] = cpy;
    }
}

void Test_insertion_sort () {
    const int SIZE = 8;
    int arr[SIZE], cpy[SIZE], temp[SIZE];
    for (int test=0; test<1000; ++test) {
        for (int i=0; i<SIZE; ++i)
            arr[i] = cpy[i] = temp[i] = rand()%100;
        
        insertion_sort(arr, SIZE);
        sort(cpy, cpy+SIZE);
        
        bool passed = true;
        for (int i=0; i<SIZE; ++i)
            passed &= (arr[i] == cpy[i]);
        
        if (!passed) {
            cout<<"FAILED TEST "<<test+1<<"\n"<<flush;
            for (int i=0; i<SIZE; ++i)
                cout<<temp[i]<<"\n"<<flush;
            assert(false);
        }
        cout<<"PASSED TEST "<<test+1<<"\n"<<flush;
    }
    cout << "PERFECT" << endl;
}

int main() {
    srand((uint)time(NULL));
    Test_insertion_sort();
    
    return 0;
}
