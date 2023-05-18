#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin>>n;
    long long a[n];

    int i;
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    
    cout<<sum<<endl;

    return 0;
}