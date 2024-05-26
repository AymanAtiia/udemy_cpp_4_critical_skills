#include<iostream>

using namespace std;

int main()
{
  string s;
  getline(cin,s);
  char last_letter;
  for(int i=0;i<s.size();++i)
  {
  
    if(i == 0 ){ last_letter = s[0];}
    
    if(s[i] != last_letter)
    {
      cout<<" ";
    }
    cout<< s[i];
    last_letter = s[i];
  }
  cout<<endl;
  return 0;
}
