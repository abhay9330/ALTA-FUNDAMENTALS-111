#include <iostream>
using namespace std;
void change(int &x)
{
    x = x + 10;
}
void changeValue(int x)
{
    x = x + 10;
}
int main()
{
    int a, b;

    cin >> a >> b;
    change(a);
    changeValue(b);
    cout << "After reference: " << a << endl;
    cout << "After pass by value: " << b << endl;
    return 0;
}