#include <iostream>

using namespace std;


int main()
{
    FILE* in=fopen("i.txt","rb");
    FILE* out=fopen("o.txt","wb");
    char a[9];
    fgets(a,10,in);
    fputs(a,out);

    return 0;
}

//fgets的功能是在文件中读一行字符串，有三个参数
//fgets(a,n,in);其中a是一个char型数组用于存放读取的字符串，n表示读取n-1个字符，in是文件读入指针
//fgets会在读入的数据末尾加上一个空字符以构成一个字符串
//fgets与gets的不同之处在于，fgets读取换行符后不会将其省略，而gets读到换行符后会推出，并将换行符略去

//fputs功能是在文件中写入一行字符串，有两个参数
//fputs(a,out)其中a是一个要输出的char型数组，out是文件输出指针
//fputs和puts区别是fputs在打印时并不添加换行符


