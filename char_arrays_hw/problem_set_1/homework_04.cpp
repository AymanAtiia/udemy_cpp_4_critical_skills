#include<iostream>

using namespace std;

int main()
{
  string s;
  getline(cin,s);
  string original = "ABCDEFG";
  bool is_subseq = false;
  int count = 0;
  for(int i=0; i<s.size();++i)
  {
  	int last_ind = 0;
  	for(int j=0; j<original.size();++j)
  	{
  		if(s[i] == original[j] && last_ind<=j) 
  		{
  		  count += 1; 
  		  last_ind=j;
  		}
  		
  		
  	}
  	if(count ==s.size()) { is_subseq = true;}
  }

  if(is_subseq) {cout<<"YES"<<endl;}
  else {cout<<"NO"<<endl;}
  return 0;
}
