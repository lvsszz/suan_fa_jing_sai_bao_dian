#include <iostream>
#include <ctime>
#include<windows.h>
using namespace std;

int main()
{
    clock_t time;
    time = clock();
    cout<<time<<endl;
    Sleep(1000);
    cout<<clock()-time<<"毫秒"<<endl;
    system("pause");
    return 0;
}

