#include<iostream>
using namespace std;

int main()
{
	for(int i=1; i<10;i+=2) {cout<<string((17-i)/2,' ')<<string(i,'*')<<endl;}
	/*
	cout<<"        *        "<<endl;
	cout<<"      * * *      "<<endl;
	cout<<"    * * * * *    "<<endl;
	cout<<"  * * * * * * *  "<<endl;
	cout<<"* * * * * * * * *"<<endl;
	*/
	return 0;
}
