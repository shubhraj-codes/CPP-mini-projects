#include <iostream>
#include <ctime>

using namespace std;

char userinput();
char computerinput();
void showchoice(char choice);
void chooseWinner(char player, char computer);

int main()
{

    char player;
    char computer;

    player = userinput();

    cout << "Your choice: ";
    showchoice(player);

    computer = computerinput();
    cout << "Computer's choice: ";
    showchoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char userinput()
{
    char player;
    cout << "Rock-Paper-Scissors Game\n";

    do
    {
        cout << "Choose one of the following\n";
        cout << "r for Rock\n";
        cout << "p for Paper\n";
        cout << "s for Scissors\n";
        cin >> player;

    } while (player != 'r' && player != 's' && player != 'p');
    return player;
}

void showchoice(char choice)
{
    switch (choice)
    {
    case 'r':
        cout << "Rock\n";
        break;
    case 'p':
        cout << "Paper\n";
        break;
    case 's':
        cout << "Scissors\n";
        // default:
        // cout << "Choose from the choice given\n";
        break;
    }
}

char computerinput()
{
    srand(time(NULL));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }
}

void chooseWinner(char player, char computer)
{

    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            cout << "It's a Tie";
        }
        else if (computer == 'p')
        {
            cout << "You loose";
        }
        else
        {
            cout << "You win";
        }
        break;
    case 'p':
        if (computer == 'p')
        {
            cout << "It's a Tie";
        }
        else if (computer == 's')
        {
            cout << "You loose";
        }
        else
        {
            cout << "You win";
        }
        break;
    case 's':
        if (computer == 's')
        {
            cout << "It's a Tie";
        }
        else if (computer == 'r')
        {
            cout << "You loose";
        }
        else
        {
            cout << "You win";
        }
        break;
    }
}
