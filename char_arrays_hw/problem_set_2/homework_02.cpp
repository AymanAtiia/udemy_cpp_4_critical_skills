#include<iostream>

using namespace std;

int main()
{
  string s1, s2;
  getline(cin,s1);
  getline(cin,s2);
  
  int ind = 0;
  while(true)
  {
    // cout<<s1[ind]<< " "<<s2[ind]<<endl;
    if(s2[ind] == '\0' && s1[ind] == '\0') {cout<< "both of equal size"<<endl; break;}
    else if(s1[ind] == '\0' && s2[ind] != '\0') {cout<< "second string is bigger"<<endl; break;}
    else if(s2[ind] == '\0' && s1[ind] != '\0') {cout<< "first string is bigger"<<endl; break;}
    

    ind += 1;
  }
  return 0;
}
