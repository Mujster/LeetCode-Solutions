#include <iostream>
using namespace std;

int main() {

   int length = 0;
   char ch;
    cout << "Enter the size of the hexagon" << endl;
    cin >> length;
    for (int i = 0, k = length, l = 2 * length - 1; i < length; ++i, --k, ++l)
    {
        for (int j = 0; j < 3 * length; ++j)
        {
            if (j >= k && j <= l)
                cout <<"*"<<" ";
            else
                cout << "  ";

        }
        cout << endl;
    }

    for (int i = 0; i < length; ++i)
    {
        for (int j = 0; j < 3 * length; ++j)
            cout <<"*"<<" ";
        cout << endl;
    }

    for (int i = 0, k = 1, l = 3 * length - 2; i < length; ++i, ++k, --l)
    {
        for (int j = 0; j < 3 * length; ++j)
        {
            if (j >= k && j <= l)
                cout <<"*"<<" ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
