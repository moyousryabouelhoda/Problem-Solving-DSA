//
//  main.cpp
//  big_factorial
//
//  Created by Muhammad Yusry on 25/02/2023.
//

#include <iostream>
using namespace std;

const int MAX_SIZE = 1000000;

int multiply(int num, int *res, int res_size) {
    int carry = 0;
    for (int i=0; i<res_size; ++i) {
        int value = (res[i]*num) + carry;
        res[i] = value%10;
        carry = value/10;
    }
    
    while (carry) {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    
    return res_size;
}

void big_fatorial(int num) {
    int res[MAX_SIZE];
    res[0] = 1;
    int res_size = 1;
    for (int i=2; i<=num; ++i)
        res_size = multiply(i, res, res_size);

    for (int i=(res_size-1); i>=0; --i)
        cout<<res[i];
}

// MY SOLVE
//void big_fatorial(int num) {
//    int res[MAX_SIZE];
//    res[0] = 1;
//    int res_size = 1;
//    for (int i=2; i<=num; ++i) {
//        int carry = 0;
//        for (int j=0; j<res_size; ++j) {
//            int value = (res[j] * i) + carry;
//            if (value > 9) {
//                res[j] = value%10;
//                carry = value/10;
//                res_size++;
//            }else{
//                res[j] = value;
//                carry = 0;
//            }
//        }
//    }
//
//    for (int i=(res_size-1); i>=0; --i)
//        cout<<res[i];
//}

int main() {
    cout<<"Enter number:"<<"\n"<<flush;
    int num;
    cin>>num;
    big_fatorial(num);
    cout<<"\n"<<flush;
    return 0;
}
