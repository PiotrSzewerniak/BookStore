#include "book.h"
#include <iostream>
#include <string.h>

using namespace std;

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

void Book::editentry() //same as addbook
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

void Book::showentry()
{
    cout<<"Author: "<<author<<endl;
    cout<<"Title: "<<title<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"Amount in store: "<<inStore<<endl;
}

void Book::buybook()
{
    int quantity;
    cout<<"Enter how many books you want to buy"<<endl;
    cin>>quantity;

    if(quantity<=inStore)
    {
        cout<<"You have bought "<<quantity<<" book(s) for "<<price * quantity<<endl;
        inStore -= quantity;
    }

    else
        cout<<"Not enough copies in store. We have "<<inStore<<" copies of selected book right now"<<endl;
}

int Book::lookfor(string bauthor, string btitle)
{
    if(bauthor.compare(author) == 0 && btitle.compare(title) == 0)
        return 1;

    else
        return 0;
}




