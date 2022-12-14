#include <bits/stdc++.h>
using namespace std;

int solve(vector <int> & nums){
    int count = 0;
    vector <int> v2;
    
    for (int i = 0; i < nums.size(); i++){
        if (i > 0 && (nums[i] == nums[i-1])){
            v2.push_back(i);
            count++;
        }
    }

    for (int i = 0; i < count; i++){
        nums[v2[i]] = 111;
    }
    
    sort(nums.begin(), nums.end());

    return nums.size()-count;
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