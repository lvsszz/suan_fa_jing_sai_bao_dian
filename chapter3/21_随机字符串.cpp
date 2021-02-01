#include <iostream>
#include <time.h>

using namespace std;

int main() 
{
    int i,n,m;
    string str;
    cin>>n>>m;    //输出n行m个字符的随机字符串
    srand((unsigned)time(NULL));
    for(i=1; i<=n; i++)
    {
        str="";
        for(int j=1; j<=m; j++)
        {
            int temp=rand()%2;
            if(temp==0)
                str+=(char)(rand()%(26)+1+64);  //'A'=65 'Z'=90
            else
            {
                str+=(char)(rand()%(26)+1+96);  //'a'=97 'z'=122
            }
            
        }
        cout<<str<<endl;
    }
    system("pause");
    return 0;
}