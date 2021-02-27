// 프로젝트
// 경찰관이 범죄자의 정보를 입수 (조서 작성)
// 이름? 나이? 몸무게? 키? 범죄명?

#include <iostream>

using namespace std;

int main()
{
    char name[256];
    cout << "이름이 뭐예요? ";
    cin >> name;

    int age;
    cout << "몇살이에요? ";
    cin >> age;

    float weight;
    cout << "몸무게는 몇 kg 이예요? ";
    cin >> weight;

    double height;
    cout << "키는 몇 cm 이에요? ";
    cin >> height;

    char what[256];
    cout << "무슨 범죄를 저질렀어요? ";
    cin >> what;

    cout << "\n\n--- 범죄자 정보 ---\n\n";
    cout << "이름      : " << name << " \n";
    cout << "나이     : " << age << " \n";
    cout << "몸무게      : " << weight << " \n";
    cout << "키        : " << height << " \n";
    cout << "범죄      : " << what << " \n";

    return 0;
}