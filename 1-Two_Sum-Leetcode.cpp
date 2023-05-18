#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin>>n;
    vector <long long> vec;
    for (int i = 0; i < n; i++){
        int j;
        cin>>j;
        vec.push_back(j);
    }
    
    int terget;
    cin>>terget;

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            sum += vec[i] + vec[j];
        }
        
    }


    return 0;
}