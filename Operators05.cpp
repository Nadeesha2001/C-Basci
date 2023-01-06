// calculate this Formula
//  m = sqrt(n^2 - p)

#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int n , p;
    float m;

    cout << "Enter an Integer Number : " << endl;
    cin >> n;
    cout << "Enter an Tnteger Number : " << endl;
    cin >> p;

    m = sqrt(pow(n , 2) - p);

    cout << "Final answer is : " << m;

    return 0;
    
}