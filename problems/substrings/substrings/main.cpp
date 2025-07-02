//
//  main.cpp
//  substrings
//
//  Created by Muhammad Yusry on 20/02/2023.
//

#include <iostream>

using namespace std;

void substrings(string str) {
    for (int i=0; i<str.length(); ++i) {
        string sub = "";
        sub += str[i];
        cout<<sub<<"\n"<<flush;
        for (int j=i+1; j<str.length(); ++j) {
            sub += str[j];
            cout<<sub<<"\n"<<flush;
        }
    }
}

int main() {
    string str = "123a";
    substrings(str);
    return 0;
}
