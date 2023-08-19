#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

int arr[1000050];

int solve(int x)
{
    if (arr[x])
        return arr[x];
    if (x > 100){
        return arr[x] = x-10;
    }

    return arr[x] = solve(solve(x+11));
}

int main()
{
    Shah_Sayem

    int x;
    while (cin>>x){
        if (!x)
            break;

        cout<<"f91("<<x<<") = "<<solve(x)<<"\n";
    }

    return 0;
}
