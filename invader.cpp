#include <iostream>
using namespace std;

int main()
{
    cout << "You are a secret agent breaking into a secure server room \n";
    cout << "You need to enter the correct codes to continue...\n";

    const int a = 4;
    const int b = 3;
    const int c = 2;

    const int sum = a + b + c;
    const int product = a * b * c;

    cout << sum << endl;
    cout << product;

    return 0;
}