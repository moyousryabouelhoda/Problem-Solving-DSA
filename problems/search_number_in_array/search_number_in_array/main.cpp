//
//  main.cpp
//  search_number_in_array
//
//  Created by Muhammad Yusry on 27/02/2023.
//

#include <iostream>
#define endl "\n"<<flush

using namespace std;

bool is_value_exist(int arr[], int size, int f) {
    int low = 0;
    int heigh = (size-1);
    
    while (low <= heigh) {
        int mid = (low+heigh)/2;
        if (f == arr[mid])
            return true;
        
        if (f > arr[mid])
            low = mid+1;
        else            
            heigh = mid-1;
    }
    
    return false;
}

int main() {
    cout<<"Enter array size: "<<endl;
    int size = 0;
    cin>>size;
    cout<<"Enter array elements: "<<endl;
    int arr[size];
    for (int i=0; i<size; ++i) {
        cin>>arr[i];
        int j = i;
        int temp_i = i;
        while (j > 0) {
            if (arr[j-1] > arr[temp_i]) {
                swap(arr[j-1], arr[temp_i]);
                temp_i = j-1;
            }
            j--;
        }
    }

    cout<<"Enter value to find: "<<endl;
    int f = 0;
    cin>>f;
    cout<<is_value_exist(arr, size, f)<<endl;
    
    return 0;
}
