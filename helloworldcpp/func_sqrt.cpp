#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double number;
    cout << "Enter a number for calculation sqrt : ";
    cin >> number;
    double square;
    square = sqrt(number);
    cout << "The square of the input number is " << square << "!!\n\n";
}