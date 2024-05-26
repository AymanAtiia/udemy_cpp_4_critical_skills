#include<iostream>

using namespace std;

int main()
{
  string s;
  getline(cin,s);
  int num = 0;
  for(int i=0;i<s.size();++i)
  {
    if(s[i] >= '0' && s[i] <='9') 
    {
  
      int j = s.size()-i-1;
      int coeff = 1;
      while(j){coeff *= 10;--j;}
      
      num += ((int)s[i] - 48)*coeff;
    }
  }
  cout<<num<< " " <<num*3<<endl;
  return 0;
}
