#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, m;
    cin>>n>>m;

    priority_queue <int> taskMax, timeMax;
    vector <int> tasks(n), times(m);
    for (int i = 0; i < n; i++){
        cin>>tasks[i];

        taskMax.push(tasks[i]);
    }
    
    for (int i = 0; i < m; i++){
        cin>>times[i];

        timeMax.push(times[i]);
    }

    int cnt = 0, currTime, currTask;
    while (!taskMax.empty() && !timeMax.empty()){
        currTask = taskMax.top();
        taskMax.pop();

        currTime = timeMax.top();

        //cout<<currTask<<" "<<currTime<<"\n";
        if (currTask <= currTime){
            timeMax.pop();
            cnt++;
        }
    }
    
    cout<<cnt;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
