#include <bits/stdc++.h>
using namespace std;

vector <int> solve(vector <int> & digits){

    if (digits[digits.size()-1] != 9){
        digits[digits.size()-1]++;

        return digits;
    }

    int j = digits.size()-1;
    while (j > -1 && digits[j] == 9){
        digits[j] = 0;
        j--;
    }

    if (j >= 0)
        digits[j]++;
    else
        digits.insert(digits.begin(), 1);

    return digits;  
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector <int> digits;
    int x;
    while (cin>>x){
        digits.push_back(x);
    }

    vector <int> ans = solve(digits);

    for (int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }   

    return 0;
}