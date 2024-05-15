#include<iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int count = 0;
  int in_arr[200] = {0};

  for (int i=0;i<n;++i){cin>>in_arr[i];}
  
  for(int i=0;i<n;++i)
  {
  	for (int j=i;j<n;++j)
  	{
  		bool is_increasing = true;
  		for(int k=i; k<j;++k)
  		{
  			if(in_arr[k] > in_arr[k+1]) {is_increasing = false; break;}
  		}
  		if(is_increasing) { count += 1;}
  	}
  }
  cout<<count<<endl;
  return 0;
}
