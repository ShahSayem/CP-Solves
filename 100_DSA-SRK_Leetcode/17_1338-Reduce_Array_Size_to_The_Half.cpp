#include <bits/stdc++.h>
using namespace std;

int solve(vector <int> & arr){

    int ans = 0, sum = 0;
    map <int, int> mp;

    for (int i = 0; i < arr.size(); i++)
        mp[arr[i]]++;

    vector <int> v;
    for (auto x:mp)
        v.push_back(x.second); 

    sort(v.rbegin(), v.rend());

    int i = 0;
    while (sum < arr.size()/2){
        sum += v[i];
        ans++, i++;
    }

    return ans;
}

int main()
{
    vector <int> arr;
    int x;

    while (cin>>x) {
        arr.push_back(x);
    }

    int ans = solve(arr);

    cout<<ans<<"\n";
    
    return 0;
}