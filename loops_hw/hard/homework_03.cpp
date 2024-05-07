#include<iostream>
using namespace std;

int main()
{
  int m, n;
  int temp_1 =1, temp_2 = 1;
  cin>>m>>n;
  while(temp_1<=m)
  {
    temp_2 = 1;
    while(temp_2<=n)
    {
      cout<<temp_1<<" x "<<temp_2<<" = "<<temp_1*temp_2<<endl;
      
      ++temp_2;
    }
    ++temp_1;
  }
  return 0;
}
