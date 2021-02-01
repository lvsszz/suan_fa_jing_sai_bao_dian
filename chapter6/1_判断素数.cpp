#include <iostream>
using namespace std;

void prime(int number);

int main()
{
    int num;
    cin>>num;
    prime(num);
    system("pause");
    return 0;

}

void prime(int number)
{
    int n, flag = 1;
    for(n = 2; n < number/2; n++)
        if(number%n == 0)
           flag = 0;
    if(flag)
         cout<<number<<"是一个素数"<<endl;
    else
    {
        cout<<number<<"不是一个素数"<<endl;
    }
    
}
