#include <iostream>
using namespace std;

void PrintIntroduction()
{ 
    cout << " _                _             \n";
    cout << "| |              | |            \n";
    cout << "| |__   __ _  ___| | _____ _ __ \n";
    cout << "| \'_ \\ / _` |/ __| |/ / _ \\ \'__|\n";
    cout << "| | | | (_| | (__|   <  __/ |   \n";
    cout << "|_| |_|\\__,_|\\___|_|\\_\\___|_|   \n"; 
    cout << endl;     
    cout << "You are a secret agent breaking into a secure server room \n";
    cout << "You need to enter the correct codes to continue...\n";                         
}

bool PlayGame()
{
    PrintIntroduction();
    
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    cout << "+ There are 3 number in the code \n";
    cout << "+ The codes add-up to: " << CodeSum << endl;
    cout << "+ The codes multiply to give: " << CodeProduct << endl;

    int GuessA, GuessB, GuessC;
    cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if((GuessSum == CodeSum) && (GuessProduct == CodeProduct))
    {
        cout << "You Win!\n\n";
        return true;
    }
    else
    {
        cout << "You Lose!\n\n";
        return false;
    }
}

int main()
{
    while(true)
    {
        bool bLevelComplete = PlayGame();
        cin.clear(); // Clears any errors
        cin.ignore();  // Discard the buffer  
    }

    return 0;
}