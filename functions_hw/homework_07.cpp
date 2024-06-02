#include<iostream>
/*
Implement this function
string replace_str(string input, string pattern, string to)
The function replaces every pattern with to and return it

Constraints: Input consists only of lower cases, len(pattern) > 0, len(to) >= 0
Input: “aabcabaaad”, “aa”, “x”
Input: “aabcabaaad”, “aa”, “aaaa”
Input: “aabcabaaad”, “aa”, “”

Return: “xbcabxad”
Return: “aaaabcabaaaaad”
Return: “bcabad”
Let your code makes use of another function:

bool starts_with(string input, string pattern, int pos);
Return true if string input has the pattern starting from pos
Input: “aabcabaaad”, “aa”, 0 ⇒ True
Input: “aabcabaaad”, “aa”, 1 ⇒ False

*/
using namespace std;
bool starts_with(string input, string pattern, int pos)
{
  bool is_start = true;
  for(int i=pos, j=0;j<(int)pattern.size();++i,++j)
  {
    if(input[i] != pattern[j]) {is_start = false; break;}
  }
  return is_start;
}
string replace_str(string input, string pattern, string to)
{
  string result = "";
  for(int i=0;i<(int)input.size();)
  {
    if(starts_with(input,pattern,i))
    {
      for(int j=0;j<(int)to.size();++j) {result += to[j];}
      i += (int)pattern.size();
    }
    else {result += input[i]; ++i;}
  }
  return result;
}

int main()
{
  string input, pattern ,to;
  cin>>input>>pattern>>to;
  // getline(cin,to);
  cout<<replace_str(input, pattern, to)<<endl;
  return 0;
}
