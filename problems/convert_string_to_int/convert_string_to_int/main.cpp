//
//  main.cpp
//  convert_string_to_int
//
//  Created by Muhammad Yusry on 19/02/2023.
//

#include <iostream>

using namespace std;

long convert_to_int(string str) {
    if (!str.length())
        assert(false);
    
    long result = 0;
    for (int i=0; i<str.length(); ++i) {
        if (str[i] < 48 || str[i] > 57)
            assert(false);
        result = (result*10) + ((str[i]+10)-58);
    }
    return result;
}

long convert_to_int_2(string str) {
    if (!str.length())
        assert(false);
    
    long result = 0;
    for (int i=0; i<str.length(); ++i) {
        int digit = str[i]-'0';
        if (digit < 0 || digit > 9)
            assert(false);
        result = (result*10) + digit;
    }
    return result;
}

int main() {
    const string str = "";
//    cout<<convert_to_int(str)<<"\n"<<flush;
//    cout<<convert_to_int_2("1234209656")<<"\n"<<flush;

    return 0;
}
