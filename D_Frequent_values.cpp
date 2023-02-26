#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000+5;
int freq[MAX];

struct  freqI{
    int frequency, val;
};

void solve (int n, int q)
{
    int sz = sqrt(n)+1;
    int arr[n];
    freqI SQ[sz];
    for (int i = 0; i < n; i++){
        cin>>arr[i];

        if (arr[i] < 0){
            arr[i] = abs(arr[i])+100000;
        }
        freq[arr[i]]++;
    }

    for (int i = 0; i < sz; i++){
        SQ[i].frequency = 0;
    }

    for (int i = 0; i < n; i++){
        SQ[i/sz].frequency = max(SQ[i/sz].frequency, freq[arr[i]]);
    }

    int l, r, mn = INT_MAX;
    while (q--){
        cin>>l>>r;
        l--, r--;

        for (int i = l; i <= r;){
            if ((i%sz == 0) && (i+sz-1 <= r)){
                mn = min(SQ[i/sz], mn);

                i += sz;
            }
            else {
                mn = min(arr[i], mn);
                i++;
            }
        } 

        cout<<mn<<"\n";   

        mn = INT_MAX;
    }
}

int main()
{
    int n, q;
    while (cin>>n){
        if (n){
            cin>>q;
            solve(n, q);
        }
    }
          
    return 0;
}
