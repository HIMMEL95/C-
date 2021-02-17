#include <iostream>
#include <ctime>     // time() 함수를 포함하는 헤더파일
#include <termios.h> // getche() 함수를 포함하는 헤더파일
using namespace std;

int getch(void);
void Initialize();                // 초기화
void CountStrike(int nInputs[3]); // 스트라이크 개수 계산
void CountBall(int nInputs[3]);   // 볼 개수 계산

int nNumbers[3] = {}; // 세자리 숫자를 저장할 배열
int nStrikeCount = 0; // 스트라이크 개수
int nBallCount = 0;   // 볼 개수 계산

int main()
{
    Initialize();

    // Game start (9inning)
    for (int i = 0; i < 9; i++)
    {
        int nInputs[3] = {};

        cout << "숫자 3자리를 입력하세요 : ";
        nInputs[0] = getch() - '0';
        nInputs[1] = getch() - '0';
        nInputs[2] = getch() - '0';

        CountStrike(nInputs);
        CountBall(nInputs);

        cout << endl
             << i + 1 << "회 " << nStrikeCount << "S " << nBallCount << "B " << endl;

        if (nStrikeCount == 3)
            break;
    }
    cout << (nStrikeCount == 3 ? "승리하였습니다!" : "패배하였습니다!") << endl;
}

// 초기화
void Initialize()
{
    srand(time(NULL)); // 난수 제작 함수

    // 세자리 난수 생성
    nNumbers[0] = rand() % 10; // 0~ 9사이의 난수가 나온다
    nNumbers[1] = rand() % 10;
    nNumbers[2] = rand() % 10;

    // 중복이 없도록 처리
    while (nNumbers[1] == nNumbers[0])
    {
        nNumbers[1] = rand() % 10;
    }
    while (nNumbers[2] == nNumbers[0] || nNumbers[2] == nNumbers[1])
    {
        nNumbers[2] = rand() % 10;
    }
}

// count Strike
void CountStrike(int nInputs[3])
{
    nStrikeCount = 0;
    for (int i = 0; i < 3; i++)
    {
        if (nNumbers[i] == nInputs[i])
            nStrikeCount++;
    }
}

// count Ball
void CountBall(int nInputs[3])
{
    nBallCount = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            if (i != k && nNumbers[i] == nInputs[k])
                nBallCount++;
        }
    }
}

// #includ <termio.h> / getche() 함수를 대신 사용하기 위해서 만든 함수
int getch(void)
{
    int ch;

    struct termios buf;
    struct termios save;

    tcgetattr(0, &save);
    buf = save;

    buf.c_lflag &= ~(ICANON | ECHO);
    buf.c_cc[VMIN] = 1;
    buf.c_cc[VTIME] = 0;

    tcsetattr(0, TCSAFLUSH, &buf);

    ch = getchar();

    tcsetattr(0, TCSAFLUSH, &save);

    return ch;
}
