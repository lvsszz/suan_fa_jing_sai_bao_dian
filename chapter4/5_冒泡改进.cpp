#include <iostream>

using namespace std;
#define N 100000+1
int i, j, n, lastchange;
int a[N+1];

int main()
{
    freopen("sort.in", "r", stdin);
    freopen("sort.out", "w", stdout);
    cin >> n;
    for(i = 1; i <= n; i++)
        cin>>a[i];
    
    i = 2;
    while ((i < n))
    {
        lastchange = n;
        for(j = n; j >= i; j--)
            if(a[j] < a[j-1])
            {
                a[j] = a[j]^a[j-1];  //位运算
                a[j-1] = a[j-1]^a[j];
                a[j] = a[j]^a[j-1];
                lastchange = j;
            }
        i = lastchange;
    }

    for(i = 1; i < n; i++)
        cout<<a[i]<<' ';
    cout<<a[n]<<'\n';
    return 0;

}

