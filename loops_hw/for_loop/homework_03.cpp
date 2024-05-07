#include<iostream>

using namespace std;

int main()
{
  int cnt = 0;
  /*
  using 4 loops : takes too long
  
  for (int a=1;a<=200;++a)
    for(int b=1;b<=200;++b)
      for(int c=1;c<=200;++c)
        for(int d=1;d<=200;++d)
          if (a+b == c+d) {++cnt;}
  */
  
  for (int a=1;a<=200;++a)
    for(int b=1;b<=200;++b)
      for(int c=1;c<=200;++c)
      {
        int d = a + b -c;
        if(d>=1 && d<= 200) {++cnt;}
      }
  cout<<cnt<<endl;
  return 0;
}
