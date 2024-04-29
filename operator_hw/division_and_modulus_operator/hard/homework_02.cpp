#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  
  double years = n/360.0;
  double months = (years - (int) years) *12;
  double days = n - ((int)years*360) - ((int)months*30);
  
  cout<<(int) years<<" "<< (int) months<< " " <<(int) days;
  return 0;
}
