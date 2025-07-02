//
//  main.cpp
//  grouping_string
//
//  Created by Muhammad Yusry on 20/02/2023.
//

#include <iostream>
using namespace std;

string grouping(string str) {
    string res = "";
    res += str[0];
    for (int i=1; i<str.length(); ++i) {
        if (str[i] != str[i-1])
            res += " ";
        res += str[i];
    }
    return res;
}

int main() {
    string str;
    cout<<"Enter The String: "<<"\n"<<flush;
    getline(cin, str);
    cout<<grouping(str)<<"\n"<<flush;
    return 0;
}

