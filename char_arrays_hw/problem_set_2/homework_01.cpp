#include<iostream>

using namespace std;
/*
Problem : Read a string of letters and then compress each group of same letter.
*/
int main()
{
  string s;
  getline(cin,s);
  
  char last_char = s[0];
  int count = 1;
  for(int i=1;i<=(int)s.size();++i)
  {
    if(s[i] == last_char) {count += 1;}
    else {
      cout<<last_char<<count;
      if(i != (int)s.size()) {cout<<"_";} 
      count = 1;
      }
    last_char = s[i];
  }
  cout<<endl;
  return 0;
}
