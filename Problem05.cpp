#include <bits/stdc++.h>
using namespace std;

void summation(int a[], int n)
{
    int sum = 0;

    for(int i=0; i<n ; i++)
    {
        cin >> a[i];
        sum +=a[i];
    }

    cout << "Average: " << (double)sum/n;
}
int main()
{
    int n;
    cin >> n;
    int a[n];

    summation(a, n);
    return 0;
}