#include <bits/stdc++.h>
using namespace std;

void find_Max_Min(int a[], int n)
{
    int minn = a[0];
    int maxx = a[0];
    for(int i=0 ; i<n; i++)
    {
        if(minn > a[i])
        {
            minn = a[i];
        }
        if(maxx < a[i])
        {
            maxx = a[i];
        }
    }

    cout << "Maximum Value : " << maxx << endl;
    cout << "Minimum Value : " << minn << endl;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }

    find_Max_Min(a, n);
    return 0;
}