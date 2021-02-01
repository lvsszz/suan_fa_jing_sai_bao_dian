//读入包括空格符的字符串
//ch=fin.get()是在文件流读写中使用的，是获得单个字符

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a,b,c,space;
    ifstream fin("in.txt");
    ofstream fout("out.txt");
    a=fin.get() - '0';   //获取一个字符，包括空格
    space=fin.get();
    b=fin.get()-'0';
    space=fin.get();
    c=fin.get()-'0';
    fout<<a*b*c;
    fin.close();
    fout.close();
    return 0;
}


