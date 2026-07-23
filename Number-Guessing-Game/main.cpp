#include <iostream>
#include <ctime>
using std::cin;
using std::cout;

int main()
{

    // srand(time(NULL));

    // int num1 = (rand() % 6) + 1;
    // int num2 = (rand() % 6) + 1;
    // int num3 = (rand() % 6) + 1;

    // cout << num1 << '\n' << num2 << '\n' << num3 << '\n';

    int num;
    int tries;
    int guess;

    srand(time(NULL));

    num = rand() % 100 + 1;

    for (tries = 1; tries <= 100; tries++)
    {
        cout << "Guess the number (1-100): ";
        cin >> guess;

        if (guess == num)
        {
          cout << "Correct! you guessed in " << tries << " tries\n";
          break;
        }
        
        else if(guess < num)
        {
            cout << "Higher number" << '\n';
        }
        else
        {
            cout << "Lower number" << '\n';
        }
    }
    if (guess != num)
    {
        cout << "You lost! The number was: " << num;
    }
    

    return 0;
}
