#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int sum = 0;
    vector <int> vec;
    for (int i = 0; i < n; i++){
        int j;
        cin>>j;
        vec.push_back(j);
    }
    sort(vec.begin(), vec.end());

    for (int i = 0; i < m; i++){
        if(vec[i] < 0){
            sum += vec[i];
        }
        else{
            break;
        }
    }
    cout<<sum*-1;

    return 0;
}
