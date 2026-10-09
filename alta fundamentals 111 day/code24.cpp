#include <iostream>
using namespace std;

// Function for sum
int sum(int a, int b)
{
    return a + b;
}

// Function for factorial
long long factorial(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

// Function for prime check
bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

// Function for largest of three numbers
int largest(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= a && b >= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int choice;

    while (true)
    {
        cout << "\n----- MENU -----\n";
        cout << "1. Sum of two numbers\n";
        cout << "2. Factorial\n";
        cout << "3. Prime check\n";
        cout << "4. Largest of three numbers\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;

                cout << "Sum = " << sum(a, b) << endl;
                break;
            }

            case 2:
            {
                int n;
                cout << "Enter a number: ";
                cin >> n;

                cout << "Factorial = " << factorial(n) << endl;
                break;
            }

            case 3:
            {
                int n;
                cout << "Enter a number: ";
                cin >> n;

                if (isPrime(n))
                {
                    cout << n << " is Prime" << endl;
                }
                else
                {
                    cout << n << " is Not Prime" << endl;
                }

                break;
            }

            case 4:
            {
                int a, b, c;
                cout << "Enter three numbers: ";
                cin >> a >> b >> c;

                cout << "Largest = " << largest(a, b, c) << endl;
                break;
            }

            case 5:
                cout << "Program exited." << endl;
                return 0;

            default:
                cout << "Invalid choice! Try again." << endl;
        }
    }

    return 0;
}