#include <bits/stdc++.h>
using namespace std;

vector< vector <int> > solve(vector<vector <int> > & intervals){

    vector<vector <int> > ans;

    if (intervals.size() == 0)
        return ans;

    sort(intervals.begin(), intervals.end());
    vector <int> temp = intervals[0];
    for (auto x:intervals){
        if (x[0] <= temp[1]){
            temp[1] = max(x[1], temp[1]);
        }
        else{
            ans.push_back(temp);
            temp = x;
        }
    }
    ans.push_back(temp);

    return ans;
}

int main()
{
    int n, x, y;
    cin>>n;
    vector < vector <int> > intervals(n);

    for (int i = 0; i < n; i++){
        cin>>x>>y;
        intervals[i].push_back(x);
        intervals[i].push_back(y);
    }
    

    auto ans = solve(intervals);

    for (auto x:ans){
        for (auto y:x)
            cout<<y<<" ";

        cout<<"\n";
    }
    
    return 0;
}