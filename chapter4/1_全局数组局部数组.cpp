#include <iostream>

using namespace std;
int a[10];

int fun()
{
    a[0] = 0;
}

int main()
{
    int i, b[10];
    for(i = 0; i <= 9; i++)
        cout<<a[i]<<' ';
    cout<<endl;
    for(i = 0; i <= 9; i++)
        cout<<b[i]<<' ';
    system("pause");
    return 0;
}



