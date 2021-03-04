#include <iostream>
using namespace std;

int main()
{
    int lucky_number = 3;
    cout << "내 비밀 수를 맞춰어 보세요~" << endl;

    int user_input;

    while (1)
    {
        cout << "입력 : ";
        cin >> user_input;
        if (lucky_number == user_input)
        {
            cout << "맞추셨습니다~~" << endl;
            break;
        }
        else
        {
            cout << "다시 생각해보세요~" << endl;
        }
    }
    return 0;
}