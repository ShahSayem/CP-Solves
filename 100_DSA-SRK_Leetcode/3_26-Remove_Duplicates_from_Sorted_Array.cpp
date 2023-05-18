#include <bits/stdc++.h>
using namespace std;

int solve(vector <int> & nums){
    int i = 0;
    for (int j = 1; j < nums.size(); j++){
        if (nums[j] != nums[i]){
            i++;
            nums[i] = nums[j];
        }
    }

    return i+1;
}

int main()
{
    vector <int> v;
    int x;
    
    int i = 0;
    while (cin>>x){
        v.push_back(x);
        i++;
    }

    cout<<solve(v)<<endl;
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}