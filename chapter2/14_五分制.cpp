#include <iostream>

using namespace std;

int main()
{
    int grade;
    cin >> grade;
    switch(grade)
    {
        case 5:
            cout << "优秀\n"; break;
        case 4:
            cout << "良\n"; break;
        case 3:
            cout << "及格\n"; break;
        case 2:
            cout << "不及格\n"; break;
        default : cout << "太糟糕了\n";
    }

    system("pause");
    return 0;
}