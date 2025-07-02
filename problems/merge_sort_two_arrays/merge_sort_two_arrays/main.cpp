//
//  main.cpp
//  merge_sort_two_arrays
//
//  Created by Muhammad Yusry on 19/02/2023.
//

#include <iostream>
#include <algorithm>

using namespace std;

void merge_sort_two_sorted_arrays(int arr1[], int sz1, int arr2[], int sz2, int * result) {
    int idx1 = 0, idx2 = 0, res = 0;
    
    while (idx1 < sz1 && idx2 < sz2) {
        if (arr1[idx1] < arr2[idx2])
            result[res++] = arr1[idx1++];
        else
            result[res++] = arr2[idx2++];
    }
    
    while (idx1 < sz1)
        result[res++] = arr1[idx1++];
    
    while (idx2 < sz2)
        result[res++] = arr2[idx2++];
}

void Test_merge_sort_two_sorted_arrays() {
    const int SIZE1 = 5, SIZE2 = 3, SIZE3 = (SIZE1+SIZE2);
    int arr1[SIZE1], cpy1[SIZE1], temp1[SIZE1], arr2[SIZE2], cpy2[SIZE2], temp2[SIZE2], merged[SIZE3], cpyMerged[SIZE3];
    
    for (int test=0; test<1000; ++test) {
        for (int i=0; i<SIZE1; ++i)
            arr1[i] = rand()%100;
        sort(arr1, arr1+SIZE1);
        for (int i=0; i<SIZE1; ++i)
            cpy1[i] = temp1[i] = arr1[i];
        
        for (int i=0; i<SIZE2; ++i)
            arr2[i] = rand()%100;
        sort(arr2, arr2+SIZE2);
        for (int i=0; i<SIZE2; ++i)
            cpy2[i] = temp2[i] = arr2[i];
        
        merge_sort_two_sorted_arrays(arr1, SIZE1, arr2, SIZE2, merged);
        merge(arr1, (arr1+SIZE1), arr2, (arr2+SIZE2), cpyMerged);
        
        bool passed = true;
        for (int i=0; i<SIZE3; ++i)
            passed &= (merged[i] == cpyMerged[i]);
        
        if (!passed) {
            cout<<"FAILED TEST "<<test+1<<"\n"<<flush;
            cout<<"\t First Array "<<"\n"<<flush;
            for (int i=0; i<SIZE1; ++i)
                cout<<"\t\t"<<temp1[i]<<"\n"<<flush;
            cout<<"\t Second Array "<<"\n"<<flush;
            for (int i=0; i<SIZE2; ++i)
                cout<<"\t\t"<<temp2[i]<<"\n"<<flush;
            assert(false);
        }
        cout<<"PASSED TEST "<<test+1<<"\n"<<flush;
    }
    cout<<"PERFECT"<<"\n"<<flush;
}

int main() {
    Test_merge_sort_two_sorted_arrays();
    return 0;
}
