#include<iostream>
using namespace std;

void display_menu()
{
  cout<<"Library Menu:"<<endl;
  cout<<"1) Add book"<<endl;
  cout<<"2) Search book by prefix"<<endl;
  cout<<"3) Print who borrowed book by name"<<endl;
  cout<<"4) Print library by id"<<endl;
  cout<<"5) Print library by name"<<endl;
  cout<<"6) Add user"<<endl;
  cout<<"7) User Borrow book"<<endl;
  cout<<"8) User return book"<<endl;
  cout<<"9) Print users"<<endl;
  cout<<"10) Exit"<<endl;
  cout<<"Enter your menu choice [1 10]"<<endl;
}
int main()
{
  while(true)
  {
    display_menu();
    int choice {-1};
    cin>>choice;
    if(choice == 1) {}
    else if(choice == 2) {}
    else if(choice == 3) {}
    else if(choice == 4) {}
    else if(choice == 5) {}
    else if(choice == 6) {}
    else if(choice == 7) {}
    else if(choice == 8) {}
    else if(choice == 9) {}
    else if(choice == 10) {cout<<"Exiting..."<<endl; break;}
    else {cout<<"Invalid input... try agian"<<endl;}
  }
  return 0;
}
