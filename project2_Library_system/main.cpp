#include<iostream>
#include <algorithm>

using namespace std;

const int max_users = 200;
const int max_books = 1000;


struct user
{
  int id{0};
  string name;
};

struct book
{
  string title {};
  int id;
  int quantity = 0;
  user users_borrowed[10] = {};
  int num_borrowed = 0;
};


void display_menu()
{
  cout<<"Library Menu:"<<endl;
  cout<<"1) Add book"<<endl;
  cout<<"2) Search book by prefix"<<endl;
  cout<<"3) Print who borrowed book by title"<<endl;
  cout<<"4) Print library by id"<<endl;
  cout<<"5) Print library by title"<<endl;
  cout<<"6) Add user"<<endl;
  cout<<"7) User Borrow book"<<endl;
  cout<<"8) User return book"<<endl;
  cout<<"9) Print users"<<endl;
  cout<<"10) Exit"<<endl;
  cout<<"Enter your menu choice [1 10]"<<endl;
}


void add_book(book books[], int &book_count)
{
  int _id, _quantity;
  string _title;
  cout<<"Please enter the id, title, quantity :"<<endl;
  cin>>_id>>_title>>_quantity;
  books[book_count].id = _id;
  books[book_count].title = _title;
  books[book_count].quantity = _quantity;
  ++book_count;
}


bool isPrefix(const std::string& prefix, const std::string& word) {
    if (prefix.size() > word.size()) return false;
    return word.compare(0, prefix.size(), prefix) == 0;
}


void search_book_by_prefix(book books[], const int book_count)
{
  cout<<"Enter the prefix :"<<endl;
  string _prefix;
  cin>>_prefix;
  int count = 0;
  bool first_time = true;
  for (int b=0;b<book_count;++b)
  {
    // cout<<books[b].title<<endl;
    if(isPrefix(_prefix, books[b].title)) {if(first_time) {cout<<"\n"<<"Books found :"<<endl;} cout<<books[b].title<<endl; ++count;}
  }
  
  if(count == 0) {cout<<"Book Not found!"<<endl;}
}


void print_who_borrowed_book_by_title(book books[], const int book_count)
{
  string _title;
  int user_id;
  cout<<"Enter the borrowed book title :"<<endl;
  cin>>_title;
  for(int i=0;i<book_count;++i)
  {
    if(books[i].title == _title)
    {
      if(books[i].num_borrowed)
      {
	      for(int u=0;u<books[i].num_borrowed;++u)
	      {
	      	cout<<books[i].users_borrowed[u].name<<endl;
	      }
      }
      
      else {cout<<"No users borrowed this book"<<endl;}
    }
  
  }
}


void print_library_id(book books[],const int book_count)
{

    book sortedBooks[book_count]; // make a copy
    std::copy(books, books + book_count, sortedBooks);
    
    // Sort the sortedBooks array
    std::sort(sortedBooks, sortedBooks + book_count, [](const book& a, const book& b) {
        return a.id < b.id;
    });
    for(int b=0;b<book_count;++b) {cout<<sortedBooks[b].id<<" "<<sortedBooks[b].title<<endl;}
}


void print_library_title(book books[],const int book_count)
{

    book sortedBooks[book_count]; // make a copy
    std::copy(books, books + book_count, sortedBooks);
    
    // Sort the sortedBooks array
    std::sort(sortedBooks, sortedBooks + book_count, [](const book& a, const book& b) {
        return a.title < b.title;
    });
    for(int b=0;b<book_count;++b) {cout<<sortedBooks[b].id<<" "<<sortedBooks[b].title<<endl;}
}

void add_user(user users[], int &user_count)
{
    cout<<"Enter the user name and id :"<<endl;
    string _name;
    int _id;
    cin>>_name>>_id;
    
    users[user_count].name = _name;
    users[user_count].id = _id;
    ++user_count;
}


void print_users(user users[], int user_count)
{
   for(int u=0;u<user_count;++u) {cout<<users[u].id<<" "<<users[u].name<<endl;}
}

void user_borrow_book(book books[], const user users[], const int book_count, const int user_count)
{
   cout<<"enter the book title : "<<endl;
   string _title;
   cin>>_title;
   cout<<"enter the user name :"<<endl;
   string _name;
   cin>>_name;
   user b_user {};
   
   for(int u=0;u<user_count;++u)
   {
   	if(users[u].name == _name) { b_user = users[u];}
   }
   		
   for(int b=0;b<book_count;++b)
   {
   	if(books[b].title==_title) {books[b].users_borrowed[books[b].num_borrowed] = b_user; ++books[b].num_borrowed;}
   }
   
   cout<<"success!"<<endl;
}



void user_return_book(book books[], const user users[], const int book_count, const int user_count)
{
   cout<<"enter the book title : "<<endl;
   string _title;
   cin>>_title;
   cout<<"enter the user name :"<<endl;
   string _name;
   cin>>_name;
   user b_user {};
   
   		
   for(int b=0;b<book_count;++b)
   {
   	if(books[b].title==_title) 
   	{
   	  for(int ub=0;ub<books[b].num_borrowed;++ub)
   	  {
   	  	if(books[b].users_borrowed[ub].name == _name) {books[b].users_borrowed[ub] = b_user; --books[b].num_borrowed;}
   	  }
   	 }
   }
   
   cout<<"success!"<<endl;
}

int main()
{
  int user_count = 0;
  int book_count = 0;
  book books[max_books] {};
  user users[max_users] {};
  
  while(true)
  {
    display_menu();
    int choice {-1};
    cin>>choice;
    if(choice == 1) {add_book(books, book_count); cout<<book_count<<endl;}
    else if(choice == 2) {search_book_by_prefix(books, book_count);}
    else if(choice == 3) {print_who_borrowed_book_by_title(books, book_count);}
    else if(choice == 4) {print_library_id(books, book_count);}
    else if(choice == 5) {print_library_title(books, book_count);}
    else if(choice == 6) {add_user(users, user_count);}
    else if(choice == 7) {user_borrow_book(books, users, book_count, user_count);}
    else if(choice == 8) {user_return_book(books, users, book_count, user_count);}
    else if(choice == 9) {print_users(users, user_count);}
    else if(choice == 10) {cout<<"Exiting..."<<endl; break;}
    else {cout<<"Invalid input... try agian"<<endl;}
    cout<<"*********************************"<<endl;
  }
  return 0;
}
