#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int low,hight;
    srand((unsigned)time(NULL));
    cin>>low>>hight;
    for(int i=1; i<=5000; i++)
        cout<<rand()%(hight-low+1)+low<<' ';
        system("pause");
    system("pause");
    return 0;
}

