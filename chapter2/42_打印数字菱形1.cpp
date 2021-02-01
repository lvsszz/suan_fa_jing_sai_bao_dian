#include <iostream>

using namespace std;

int main()
{
    for(int i=-3; i <=3; i++)
    {
        int k = abs(i);
        for(int j = 1; j <= k; j++)
            cout << ' ';
        for(int j = 1; j <=2*(4-k) -1; j++)
            cout << k+1;
        cout << endl;

    }
}
