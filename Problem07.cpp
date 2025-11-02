#include <bits/stdc++.h>
using namespace std;

void make_Fullname(string x, string y)
{
    string fullName;

    fullName = x;
    fullName.append(" ");
    fullName.append(y);

    cout << fullName << endl;
}

int main()
{
    string x, y;
    cin >> x;
    cin.ignore();
    cin >> y;

    make_Fullname(x, y);
    return 0;
}