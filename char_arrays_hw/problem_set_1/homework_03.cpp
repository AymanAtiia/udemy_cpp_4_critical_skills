#include<iostream>

using namespace std;
/*
this approach works also when changing the original string into something that may contains the substring multiple times (multiple occurance)
*/
int main()
{
  string s;
  getline(cin,s);
  string original = "ABCDEFG";
  bool is_subset = false;
   
  for(int i=0;i<original.size();++i)
  {
  	if(original[i] == s[0])
  	{
  		int count = 0;
  		for (int j=0;j<s.size();++j)
  		{
  			if((i+j)<original.size())
  			 if(s[j] == original[i+j]) 
  			 {
  			 count +=1;
  			 if (count == s.size()) {is_subset = true;}
  			 }
  			 else {break;}
  		}
  	}
  }

  if(is_subset) {cout<<"YES"<<endl;}
  else {cout<<"NO"<<endl;}
  return 0;
}
