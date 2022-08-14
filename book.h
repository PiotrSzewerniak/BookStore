#include <vector>

using namespace std;

class Book
{
    private:

    vector<char> *author = new vector<char>(30);
    vector<char> *title = new vector<char>(30);
    float price;
    int inStore;

    public:

    void addbook();
    void editentry();
    void showentry();
    void buybook();
    int lookfor(vector<char> v1, vector<char> v2);
};
