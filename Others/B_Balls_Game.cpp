#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const int MAX = 10000000+5;
int ans = 0;

void srink(vector <int> &c)
{
    int cnt = 0, start = -1, end = -1, n = c.size();
    for (int i = 1; i < n; i++){
        if (!cnt && c[i] == c[i-1]){
            cnt++;
            start = i;
        }
        else if (cnt && c[i] == c[i-1]){
            cnt++;
        }
        else if (cnt && c[i] != c[i-1]){
            end = i-1;

            if (cnt > 2){
                cnt;

                ans += cnt;

                cnt = 0;
            }
        }
    }
}
int main()
{
    Shah_Sayem

    int n, k, x;
    cin>>n>>k>>x;
    
    vector <int> c(n);
    unordered_multiset <int> st;
    for (int i = 0; i < n; i++){
        cin>>c[i];
        st.insert(c[i]);
    }

    vector <int> temp;
    int cnt = 0, start = -1, end = -1, n = c.size();
    for (int i = 0; i < n; i++){
        if (!cnt && c[i] == x){
            cnt++;
            start = i;
        }
        else if (cnt && c[i] == x){
            cnt++;
        }
        else if (cnt && c[i] != x){
            end = i-1;

            if (cnt == 2){
                cnt++;
            }
        }
    }    
    ans += cnt;

    for (int i = 0; i < start; i++){
        temp.push_back(c[i]);
    }
    for (int i = end+1; i < n; i++){
        temp.push_back(c[i]);
    }
    

    return 0;
}
