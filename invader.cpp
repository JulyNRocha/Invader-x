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

    cout << "There are 3 number in the code \n";
    cout << "The codes add-up to: " << CodeSum << endl;
    cout << "The codes multiply to give: " << CodeProduct << endl;

    int GuessA, GuessB, GuessC;
    cin >> GuessA;
    cin >> GuessB;
    cin >> GuessC;
    cout << "You Enterd: " << GuessA << " " << GuessB << " " << GuessC; 

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    return 0;
}