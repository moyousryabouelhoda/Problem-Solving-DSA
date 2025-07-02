//
//  main.cpp
//  sum_query_array
//
//  Created by Muhammad Yusry on 20/02/2023.
//

#include <iostream>

using namespace std;

int sumQuery(int start, int end, int arr[]) {
    if (start == 0)
        return arr[end];
        
    return arr[end]-arr[start-1];
}

int main() {
    cout<<"Enter array size: "<<"\n"<<flush;
    int size = 0;
    cin>>size;
    int arr[size];
    cout<<"Enter array elements: "<<"\n"<<flush;
    for (int i=0; i<size; ++i) {
        cin>>arr[i];
        if (i!=0)
            arr[i] = arr[i-1] + arr[i];
    }
    int s,e = 0;
    cout<<"Enter first and last index to sum: "<<"\n"<<flush;
    cin>>s>>e;    
    cout<<sumQuery(s,e,arr)<<"\n"<<flush;

    return 0;
}
