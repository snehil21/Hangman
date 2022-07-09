#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int pointSystem(char puzzWord[], char guessWord[], int length)
{
    int j, k, l, m, flag;
    int point = 0;
    char temp;
    int chances = 10;
    int flag2;
    int chancesLeft;
    for (j = 0; j <= 10;)
    {
        flag = 0;
        cin >> temp;
        for (k = 0; k < length; k++)
        {
            if (temp == puzzWord[k])
            {
                guessWord[k] = temp;
                flag++;
            }
        }
        if (flag == 0)
        {
            j++;
        }
        // Displaying Score
        chancesLeft = chances - j;

        if (chancesLeft == 10)
        {
            system("CLS");
            cout << " _______ " << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|_______|" << endl;

            for (l = 0; l < length; l++)
            {
                cout << guessWord[l] << " ";
            }
            cout << "\n";
        }
        if (chancesLeft == 9)
        {
            system("CLS");
            cout << " _______ " << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|   _____   |" << endl;
            cout << "|                     |" << endl;
            cout << "|_______|" << endl;

            for (l = 0; l < length; l++)
            {
                cout << guessWord[l] << " ";
            }
            cout << "\n";
        }
        if (chancesLeft == 8)
        {
            system("CLS");
            cout << " _______ " << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|    |___     |" << endl;
            cout << "|                     |" << endl;
            cout << "|_______|" << endl;

            for (l = 0; l < length; l++)
            {
                cout << guessWord[l] << " ";
            }
            cout << "\n";
        }
        if (chancesLeft == 7)
        {
            system("CLS");
            cout << " _______ " << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|      __         |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|    |___     |" << endl;
            cout << "|                     |" << endl;
            cout << "|_______|" << endl;

            for (l = 0; l < length; l++)
            {
                cout << guessWord[l] << " ";
            }
            cout << "\n";
        }
        if (chancesLeft == 6)
        {
            system("CLS");
            cout << " _______ " << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|      __         |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|    |___     |" << endl;
            cout << "|                     |" << endl;
            cout << "|_______|" << endl;

            for (l = 0; l < length; l++)
            {
                cout << guessWord[l] << " ";
            }
            cout << "\n";
        }
        if (chancesLeft == 5)
        {
            system("CLS");
            cout << " _______ " << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|      __         |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |      O        |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|    |___     |" << endl;
            cout << "|                     |" << endl;
            cout << "|_______|" << endl;

            for (l = 0; l < length; l++)
            {
                cout << guessWord[l] << " ";
            }
            cout << "\n";
        }
        if (chancesLeft == 4)
        {
            system("CLS");
            cout << " _______ " << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|      __         |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |      O        |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|    |___     |" << endl;
            cout << "|                     |" << endl;
            cout << "|_______|" << endl;

            for (l = 0; l < length; l++)
            {
                cout << guessWord[l] << " ";
            }
            cout << "\n";
        }
        if (chancesLeft == 3)
        {
            system("CLS");
            cout << " _______ " << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|      __         |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |      O        |" << endl;
            cout << "|     |     /|        |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|    |___     |" << endl;
            cout << "|                     |" << endl;
            cout << "|_______|" << endl;

            for (l = 0; l < length; l++)
            {
                cout << guessWord[l] << " ";
            }
            cout << "\n";
        }
        if (chancesLeft == 2)
        {
            system("CLS");
            cout << " _______ " << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|      __         |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |      O        |" << endl;
            cout << "|     |     /|\\       |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|    |___     |" << endl;
            cout << "|                     |" << endl;
            cout << "|_______|" << endl;

            for (l = 0; l < length; l++)
            {
                cout << guessWord[l] << " ";
            }
            cout << "\n";
        }
        if (chancesLeft == 1)
        {
            system("CLS");
            cout << " _______ " << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|      __         |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |      O        |" << endl;
            cout << "|     |     /|\\       |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |     /         |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|    |___     |" << endl;
            cout << "|                     |" << endl;
            cout << "|_______|" << endl;

            for (l = 0; l < length; l++)
            {
                cout << guessWord[l] << " ";
            }
            cout << "\n";
        }

        flag2 = 0;
        for (m = 0; m < length; m++)
        {
            if (puzzWord[m] != guessWord[m])
            {
                flag2++;
            }
        }

        if (flag2 == 0)
        {
            point = chancesLeft;
            return point;
        }

        if (chancesLeft == 0)
        {
            system("CLS");
            cout << "Player 2 loses this round " << endl;
            cout << " _______ " << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|      __         |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |      O        |" << endl;
            cout << "|     |     /|\\       |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |     / \\       |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|    |___     |" << endl;
            cout << "|                     |" << endl;
            cout << "|_______|" << endl;

            cout << "The Correct Answer is \n";

            for (l = 0; l < length; l++)
            {
                cout << puzzWord[l] << " ";
            }
            cout << "\n";
        }
    }
    return point;
}

class Player
{
public:
    char name[20];
};

int main()
{
    while (1)
    {
        cout << "******************** WELCOME TO HANGMAN GAME ********************" << endl;
        Player Player1;
        Player Player2;

        cout << "Enter the name of player 1" << endl;
        cin >> Player1.name;
        cout << "Enter the name of player 2" << endl;
        cin >> Player2.name;
        int rounds;
        cout << "Enter the number of rounds\n";
        cin >> rounds;

        char puzzWord[50];
        char guessWord[50];
        char clue[50];
        int i, m = 0;
        int reset;

        int length;

        int point1 = 0;
        int point2 = 0;

        for (i = 1; i <= rounds; i++)
        {
            length = 0;
            m = 0;
            cout << "Player 1 enter the puzzle word\n";
            cin >> puzzWord;
            system("CLS");

            for (reset = 0; reset < 50; reset++)
            {
                guessWord[reset] = '_';
            }

            while (puzzWord[m] != '\0')
            {
                length++;
                m++;
            }
            cout << "enter the clue of puzzle word\n";
            cin >> clue;
            cout << "Player 2 turn to guess the puzzle word\n";
            point2 = point2 + pointSystem(puzzWord, guessWord, length);

            length = 0;
            m = 0;

            cout << "Player 2 enter the puzzle word\n";
            cin >> puzzWord;

            system("CLS");
            for (reset = 0; reset < 50; reset++)
            {
                guessWord[reset] = '_';
            }
            while (puzzWord[m] != '\0')
            {
                length++;
                m++;
            }
            cout << "enter the clue of puzzle word\n";
            cin >> clue;
            cout << "Player 1 turn to guess the puzzle word\n";
            point1 = point1 + pointSystem(puzzWord, guessWord, length);
        }

        cout << "Player 1 points " << point1 << endl;
        cout << "Player 2 points " << point2 << endl;

        if (point2 > point1)
        {
            cout << Player2.name << " wins \n";
        }
        else if (point1 > point2)
        {
            cout << Player1.name << " wins \n";
        }
        else
        {
            cout << "GAME TIED !!!\n";
        }
    }
    return 0;
}
