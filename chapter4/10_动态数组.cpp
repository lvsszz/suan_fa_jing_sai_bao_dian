#include <iostream>

using namespace std;

int main()
{
    int *p;
    int n,i;
    scanf("%d", &n);
    while ((p=(int*)malloc(sizeof(int)*n))== NULL);
    for(i=0; i<=n-1; i++)
        p[i] = 2*i;
    for(i=0; i<=n-1; i++)
        cout<<p[i]<<" ";
    system("pause");
    return 0;
}

