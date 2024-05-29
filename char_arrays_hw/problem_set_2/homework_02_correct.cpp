#include<iostream>

using namespace std;
/*
Problrm : Read 2 strings, then output YES if the first smaller than or equal to second.
Otherwise, output NO
*/
int main()
{
  string s1, s2;
  getline(cin,s1);
  getline(cin,s2);
  
  int small_size = (int)s1.size();
  int smaller = -1;
  if (s1.size() > s2.size()) {small_size = (int)s2.size();}
  
  for(int i=0;i<small_size;++i)
  {
    if (s1[i] != s2[i])
    {
      if(s1[i] > s2[i]) {smaller = 0;}
      else {smaller = 1;}
    }
  }
  if(smaller == -1) // similar first letters.
  {
    if(small_size == s1.size()) {smaller = 1;}
    else {smaller = 1;}
  }
  
  if (smaller) {cout<<"YES"<<endl;}
  else {cout<<"NO"<<endl;}
  return 0;
}
