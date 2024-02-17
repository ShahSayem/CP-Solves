#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
const int MAX = 300000+5;
int track[MAX];

int main()
{
    Shah_Sayem
    int n, m, l, r, x;
    cin>>n>>m;

    set <int> st;
    for (int i = 1; i <= n; i++){
       st.insert(i);
    }

    while (m--){
        cin>>l>>r>>x;

        auto it1 = st.lower_bound(l);       
        auto it2 = st.upper_bound(r);  

        for(auto it = it1; it != it2; it++) {
            if (x != *it)
                track[*it] = x;
        } 
        st.erase(it1, it2);
        st.insert(x);
    }

    for (int i = 1; i <= n; i++){
       cout<<track[i]<<" ";
    }
    

    return 0;
}
