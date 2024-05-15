#include<iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int max_count = 0;
  int in_arr[200] = {0};
  int count = 0;
  for (int i=0;i<n;++i){cin>>in_arr[i];}
  
  for(int i=0;i<n;++i)
  {
  	for (int j=i;j<n;++j)
  	{
  		int ones = 0;
  		int zeros = 0;
  		count = 0;
  		for(int k=i; k<j;++k)
  		{
  			if(in_arr[k] == 1) {ones += 1;}
  			else if(in_arr[k] == 0) {zeros += 1;}
  		}
  		if(ones == zeros) { count += 2*ones;}
  		if (count>max_count) {max_count = count;}
  		
  	}
  }
  cout<<max_count<<endl;
  return 0;
}
