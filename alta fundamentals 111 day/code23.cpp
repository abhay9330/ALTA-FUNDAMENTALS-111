#include <iostream>
using namespace std;
void divideNumbers(int a, int b, int &quotient, int &remainder) {
    quotient = a / b;
    remainder = a % b;
}
int main() {
    int a, b;
    int quotient, remainder;

    cout << "Enter two integers: ";
    cin >> a >> b;
    divideNumbers(a, b, quotient, remainder);

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder << endl;

}