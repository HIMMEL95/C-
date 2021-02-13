#include <iostream>
void gildong(int);
using namespace std;

int main()
{
    gildong(5);
    cout << "Enter an integer number: ";
    int count;
    cin >> count;
    gildong(count);
}

void gildong(int n)
{
    cout << "Gil-Dong studys " << n << " Chinease characters a day.\n\n";
}