#include<iostream>

using namespace std;

int main()
{
  int n, x;
  cin>>n;
  x = 0;
  int num_stars, num_spaces;
  while(x<=(n-1))
  { 
    num_stars = 2*x+1;
    num_spaces = (2*n - num_stars) /2;
    while(num_spaces) {cout<<" "; --num_spaces;}
    while(num_stars) {cout<<"*"; --num_stars;}
    cout<<endl;
    ++x;
  }
  x = n-1;
  while(x>=0)
  { 
    num_stars = 2*x+1;
    num_spaces = (2*n - num_stars) /2;
    while(num_spaces) {cout<<" "; --num_spaces;}
    while(num_stars) {cout<<"*"; --num_stars;}
    cout<<endl;
    --x;
  }
  
  return 0;
}
