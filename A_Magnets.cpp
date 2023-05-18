#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 1;
    cin>>n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(i > 0){
            if(a[i] != a[i-1]){
                count++;
            }
        }
    }
    
    cout<<count<<endl;

    return 0;
}