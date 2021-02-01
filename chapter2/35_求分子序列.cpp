//求数列前20项之和
#include <iostream>
using namespace std;
int main()
{
  int n,t;
  float a=2,b=1,s=0;
  for(n=1;n<=20;n++)
  {
    s=s+a/b;
    t=a,a=a+b,b=t;                  
  }
  cout<<s<<endl;  
  getchar();    
  return 0;  
}

