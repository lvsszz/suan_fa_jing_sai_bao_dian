#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int N=0, i, temp;
    double r, l;
    cin>>r;
    l=floor(r);
    for(i=1; i<=l; i++)
    {
        temp=sqrt(r*r-i*i);
        N=N+temp;
    }
    cout<<4*N;
    system("pause");
    return 0;
}

//floor(x)返回x的整数部分,向负无穷大方向舍入
//ceil(x)返回的是不小于x的最小整数,向正无穷大方向舍入