#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    for(int i=1;i<=5000;i++)
        cout<<rand()%(2)<<' ';
    system("pause");
    return 0;
}
