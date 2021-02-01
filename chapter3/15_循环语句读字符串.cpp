//读入包括空格符的字符串
#include <iostream>

using namespace std;

int main()
{
    char c;
    while((c=getchar())!='\n')
        cout<<c;
    system("pause");
    return 0;
}