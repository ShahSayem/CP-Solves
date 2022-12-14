#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    

    int count = 0;
    while (n--)
    {
        cin>>s;
        if (s == "++X" || s == "X++") {
            count++;
        }
        else {
            count--;
        }
    }
    cout<<count;
    
    return 0;
}