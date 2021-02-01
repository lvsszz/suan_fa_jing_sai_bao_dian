#include <iostream>
using namespace std;

int main()
{
  int a,n,count=1,sn=0,tn=0;
  cin>>a>>n;
  while(count<=n)
  {
    tn=tn+a;
    sn=sn+tn;
    a=a*10;
    ++count;
  }
  cout<<sn<<endl;
  system("pause");
  return 0;
}

