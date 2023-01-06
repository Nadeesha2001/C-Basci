/*
     List of Relational and Equality Operators
        * Equal Operator ==
        * Not Equal Operator !=
        * Greater than >
        * Less than <
        * Greater than or equal to >=
        * Less than or equal to <=
*/

#include<iostream>
using namespace std;

int main() {

    int A , B;

    cout << "Enter first Integer number : " << endl;
    cin >> A;

    cout << "Enter Second Integer number : " << endl;
    cin >> B;
    // return Value 1 is true , or return value 0 is False
    cout << "Equal\t: " << (A == B) << endl;
    cout << "Not Equal\t: " << (A != B) << endl;
    cout << "Greater than\t: " << (A > B) << endl;
    cout << "Less than\t: " << (A < B) << endl;
    cout << "Greater than or equal\t: " << (A >= B) << endl;
    cout << "Less than or equal\t: " << (A <= B) << endl;

    return 0;
}