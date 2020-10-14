/* Practice qn 1  
Input Format

Input consists of the following space-separated values: int, long, char, float, and double, respectively.

Output Format

Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

Sample Input

3 12345678912345 a 334.23 14049.30493
Sample Output

3
12345678912345
a
334.230
14049.304930000

*/

#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int intNumber;
    long longNumber;
    char letter;
    float floatNumber;
    double doubleNumber;

    cin >> intNumber >> longNumber >> letter >> floatNumber >> doubleNumber;
    cout << intNumber <<endl<< longNumber <<endl<< letter <<endl<<fixed<< setprecision(3)<<floatNumber << endl<< fixed<<setprecision(9)<<doubleNumber;
    
    return 0;
}