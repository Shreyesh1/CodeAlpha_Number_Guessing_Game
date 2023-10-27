#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    while (1)
    {
        int level = 0;
        int Option;
        cout << "Choose the difficulty level" << endl;
        cout << "1. Easy" << endl
             << "2. Easy, with three Life ❤️❤️❤️" << endl
             << "3. Medium" << endl
             << "4. Medium, with three Life ❤️❤️❤️" << endl
             << "5. Hard" << endl
             << "6. Hard, with three Life ❤️❤️❤️" << endl
             << "7. Hard, but 'JARVIS' will help🙌  you." << endl
             << "8. Exit" << endl
             << endl;
        cin >> level;

        switch (level)
        {
        case 1:
        {
            int Random_Num, User_Num;
            int Decision = 0;
            int round = 1;

            while (1)
            {
                cout << "'EASY' Mode ON" << endl;
                cout << "Guess the Number (1-10): ";
                cin >> User_Num;
                srand((unsigned int)time(NULL));
                Random_Num = rand() % 10 + 1;
                if (Random_Num == User_Num)
                {

                    cout << "🥳Congrats!!🎉 You guessed it 'RIGHT👍'" << endl
                         << endl
                         << endl;
                }
                else
                {
                    cout << "Oh noooo😶, that was 'WRONG❌'" << endl
                         << "The Number was " << Random_Num << endl
                         << endl
                         << endl;
                }
                cout << "Wanna try one more time!!" << endl
                     << "Type(0/1): "
                     << "'1' for Yes , "
                     << "'0' to Exit" << endl;
                cin >> Decision;
                if (Decision == 0)
                {
                    break;
                }
                else
                {
                    round++;
                    system("cls");
                }

                cout << "Press 'ENTER' to start" << endl
                     << endl;
                getch();
                system("cls");
            }
            break;
        }
        case 2:
        {

            int Random_Num, User_Num;
            int Lives = 1;

            cout << "'JARVIS' gave you three lives (Easy Mode)" << endl;
            cout << "Guess the Number(1-10): ";
            cin >> User_Num;
            srand((unsigned int)time(NULL));
            Random_Num = rand() % 10 + 1;
            do
            {
                if (User_Num < Random_Num)
                {
                    cout << "Guess Higher!!" << endl;
                }
                else if (User_Num > Random_Num)
                {
                    cout << "Guess Lower!!" << endl;
                }
                if (User_Num == Random_Num)
                {
                    cout << "You won✌!!" << endl
                         << "Press any key to Exit" << endl;
                    getch();
                    break;
                }

                if (Lives == 3)
                {
                    cout << "😩You Lost😕!!" << endl
                         << "The Number was " << Random_Num << endl
                         << "Press any key to Exit" << endl;
                    getch();
                    break;
                }
                cout << "Guess it again: ";
                cin >> User_Num;
                Lives++;
            } while (1);
            break;
        }
        case 3:
        {

            int Random_Num, User_Num;
            int Decision = 0;

            while (1)
            {
                cout << "'MEDIUM' Mode ON" << endl;
                cout << "Guess the Number (1-100): ";
                cin >> User_Num;
                srand((unsigned int)time(NULL));
                Random_Num = rand() % 100 + 1;
                if (Random_Num == User_Num)
                {

                    cout << "🥳Congrats!!🎉 You guessed it 'RIGHT👍'" << endl
                         << endl
                         << endl;
                }
                else
                {
                    cout << "Oh noooo😶, that was 'WRONG❌'" << endl
                         << "The Number was " << Random_Num << endl
                         << endl
                         << endl;
                }
                cout << "Wanna try one more time!!" << endl
                     << "Type(0/1): "
                     << "'1' for Yes , "
                     << "'0' to Exit" << endl;
                cin >> Decision;
                if (Decision == 0)
                {
                    break;
                }
                else
                {
                    system("cls");
                }

                cout << "Press 'ENTER' to start" << endl
                     << endl;
                getch();
                system("cls");
            }
            break;
        }
        case 4:
        {

            int Random_Num, User_Num;
            int Lives = 1;

            cout << "'JARVIS' gave you three lives (Medium Mode)" << endl;
            cout << "Guess the Number(1-100): ";
            cin >> User_Num;
            srand((unsigned int)time(NULL));
            Random_Num = rand() % 100 + 1;
            do
            {
                if (User_Num < Random_Num)
                {
                    cout << "Guess Higher!!" << endl;
                }
                else if (User_Num > Random_Num)
                {
                    cout << "Guess Lower!!" << endl;
                }
                else if (User_Num == Random_Num)
                {
                    cout << "You won✌!!" << endl
                         << "Press any key to Exit" << endl;
                    getch();
                    break;
                }


                if (Lives == 3)
                {
                    cout << "😩You Lost😕!!" << endl
                         << "The Number was " << Random_Num << endl
                         << "Press any key to Exit" << endl;
                    getch();
                    break;
                }
                                cout << "Guess it again: ";
                cin >> User_Num;
                Lives++;
            } while (1);
            break;
        }
        case 5:
        {

            int Random_Num, User_Num;
            int Decision = 0;

            while (1)
            {
                cout << "'HARD' Mode ON" << endl;
                cout << "Guess the Number (1-1000): ";
                cin >> User_Num;
                srand((unsigned int)time(NULL));
                Random_Num = rand() % 1000 + 1;
                if (Random_Num == User_Num)
                {

                    cout << "🥳Congrats!!🎉 You guessed it 'RIGHT👍'" << endl
                         << endl
                         << endl;
                }
                else
                {
                    cout << "Oh noooo😶, that was 'WRONG❌'" << endl
                         << "The Number was " << Random_Num << endl
                         << endl
                         << endl;
                }
                cout << "Wanna try one more time!!" << endl
                     << "Type(0/1): "
                     << "'1' for Yes , "
                     << "'0' to Exit" << endl;
                cin >> Decision;
                if (Decision == 0)
                {
                    break;
                }
                else
                {

                    system("cls");
                }

                cout << "Press 'ENTER' to start" << endl
                     << endl;
                getch();
                system("cls");
            }
            break;
        }
        case 7:
        {

            int Random_Num, User_Num;

            cout << "'JARVIS' is with you (You will definitely 'WIN')" << endl;
            cout << "Guess the Number (1-1000): ";
            cin >> User_Num;
            srand((unsigned int)time(NULL));
            Random_Num = rand() % 1000 + 1;
            do
            {
                if (User_Num < Random_Num)
                {
                    cout << "Guess Higher!!" << endl
                         << endl;
                    cin >> User_Num;
                }
                else if (User_Num > Random_Num)
                {
                    cout << "Guess Lower!!" << endl
                         << endl;
                    cin >> User_Num;
                }
                if (User_Num == Random_Num)
                {
                    cout << "You won!!" << endl
                         << "Press any key to Exit" << endl
                         << endl;
                    getch();
                    break;
                }
            } while (1);
            break;
        }
        case 6:
        {

            int Random_Num, User_Num;
            int Lives = 1;

            cout << "'JARVIS' gave you three lives" << endl;
            cout << "Guess the Number(1-1000): ";
            cin >> User_Num;
            srand((unsigned int)time(NULL));
            Random_Num = rand() % 1000 + 1;
            do
            {
                if (User_Num < Random_Num)
                {
                    cout << "Guess Higher!!" << endl;
                }
                else if (User_Num > Random_Num)
                {
                    cout << "Guess Lower!!" << endl;
                }
                else if (User_Num == Random_Num)
                {
                    cout << "You won✌!!" << endl
                         << "Press any key to Exit" << endl;
                    getch();
                    break;
                }


                if (Lives == 3)
                {
                    cout << "😩You Lost😕!!" << endl
                         << "The Number was " << Random_Num << endl
                         << "Press any key to Exit" << endl;
                    getch();
                    break;
                }
                                cout << "Guess it again: ";
                cin >> User_Num;
                Lives++;
            } while (1);

            break;
        }
        case 8:
        {
            break;
        }
        default:
        {
            cout << "  'Invalid Option'" << endl
                 << endl
                 << "Press any key to Exit" << endl;
            getch();

            break;
        }
        }
        cout << "To change Difficulty Level. Press '1'" << endl
             << "To Exit. Press '0'" << endl;
        cin >> Option;
        if (Option)
            continue;
        else
            break;
    }
    return 0;
}
