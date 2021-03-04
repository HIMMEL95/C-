#include <iostream>
using namespace std;

int main()
{
    int user_input;
    cout << "저의 정보를 표시해줍니다." << endl;
    cout << "1. Name" << endl;
    cout << "2. Age" << endl;
    cout << "3. Sex" << endl;
    cin >> user_input;

    switch (user_input)
    {
    case 1:
        cout << "Psi!" << endl;
        break;
    case 2:
        cout << "99 살" << endl;
        break;
    case 3:
        cout << "남자" << endl;
        break;
    default:
        cout << "궁금한게 없군요~" << endl;
        break;
    }
    return 0;
}