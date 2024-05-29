#include<iostream>

using namespace std;
/*
Problem: Read a very long string of digits (at least 6 digits), and add 5555 to it.
*/
int main()
{
  string s;
  getline(cin,s);
  // string result = s;
  int print_ind = 50;
  char result[print_ind+1];
  int rem = 0;
  int count = 0;
  int num = 0;
  
  for(int i=(int)s.size()-1; i>=0;--i)
  {
  	num = s[i] - '0' + rem;
  	if(count<4) { num += 5 ; ++count;}
  	result[print_ind] = (char) (num%10 + '0');
  	rem = num/10;
  	--print_ind;
  	if(i == 0 && count <4) 
  	{ 
  	while(count<4) 
  	{
  	 num = '5' - '0' + rem;
  	 result[print_ind] = (char) (num%10 + '0');
  	 rem = rem/10;
  	 --print_ind; 
  	 ++count; 
  	}
  	}
  	if(i == 0 && rem) {result[print_ind] = (char) (rem + '0');--print_ind;}
  	
  }
  

  for(int i=print_ind+1;i<51;++i) 
  { 
    cout<<result[i];
  }
 
  cout<<endl;
  return 0;
}
