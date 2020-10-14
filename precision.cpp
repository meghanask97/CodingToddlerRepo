#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
  
    int intNumber;
    long longNumber;
    char letter;
    float floatNumber;
    double doubleNumber;

    cin >> intNumber >> longNumber >> letter >> floatNumber >> doubleNumber;
    cout << intNumber <<endl<< longNumber <<endl<< letter <<endl<<fixed<< setprecision(3)<<floatNumber << endl<< fixed<<setprecision(9)<<doubleNumber;
    
    return 0;
}
