#include<iostream>

using namespace std;

int main()
{
  string s;
  getline(cin,s);
  string original = "ABCDEFG";
  bool is_subset = true;
  
  for(int i=0;i<original.size();++i)
  {
      int ind = i;
      for (int j=0; j<s.size();++j)
      {
        if(s[j] != original[ind]) {is_subset = false;}
        cout<<s[j]<< " " <<original[ind]<<endl;
        ++ind;
      }
  }

  if(is_subset) {cout<<"YES"<<endl;}
  else {cout<<"NO"<<endl;}
  return 0;
}
