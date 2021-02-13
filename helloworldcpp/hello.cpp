#include <iostream>
using namespace std;
double stone2kg(int);

int main()
{
    int stone;
    cout << "Enter your weight in stone: ";
    cin >> stone;
    double kgs = stone2kg(stone);
    cout << stone << " stones are ";
    cout << kgs << " kg.\n";
}
double stone2kg(int sts)
{
    return 6.35 * sts;
}