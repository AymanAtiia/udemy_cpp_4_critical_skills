#include<iostream>

using namespace std;
// assume positive input

int main()
{
  int n,x;
  int i = 0;
  double odd_sum = 0, even_sum = 0;
  int odd_n;
  cin>>n;
  
  if (n%2) {odd_n = (n/2) + 1;}
  else {odd_n = n/2;}
  
  while(i<n)
  {
    cin>>x;
    if (i%2) {odd_sum += x;}
    else {even_sum += x;}
    ++i;
  }
  cout<<odd_sum/odd_n<<endl;
  cout<<even_sum/(n-odd_n)<<endl;
  return 0;
}
