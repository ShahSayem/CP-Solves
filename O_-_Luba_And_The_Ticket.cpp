#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    string s;
    cin>>s;

    int arr[6] = {s[0]-'0', s[1]-'0', s[2]-'0', s[3]-'0', s[4]-'0', s[5]-'0'};
    int arr2[6] {s[0]-'0', s[1]-'0', s[2]-'0', s[3]-'0', s[4]-'0', s[5]-'0'};
    
    int cnt = INT_MAX, cnt1 = 0;
        for (int j = 0; j < 10; j++){ // 1st
            arr[0] = j;
            for (int k = 0; k < 10; k++){ // 2nd
                arr[1] = k;
                for (int x = 0; x < 10; x++){ // 3rd
                    arr[2] = x;
                    for (int y = 0; y < 10; y++){ // 4th
                        arr[3] = y;
                        for (int z = 0; z < 10; z++){ // 5th
                            arr[4] = z;
                            for (int i = 0; i < 10; i++){ // 6th
                                arr[5] = i;

                                int sum1 = arr[0]+arr[1]+arr[2];
                                int sum2 = arr[3]+arr[4]+arr[5];

                                if (sum1 == sum2){
                                    cnt1 = 0;
                                    for (int p = 0; p < 6; p++){
                                        if (arr[p] != arr2[p]){
                                        cnt1++;
                                    }
                                }
                                cnt = min(cnt, cnt1);
                            }
                        }
                    }
                }
            }
        } 
    }
    cout<<cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
}
