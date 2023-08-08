#include <iostream>
using namespace std;
int main()
{

    int a;
    cin >> a;
    switch (a % 2)
    {
    case 0:
        cout << "even number" << endl;
        break;
    case 1:
        cout << "odd number" << endl;
        break;
    }
    return 0;
}