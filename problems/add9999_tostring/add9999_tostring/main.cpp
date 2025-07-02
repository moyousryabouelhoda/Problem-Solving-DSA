//
//  main.cpp
//  add9999_tostring
//
//  Created by Muhammad Yusry on 20/02/2023.
//

#include <iostream>

using namespace std;

string add9999(string str) {
    const int str_sz = (int) str.length();
    int last_digit = str[str_sz-1]-'0';
    int x = last_digit + 9999;
    const int x_sz = (int) to_string(x).length();

    if (str_sz <= x_sz)
        return to_string((x+stoi(str))-last_digit);
    
    int lst_indx = (str_sz-x_sz);
    string y = "";
    for (int i=lst_indx; i<str_sz; ++i)
        y += str[i];
    
    string res = to_string((x+stoi(y))-last_digit);
    str = str.substr(0,lst_indx);
    for (int i=0; i < res.length(); ++i)
        str += res[i];
    
    return str;
}

int main() {
    string str = "564657753434566875";
    cout<<add9999(str)<<"\n"<<flush;

    return 0;
}
