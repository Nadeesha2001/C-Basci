// Find the average of three integer numbers'

#include<iostream>
using namespace std;

int main() {

    float N1 , N2, N3;
    float avg;

    cout << "Enter First integer Number : " << endl;
    cin >> N1;
    cout << "Enter second Integer Number : " << endl;
    cin >> N2;
    cout << "Enter Third Integer Number : " << endl;
    cin >> N3;

    avg = (N1 + N2 + N3) / 3 ;

    cout << "Average of three integer numbers : " << avg;

    return 0;

}