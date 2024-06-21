#include<iostream>
/*
Problem : is prefix
  bool is_prefix(string main, string prefix, int start_pos = 0)
  E.g. is_prefix(“abcdefgh”, “abcd”) ⇒ true
  E.g. is_prefix(“abcdefgh”, “”) ⇒ true
  E.g. is_prefix(“abcdefgh”, “abd”) ⇒ false
*/

using namespace std;

bool is_prefix(string m, string prefix, int start_pos = 0)
{
  if(start_pos == (int)prefix.size()) {return true;}
  return (m[start_pos] == prefix[start_pos]) && is_prefix(m, prefix, start_pos+1);
}

int main()
{
  string m, prefix;
  getline(cin, m);
  getline(cin, prefix);
  
  bool res = is_prefix(m,prefix);
  if(res) {cout<<"YES"<<endl;}
  else {cout<<"NO"<<endl;}
  return 0;
}
