#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

float sum(float x, float y)
{
    return x + y;
}

int main()
{
    int a, b;
    float x, y;

    cin >> a >> b;
    cin >> x >> y;

    cout << sum(a, b) << endl;
    cout << sum(x, y);
}