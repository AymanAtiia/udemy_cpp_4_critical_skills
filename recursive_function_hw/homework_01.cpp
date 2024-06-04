#include<iostream>
/*
Implement 3n+1 function to compute the length of the sequence
int length_3n_plus_1(int n)
E.g. length_3n_plus_1(6) ⇒ 9
*/
using namespace std;
int len_sequence(int n)
{
  if(n == 1) {return 1;}
  
  if(n%2 == 0) {return (1+len_sequence(n/2));}
  
  return (1+len_sequence(3*n+1));
}
int main()
{
  int len = len_sequence(7);
  cout<<len<<endl;
  return 0;
}
