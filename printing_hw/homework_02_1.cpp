#include<iostream>
using namespace std;

int main()
{
	for(int i=1; i<10;i+=2) {cout<<string((9-i)/2,' ')<<string(i,'*')<<endl;}
	for(int i=7; i>0;i-=2) {cout<<string((9-i)/2,' ')<<string(i,'*')<<endl;}
	

	return 0;
}
