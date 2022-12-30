#include <iostream>
#include <ctime>
using namespace std;

void PrintBanner()
{
    cout << " _                _             \n";
    cout << "| |              | |            \n";
    cout << "| |__   __ _  ___| | _____ _ __ \n";
    cout << "| \'_ \\ / _` |/ __| |/ / _ \\ \'__|\n";
    cout << "| | | | (_| | (__|   <  __/ |   \n";
    cout << "|_| |_|\\__,_|\\___|_|\\_\\___|_|   \n"; 
    cout << endl;     
}

void PrintIntroduction(int Difficulty)
{ 
    cout << "You are a secret agent breaking into a level "<< Difficulty;
    cout << " secure server room \nYou need to enter the correct codes to continue...\n";                         
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);
    
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    cout << "+ There are 3 number in the code \n";
    cout << "+ The codes add-up to: " << CodeSum << endl;
    cout << "+ The codes multiply to give: " << CodeProduct << endl;

    int GuessA, GuessB, GuessC;
    cin >> GuessA >> GuessB >> GuessC;
    cout << endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if((GuessSum == CodeSum) && (GuessProduct == CodeProduct))
    {
        cout << "*** Great work agent! You have downloaded the files! Keep going! *** \n\n";
        return true;
    }
    else
    {
        cout << "*** You enteder the wrong code! You need to be more careful agent! Try again ***\n\n";
        return false;
    }
}

int main()
{
    srand(time(NULL));
    
    PrintBanner();
    int LevelDifficulty = 1;
    int const MaxDifficulty = 7;

    while(LevelDifficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        cin.clear(); // Clears any errors
        cin.ignore();  // Discard the buffer  
        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }

    cout << "\n *** Nice Job agent! You got all the files! Now get out of there! ***\n";

    return 0;
}