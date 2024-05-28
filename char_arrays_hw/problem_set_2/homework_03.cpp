#include<iostream>

using namespace std;

int main()
{
  string s;
  getline(cin,s);
  // string result = s;
  int print_ind = 50;
  char result[print_ind+1];
  int num_fives = 4;
  int rem = 0;
  int ind = (int)s.size()-1;
  
  while(num_fives)
  {
    int num = s[ind] - '0' + 5 + rem;
    result[print_ind] = (char) num%10 + '0';
    rem = num/10;
    cout<<num;
    --ind;
    --num_fives;
    if(!num_fives && rem) {result[print_ind-1] = (char) (rem + s[ind-1] - '0');break;}
    --print_ind;
  }
  /*
  for(int i=(int)s.size()-1;i>=0;--i)
  {
    if(num_fives == 0) {break;}
    int num = s[i] - '0' + 5 + rem;
    result[i] = (char) num%10 + '0';
    rem = num/10;
    --num_fives;
    // result[i] = (char) num + '0';
    //cout<<num;
  }
  */
  for(int i=print_ind;;++i) 
  {
    if(!(result[i] >= '0' && result[i] <= '9')) {break;}
    cout<<result[i];
  }
  cout<<endl;
  return 0;
}
