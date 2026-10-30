#include <iostream>
using namespace std;
long long power(long long base, int exponent) {
if (exponent == 0) {
  return 1;
    }
    return base * power(base, exponent - 1);
}
int main() {
    long long base;
    int exponent;
    cin >> base >> exponent;
    cout << power(base, exponent) << '\n';
    return 0;
}