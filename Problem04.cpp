#include <iostream>
#include <string>
using namespace std;

bool isLetterORUnder(char c)
{

    switch (c)
    {
        case 'A' ... 'Z':
        case 'a' ... 'z':
        case '_':
            return true;
        default:

            return false;
    }

}


bool isAlphaNumORUnder(char c)
{

    switch (c)
    {
        case 'A' ... 'Z':
        case 'a' ... 'z':
        case '0' ... '9':
        case '_':
            return true;
        default:
            return false;
    }
}


void identifier(string x)
{

    if (x.empty())
    {
        cout << "Not An Identifier (Empty String)" << endl;
        return;
    }


    if (!isLetterORUnder(x[0]))
    {
        cout << "Not An Identifier" << endl;
        return;
    }


    for(int i = 1 ; i < x.length(); i++)
    {
        if(!isAlphaNumORUnder(x[i]))
        {
            cout << "Not An Identifier" << endl;
            return;
        }
    }


    cout << "It's An Identifier" << endl;
}

int main()
{
    cout << "Enter a string to check if it's an identifier: ";
    string x;
    cin >> x;
    identifier(x);
    return 0;
}
