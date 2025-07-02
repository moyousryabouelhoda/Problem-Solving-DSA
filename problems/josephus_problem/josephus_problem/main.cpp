//
//  main.cpp
//  josephus_problem
//
//  Created by Muhammad Yusry on 01/03/2023.
//

#include <iostream>
#define endl "\n"<<flush
using namespace std;

int play_joseph(int n, int k) {
    int survivors = n;
    bool arr[n];
    memset(arr, true, n);
    
    int count = 0;
    for (int i=0; i<n; ++i) {
        if (arr[i]) {
            if (survivors == 1)
                return i+1;
            
            count++;
            if (count == k) {
                arr[i] = false;
                survivors--;
                count = 0;
            }
        }
        if ((i+1) == n)
            i = -1;
    }
    
    return -1;
}

int main() {
    cout<<"Enter range and cycle size:"<<endl;
    int n,k;
    cin>>n>>k;
    cout<<play_joseph(n, k)<<endl;
    
    return 0;
}
