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

    Book(string = "Author", string = "Title", float = "Price", int = "In Store");
    ~Book();

    void addbook();
    void editentry();
    void showentry();
    void buybook();
    int lookfor();
};
