#include <iostream>

using namespace std;

int main()
{
    int sum = 0, n;
    while (true)
    {
        cout << "输入一个整数（0表示结束）";
        cin >> n;
        if(n == 0)
            break;
        sum += n;
    }
    cout << "总和为：" << sum << endl;
    system("pause");
    return 0;
}

