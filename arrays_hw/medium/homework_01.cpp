#include<iostream>

using namespace std;
// didn't stick to the constrains
int main()
{
  int n;
  int in_arr[200] = {0};
  cin>>n;


  for (int i=0;i<n;++i) {cin>>in_arr[i];}
  
  
  for(int i=0;i<n;++i)
  {
    for (int j=i+1;j<n;++j)
    {
      if(in_arr[i]>in_arr[j])
      {
	 int temp = in_arr[i];
	 in_arr[i] = in_arr[j];
	 in_arr[j] = temp;
      }
    }
  }

  cout<<in_arr[0]<<" "<<in_arr[1]<<" "<<in_arr[2]<<endl;
  return 0;
}
