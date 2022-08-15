#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "book.h"

using namespace std;


int main()
{
    Book *b[30];
    int i = 0, j = 0, select = 0;
    string inputAuthor, inputTitle;

    while(true)
    {
        cout<<"MENU"<<endl;
        cout<<"1. Add new book"<<endl;
        cout<<"2. Edit entry"<<endl;
        cout<<"3. Search for specific book"<<endl;
        cout<<"4. Buy selected book"<<endl;
        cout<<"5. Exit"<<endl;

        cin>>select;

        switch(select)
        {
        case 1:
            b[i] = new Book;
            b[i]->addbook();
            i++;
            break;

        case 2:
            cout<<"Enter author"<<endl;
            cin.ignore();
            getline(cin, inputAuthor);
            cout<<"Enter title"<<endl;
            cin.ignore();
            getline(cin, inputTitle);

            for(j=0;j<i;j++)
            {
                if(b[j]->lookfor(inputAuthor, inputTitle))
                {
                    cout<<"Book you are looking for exists"<<endl;
                    b[j]->editentry();
                    break;
                }
            }

            if(j==i)
                cout<<"We do not have book you are looking for"<<endl;
            break;

        case 3:
            cout<<"Enter author"<<endl;
            cin.ignore();
            getline(cin, inputAuthor);
            cout<<"Enter title"<<endl;
            cin.ignore();
            getline(cin, inputTitle);

            for(j=0;j<i;j++)
            {
                if(b[j]->lookfor(inputAuthor, inputTitle))
                {
                    cout<<"Book you are looking for exists"<<endl;
                    b[j]->showentry();
                    break;
                }
            }

            if(j==i)
                cout<<"We do not have book you are looking for"<<endl;
            break;

        case 4:
            cout<<"Enter author"<<endl;
            cin.ignore();
            getline(cin, inputAuthor);
            cout<<"Enter title"<<endl;
            cin.ignore();
            getline(cin, inputTitle);

            for(j=0;j<i;j++)
            {
                if(b[j]->lookfor(inputAuthor, inputTitle))
                {
                    cout<<"Book you are looking for exists"<<endl;
                    b[j]->buybook();
                    break;
                }
            }

            if(j==i)
                cout<<"We do not have book you are looking for"<<endl;
            break;

        case 5:
            exit(0);

        default:
            cout<<"You have selected wrong number. Pick from 1 to 5 based on what you want to do"<<endl;


        }
    }

    return 0;
}
