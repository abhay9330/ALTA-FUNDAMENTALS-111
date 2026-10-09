#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int index = 2;
    cout << "Read: " << arr[index] << endl;
    arr[0] = 99;
    cout << "Updated array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}