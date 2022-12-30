#include <iostream>
using namespace std;

int main()
{
    cout << "You are a secret agent breaking into a secure server room \n";
    cout << "You need to enter the correct codes to continue...\n";

    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    cout << CodeSum << endl;
    cout << CodeProduct;

    return 0;
}