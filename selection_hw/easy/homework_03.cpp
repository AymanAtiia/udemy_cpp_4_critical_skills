#include<iostream>
// embaressing solution.
using namespace std;

int main()
{
  int a, b, c;
  cin>>a>>b>>c;
  
  bool big_a = a>=100;
  bool big_b = b>=100;
  bool big_c = c>=100;
  
  if(big_a)
  {
    if (big_b)
    {
      if(big_c)
        cout<<-1<<endl;
      else
        cout<<c<<endl;
    }
    
    else
    {
      if(big_c)
        cout<<b<<endl;
      else
      {  if (b>c)
          cout<<b<<endl;
        else
          cout<<c<<endl;
      }
    }
    
  }
  else
    {
      if (big_b && big_c)
        cout<<a<<endl;
      else if(big_b && !big_c)
        if (a>c)
          cout<<a<<endl;
        else
          cout<<c<<endl;
      else if(big_c && !big_b)
        if(a>b)
          cout<<a<<endl;
        else
          cout<<b<<endl;
      else
        if (a>=b && a>=c)
          cout<<a<<endl;
        else if (b>a && b>=c)
          cout<<b<<endl;
        else
          cout<<c<<endl;
    }
  return 0;
}
