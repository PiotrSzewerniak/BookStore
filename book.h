#include <string>

using namespace std;

class Book
{
    private:

    string author;
    string title;
    float price;
    int inStore;

    public:

    Book(string = "Author", string = "Title", float = 100, int = 1);
    ~Book();

    void addbook();
    void editentry();
    void showentry();
    void buybook();
    int lookfor(string, string);
};
