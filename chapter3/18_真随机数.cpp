#include <iostream>
#include <time.h>
using namespace std;
#define n 100

int a[101], i;

int main()
{
    srand((unsigned)time(NULL));
    for(i=1;i<=n;i++)
        a[i]=rand()%100;
    for(i=1;i<=n;i++)
        cout<<a[i]<<' ';
    getchar();
    return 0;
}


