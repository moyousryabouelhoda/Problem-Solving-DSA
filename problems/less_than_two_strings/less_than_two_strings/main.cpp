//
//  main.cpp
//  less_than_two_strings
//
//  Created by Muhammad Yusry on 20/02/2023.
//

#include <iostream>
#define endl "\n"<<flush
using namespace std;

bool less_than(string a, string b) {
    int i = 0, j = 0;
    int aSZ = (int) a.length(), bSZ = (int) b.length();
    
    while ((i<aSZ) && (j<bSZ)) {
        if (a[i] > b[j])
            return false;
        if (a[i] < b[j])
            return true;
        j = i += 1;
    }
    return aSZ < bSZ;
}

int main() {
    string a = "ab";
    string b = "a";
    cout<<"C++ => "<<(a<b)<<endl;
    cout<<"less_than => "<<less_than(a,b)<<endl;
    return 0;
}
