#include<iostream>

using namespace std;

int main()
{
  string s;
  getline(cin,s);
  string original = "ABCDEFG";
  bool is_prefix = true;
  
  for(int i=0;i<s.size();++i)
  {
    if(original[i] != s[i]) {is_prefix = false;}
  }
  
  if(is_prefix) {cout<<"YES"<<endl;}
  else {cout<<"NO"<<endl;}
  return 0;
}
