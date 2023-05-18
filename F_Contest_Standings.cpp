#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};


int main()
{
    int n;
    cin>>n;

    int arr[n], i = 0;
    map <int, string> mp;
    for (int i = 0; i < n; i++){
        string s;
        cin>>s;
        int p;
        cin>>p;

        arr[i] = p;
        mp[p] = s;

        //cout<<1<<"\n";
    }
    
    cout<<"Selise Coding Challenge 2023 Winners\n";
    sort(arr, arr+n);
    cout<<"Winner: "<<mp[arr[0]]<<" => "<<arr[0]<<"\n";
    cout<<"1st Runner Up: "<<mp[arr[1]]<<" => "<<arr[1]<<"\n";
    cout<<"2nd Runner Up: "<<mp[arr[2]]<<" => "<<arr[2]<<"\n";

    return 0;
}
