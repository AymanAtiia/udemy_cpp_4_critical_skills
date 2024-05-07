#include<iostream>
using namespace std;


int main()
{
  int n;
  cin>>n;
  string s;
  while(n>0)
  {
    cin>>s;
    if(s.size() >2) {--n; continue;}
    else
    {
      if(s == "no" || s == "No" || s == "nO" || s == "NO" || s == "on" || s == "On" || s == "NO" || s == "oN")
        cout<<s<<endl;
        --n;
    }
    
  }
  return 0;
}
