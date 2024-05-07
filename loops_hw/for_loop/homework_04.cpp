#include<iostream>

using namespace std;

int main()
{
  int n;
  bool pr = true;
  cin>>n;
  
  if (n<=1) {cout<<"NO"<<endl;}
  
  else
  {
	  for(int i =2; i<n; ++i)
	    if (n%i == 0) {pr = false; break;}
	    
	  if (pr) {cout<<"YES"<<endl;}
	  else {cout<<"NO"<<endl;}
	}
	      
  return 0;
}
