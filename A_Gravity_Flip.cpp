#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector <int> vec;

    for (int i = 0; i < n ; i++){
        int j;
        cin>>j;
        vec.push_back(j);
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < n ; i++){
        cout<<vec[i]<<" ";
    }
    
    return 0;
}