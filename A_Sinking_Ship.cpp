#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n;
    cin>>n;

    string name, title, captain;
    vector <string> middle, last;
    bool check;

    while (n--){
        cin>>name>>title;

        if (title == "rat")
            cout<<name<<"\n";
        else if (title == "woman" || title == "child")
            middle.push_back(name);
        else if(title == "man")
            last.push_back(name);
        else {
            check = true;
            captain = name;
        }
    }

    for (auto x:middle){
        cout<<x<<"\n";
    }
    for (auto x:last){
        cout<<x<<"\n";
    }
    
    if (check)
        cout<<captain<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
} 