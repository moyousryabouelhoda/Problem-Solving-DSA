//
//  main.cpp
//  find_primes_sieve_algorithm
//
//  Created by Muhammad Yusry on 01/03/2023.
//

#include <iostream>
#include <math.h>
#define endl "\n"<<flush
using namespace std;

void find_primes(bool arr[], int size) {
    for (int i=2; i<sqrt(size); ++i) {
        for (int j=i; j<size; ++j)
            if (!(j%i))
                arr[j] = false;
    }
    for (int i=2; i<size; ++i)
        if (arr[i])
            cout<<i<<" ";
    cout<<endl;
}

int main() {
    cout<<"Enter range number:"<<endl;
    int range = 0;
    cin>>range;
    range+=1;
    bool arr[range];
    memset(arr, 1, range);
    arr[0] = arr[1] = false;
    find_primes(arr, range);
    
    return 0;
}
