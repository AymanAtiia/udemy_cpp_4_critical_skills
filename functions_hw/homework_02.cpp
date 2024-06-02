#include<iostream>
/*
Problem : Develop a function that do reverse for the string.
*/
using namespace std;
string reverse_str(const string &str)
{
  string result = "";
  for(int i=(int)str.size()-1;i>=0;--i) {result += str[i];}
  return result;
}


int main()
{
  cout<<reverse_str("aymanacio")<<endl;
  return 0;
}
