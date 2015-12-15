#include<iostream>
#include <iomanip>
using namespace std;
void change(char*, int*);
int main()
{

 char ch[7]={'1','2','3','4','5','6','7'};
 char chr[7];
 cin>>chr;
 int b[7]={11,12,13,14,15,16,17};
 int p[7]={0};

 change(chr,b);
for(int i=0;i<7;i++)
  cout<<setw(3)<<b[i];

}
void change(char *ch,int *b)
{  for(int i=0;i<7;i++)
    *(b++)=(int)(*(ch++)-'0');


}
