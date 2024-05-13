#include<iostream>

using namespace std;

int main()
{
  int recaman[200] = {0};
  int value;
  recaman[0] = 0;
  int n;
  cin>>n;
  bool already_there = false;
  
  for(int i=1;i<=n;++i) 
  {
    int last_ind = i-1;
    value = recaman[i-1] - last_ind - 1;
    for (int j=0;j<i-1;++j)
    {
      if(value == recaman[j]) {already_there = true;}
    }

    if(value>0 && already_there == false) {recaman[i] = value;}
    else {recaman[i] = recaman[i-1] + last_ind + 1;}
    already_there = false;
    
  }

  cout<<recaman[n]<<endl;
  return 0;
}
