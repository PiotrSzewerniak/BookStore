#include "book.h"
#include <iostream>
#include <string.h>

using namespace std;

void Book::addbook()
{
    cout<<"Enter author"<<endl;
    getline(cin, author);
    cout<<"Enter title"<<endl;
    getline(cin, title);
    cout<<"Enter price"<<endl;
    cin>>price;
    cout<<"Enter amount in store"<<endl;
    cin>>inStore;
}

Book::Book(string a, string t, float p, int s)
{
    author = a;
    title = t;
    price = p;
    inStore = s;
}

Book::~Book()
{

}

void Book::showentry()
{
    cout<<"Author: "<<author<<endl;
    cout<<"Title: "<<title<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"Amount in store: "<<inStore<<endl;
}
