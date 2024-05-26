#include<iostream>

using namespace std;

int main()
{
  string s;
  getline(cin,s);
  string original = "ABCDEFG";
  bool is_suffix = true;
  
  for(int i=s.size()-1, j = original.size()-1; i>=0 ;--i, --j)
  {
    if(original[j] != s[i]) {is_suffix = false;}
  }

  if(is_suffix) {cout<<"YES"<<endl;}
  else {cout<<"NO"<<endl;}
  return 0;
}
