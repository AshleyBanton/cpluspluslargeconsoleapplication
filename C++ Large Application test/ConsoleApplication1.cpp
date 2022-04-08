// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool theloop = true;

    string confirm;
    string option;

    while (theloop)
    {
        cout << "Welcome to a large c++ Application test. Press enter to start. REMEMBER: THIS LOOPS\n";
        cout << "1: print some bool values.\n";
        cout << "2: Show character length of a word.\n";
        cout << "3: Concatenate a full name.\n\n";
        cout << "press A and enter to start.\n";
        cin >> option;

        if (option == "a") 
        {
            bool a = false;
            bool b = true;

            cout << "Bool a is false, and bool b is true.\n";
            cout << "Bool a: " << a << "\n";
            cout << "Bool b: " << b << "\n\n";

            string word;
            cout << "Type a word in. and the console will count how many characters it has.\n";
            cin >> word;
            cout << "Your word has: " << word.length() << " characters. " << "your word was: " << word <<"\n]\n";

            string voornaam;
            string achternaam;
            string fullname;

            cout << "The next thing we will do is that we will concatenate a full name. Type in the first name: \n";
            cin >> voornaam;
            cout << "Great, now type in the last name of your character\n";
            cin >> achternaam;
            fullname = voornaam +" "+ achternaam;
            cout << "the name of your character is:" << fullname <<"\n\n";

        }

    }
}

//IGNORE THIS CRAP (Again lol)

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
