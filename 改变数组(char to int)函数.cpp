//read the num as a function
#include<iostream>
#include <iomanip>
using namespace std;
void change(char*, int*,int*);
int main()
{
 int num=0;//count the digits
 char ch[7]={'1','2','3','4','5','6','7'};//trial char
 char chr[7];//input char
 cin>>chr;
 int b[7]={11,12,13,14,15,16,17};//to be changed


 change(chr,b,&num);
for(int i=0;i<7;i++)
  cout<<setw(3)<<b[i];
  cout<<endl<<num;

}
void change(char *ch,int *b,int *num_count)
{  for(int i=0;i<7;i++)
    {*(b++)=(int)(*(ch++)-'0');
      *num_count=i;}


}
