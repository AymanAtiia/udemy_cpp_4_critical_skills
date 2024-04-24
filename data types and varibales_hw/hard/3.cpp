#include<iostream>
#include <cmath>
using namespace std;

int main()
{

  int N;
  cin>>N;
  
  float m = (N/2.0);
  cout<< ((int) m)*(N+1) + (N%2)*ceil(m)<<endl;
  return 0;
}
