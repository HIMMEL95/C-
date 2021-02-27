#include <iostream>
using namespace std;
#define ROW 3
#define COL 5

int main()
{
    int a[ROW][COL] = {
        0,
    };
    int i, j;
    for (i = 0; i < ROW; i++)
    {
        a[i][0] = i + 1;
        cout << "# " << a[i][0] << " 번째 학생의 점수를 입력하세요.\n";
        for (j = 1; j <= COL - 2; j++)
        {
            cout << j << "번째 과목 => ";
            cin >> a[i][j];
        }
    }

    for (i = 0; i < ROW; i++)
    {
        for (j = 1; j <= COL - 2; j++)
        {
            a[i][COL - 1] += a[i][j];
        }
    }

    cout << "\n \t\t ** 출 력 결 과 **";
    cout << "\n----------------------------";
    cout << "\n \t번호 \t국어 \t영어 \t 수학 \t총점";
    cout << "\n----------------------------\n";
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j <= COL; j++) cout<<"\t "<<a[i][j]; cout<<"\n";
    }
    return 0;
}