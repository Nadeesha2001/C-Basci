#include<iostream>
//#include<cmath>
#include<math.h>
//#define pi 3.14
using namespace std;

int main() {

    float area , r ;

    cout << "Enter Radious Value : " << endl;
    cin >> r;

    area = M_PI * pow(r,2);
    // if using pi , we want active (#define pi 3.14) 

    cout << "Area of the Circle : " << area;
    return 0;
}