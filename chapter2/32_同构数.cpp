
#include <iostream>
using namespace std;

int main()
{
  long i,j,s;
  for(i=2;i<10000;i++)
  {
    s=i*i;
    j=i;
    while(j>0)
    { 
      if((j%10)!=(s%10)) 
        break;
      j=j/10;
      s=s/10;
    }
    if(j==0) 
      cout<<i<<"  ";
  }
  getchar();
  getchar();
  return 0;
}
