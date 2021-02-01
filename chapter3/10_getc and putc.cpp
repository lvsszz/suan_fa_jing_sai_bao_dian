#include<iostream>

using namespace std;

int main()
{
    FILE* in=fopen("i.txt","rb");
    FILE* out=fopen("o.txt","wb");
    char c;
    c=getc(in);
    putc(c,out);
    return 0;
}

/*
getc的功能是从文件读取一个字符，常用判断文件是否读取结束的语句为:(ch=getc(fp)!=EOF).EOF为文件结束标志。
文件也可以被理解为一种流,故当文件输入指针为in时，getc(in)就等同于getchar()
putc()函数的功能是把字符ch写道文件中
如果文件输出指针为out，则putc(out)就等同于putchar()
*/

