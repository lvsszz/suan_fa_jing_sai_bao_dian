//读写文件方法2 
#include <iostream>
#include <cstdlib>
int main()
{
 int i,len=0,temp[100];
 FILE *in=fopen("a.txt","r");//指针指向输入文件
 FILE *out=fopen("b.txt","w");//输出文件格式 
 for(i=0;!feof(in);i++)//如未到文件末尾
 {
   fscanf(in,"%d",&temp[i]);//读取文件中的数据
   len++;
 }
 for(i=0;i<len-1;i++)  //写入文件
   fprintf(out,"%d ",temp[i]);
 fclose(in);//关闭文件流
 fclose(out);//关闭文件流
}

//FILE:每个被使用的文件都在内存中开辟一个区,用来存放文件的有关信息(文件名,状态,当前位置等)
//这些信息保存在一个结构体类型的变量中,该结构体类型由系统定义,取名FILE.文件读写完毕后需使用fclose函数关闭文件流
//feof(in)中in是文件指针.只有两个返回值,当遇到文件结束符(EOF)时返回1,否则返回0;
//fprintf和fscanf函数是格式化读写函数,读写对象是文件 

