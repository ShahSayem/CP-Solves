#include<bits/stdc++.h>
using namespace  std;

int main()
{
    int n, m;
    cin>>n>>m;
    
    vector <int> vec;

    for (int i = 0; i < m; i++){
        int j;
        cin>>j;
        vec.push_back(j);
    }
    sort(vec.begin(), vec.end());

    int c = 0, c_min = vec[n-1]-vec[0];
    for (int i = 1; i <= m-n; i++){
        c = vec[i+n-1]-vec[i];
        if(c < c_min){
            c_min = c;
        }
    }
    cout<<c_min<<endl;

    return 0;
}
