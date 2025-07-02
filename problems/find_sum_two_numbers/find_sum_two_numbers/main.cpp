//
//  main.cpp
//  find_sum_two_numbers
//
//  Created by Muhammad Yusry on 28/02/2023.
//

#include <iostream>
#define endl "\n"<<flush
using namespace std;

bool find_two_elements(int *arr, int size, int sum) {
    int low = 0, heigh = size-1;
    while (low < heigh) {
        int curnt_sum = low + heigh;
        if (curnt_sum == sum)
            return true;
        if (curnt_sum > sum)
            heigh--;
        else
            low++;
    }
    return false;
}

void take_array_sorted(int *arr, int size) {
    for (int i=0; i<size; ++i) {
        cin>>arr[i];
        int temp_i = i, j = i;
        while (j > 0) {
            --j;
            if (arr[j] > arr[temp_i]) {
                swap(arr[j], arr[temp_i]);
                temp_i = j;
            }
        }
    }
}

int main() {
    cout<<"Enter array size:"<<endl;
    int size = 0;
    cin>>size;
    int arr[size];
    cout<<"Enter array elements:"<<endl;
    take_array_sorted(arr, size);
    cout<<"Enter sum:"<<endl;
    int sum = 0;
    cin>>sum;
    if (find_two_elements(arr, size, sum))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
    return 0;
}
