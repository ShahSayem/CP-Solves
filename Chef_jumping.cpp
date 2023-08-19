#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long n;
    cin>>n;

    if (n%3 == 0 || ((n == 0 || n == 1) || (n%2 && (n-1)%3 == 0))){
        cout<<"yes\n";
    }
    else {
        cout<<"no\n";
    }

    return 0;
}
