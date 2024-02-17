#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector <long long> vec;
    for (int i = 0; i < vec.size(); i++){
        long long j;
        cin>>j;
        vec.push_back(j);
    }
    
    int x, ans, key;
    ans = 0;

    vector<long long>::iterator it;
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++){
        int tot = vec[i];
        x = count(vec.begin(), vec.end(), tot);
        cout<<x<<endl;
        break;
        if (x < vec[i]){
            ans += x;
            key = vec[i];
        }
        else if (x > vec[i]){
            ans += (x-vec[i]);
            key = vec[i];
        }
        while (key == vec[i]){
            i++;
        }  
    }
    cout<<ans;
}
int main()
{
    // int t;
    // cin>>t;

    // while (t--){
        solve();
        cout<<endl;     
    
    return 0;
}
    