#include<iostream>

using namespace std;

int main()
{
  int s1, e1, s2, e2;
  cin>>s1>>e1>>s2>>e2;
  int int_s, int_e;
  
  if (s2>e1 || s1>e2) {cout<<-1<<endl;}
  else
  {
    if (s1>s2) {int_s = s1;}
    else {int_s = s2;}
    
    if(e1>e2) {int_e = e2;}
    else {int_e = e1;}
    
    cout<<int_s<<" "<<int_e<<endl;
    }

  return 0;
}
