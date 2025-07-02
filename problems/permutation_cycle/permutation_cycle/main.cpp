//
//  main.cpp
//  permutation_cycle
//
//  Created by Muhammad Yusry on 01/03/2023.
//

#include <iostream>
#define endl "\n"<<flush
using namespace std;

void print_cycles(int arr[], int size) {
    int i = 0;
    while (i < size) {
        int j = i;
        while ((arr[j] != -1) && (j < size)) {
            cout<<j<<" -> "<<arr[j]<<endl;
            int old_j = j;
            j = arr[j];
            arr[old_j] = -1;
        }
        i++;
    }
    cout<<endl;
}

int main() {
    cout<<"Enter array size:"<<endl;
    int size = 0;
    cin>>size;
    cout<<"Enter array elements:"<<endl;
    int arr[size];
    int i = 0;
    while (i < size)
        cin>>arr[i++];
    
    print_cycles(arr, size);
    
    return 0;
}
