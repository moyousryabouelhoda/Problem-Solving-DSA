//
//  main.cpp
//  reverse_in_place_array
//
//  Created by Muhammad Yusry on 25/02/2023.
//

#include <iostream>

using namespace std;

void reverse_string() {
    const int size = 4;
    char arr[size] = "ALF";
//    string arr = "ALF";
//    const int size = int(arr.length()+1);
    
    for (int i=0; i<(size/2); ++i)
        swap(arr[i], arr[size-i-1]);

    for (int i=1; i<size; ++i)
        cout<<arr[i];
    
    cout<<"\n"<<flush;
}

void reverse_array() {
    const int size = 3;
    int arr[size] = {1,2,3};
    
    for (int i=0; i<(size/2); ++i)
        swap(arr[i], arr[(size-1)-i]);
    
    for (int i=0; i<size; ++i)
        cout<<arr[i];
    
    cout<<"\n"<<flush;
}

int main() {
    reverse_array();
    return 0;
}
