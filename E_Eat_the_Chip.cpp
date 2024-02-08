#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int h, w, xa, ya, xb, yb;
    cin>>h>>w>>xa>>ya>>xb>>yb;

    if (xa >= xb){
        cout<<"Draw";
        return;
    }

    int dist = xb-xa-1;
    int moveA = (dist+1)/2;
    int moveB = (dist+1)/2;
    if ((dist & 1) == 0)
        moveA++;

    int leftA = max(1, ya-moveA);
    int rightA = min(w, ya+moveA);
    int leftB = max(1, yb-moveB);
    int rightB = min(w, yb+moveB);

    if (dist & 1){ //Bob or Draw
        if (leftB <= leftA && rightB >= rightA) 
            cout<<"Bob";
        else 
            cout<<"Draw";
    }
    else { //Alice or Draw
        if (leftA <= leftB && rightA >= rightB) 
            cout<<"Alice";
        else 
            cout<<"Draw";
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
