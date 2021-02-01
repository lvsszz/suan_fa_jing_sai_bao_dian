#include <iostream>

using namespace std;

int main()
{
    char grade;
    cin >> grade;
    switch(grade)
    {
        case 'A':
            cout << "优秀\n"; break;
        case 'B':
            cout << "良\n"; break;
        case 'C':
            cout << "及格\n"; break;
        case 'D':
            cout << "不及格\n"; break;
        default:
            cout << "太糟糕\n"; break;
    }
    system("pause");
    return 0;
}
