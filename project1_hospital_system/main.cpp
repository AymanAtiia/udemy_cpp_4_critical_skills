#include<iostream>
#include<vector>

/*
I used vector because it's easier.
*/
using namespace std;

void view_choices()
{
  cout<<"Enter your choice:"<<endl;
  cout<<"1) Add new patient"<<endl;
  cout<<"2) Print all patients"<<endl;
  cout<<"3) Get next patient"<<endl;
  cout<<"4) Exit"<<endl;
}

int main()
{
  int num_specialization = 20;
  int queue_size = 0;
  vector<vector<string>> data(num_specialization,
			vector<string>(queue_size));
  while(true)
  {
    
    view_choices();
    int choice;
    cin>>choice;
    if (choice == 1)
    {
      cout<<"Enter Specialization, name, status."<<endl;
      int specilaization;
      string name;
      bool status;
      
      cin>>specilaization>>name>>status;
      string temp = name;
      if(status) {temp = temp + " urgent"; data[specilaization].insert(data[specilaization].begin(), temp);}
      else {temp = temp + " normal"; data[specilaization].push_back(temp);}
      
    }
    else if(choice == 2)
    {
    	int idx = 0;
    	for(auto sp : data)
    	{
    		if(sp.size())
    		{
    			
    			cout<<"there are "<<sp.size()<<" in specialization patient(s) "<<idx<<" : "<<endl;
    			for (auto patient : sp)
    			{
    				cout<<patient<<endl;
    			}
    			
    		}
    		++idx;
    	}
    }
    else if(choice == 3)
    {
    	cout<<"Enter specialization : ";
    	int specialization;
    	cin>>specialization;
    	if(data[specialization].size()) 
    	{
    		cout<<data[specialization][0]<<" please go with the dr."<<endl;
    		data[specialization].erase(data[specialization].begin());
    	}
    	else {cout<<"No patients at the moment. have a rest doc."<<endl;}
    }
    else if(choice == 4) {cout<<"Exiting.."<<endl; break;}
    else {cout<<"Invalid input! try again using only numbers 1, 2, 3, 4"<<endl;}
  }
  return 0;
}
