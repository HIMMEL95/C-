#include <iostream>

using namespace std;

int main()
{
    // p 체력, q 마나, w = 총액
    int p = 0, q = 0, w = 0;
    cout << "p, q, w 값을 입력하세요 : ";
    cin >> p >> q >> w;

    for (int i = 1; i * p <= w; i++)
    {
        if ((w - (i * p)) % q == 0)
        {
            cout << i << " " << (w - (i * p)) / q << endl;
            break;
        }
    }
    return 0;
}