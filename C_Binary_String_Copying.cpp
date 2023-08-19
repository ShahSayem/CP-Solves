#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int n, m;
    cin>>n>>m;

    string str;
    cin>>str;
    int zero = -1, one = -1;
    vector <int> prev0(n), prev1(n), next0(n), next1(n), preSum(n, 0);
    preSum[0] += (str[0]-'0');
    for (int i = 1; i < n; i++){
        preSum[i] = preSum[i-1]+(str[i]-'0');
    }

    for (int i = 0; i < n; i++){
        prev0[i] = zero;
        prev1[i] = one;

        if(str[i] == '0')
            zero = i;
        else 
            one = i;
    }

    zero = -1, one = -1;
    for (int i = n-1; i >= 0; i--){
        next0[i] = zero;
        next1[i] = one;

        if(str[i] == '0')
            zero = i;
        else 
            one = i;
    }
    

    int l, r, f, s, curr1, curr0,  currLen;
    char x, y;
    set < pair <int, int> > st;
    while (m--){
        cin>>l>>r;
        l--, r--;

        currLen = r-l+1;
        if (l)
            curr1 = preSum[r]- preSum[l-1];
        else 
            curr1 = preSum[r];

        curr0 = currLen-curr1;

        bool isSorted = 0;
        if(curr1 == currLen || curr0 == currLen)
            isSorted = 1;
        else if(preSum[r]-preSum[r-curr1] == curr1) //all ones are in consecutive manners
            isSorted = 1;                          //till the end of the range
        
        if (isSorted){
            st.insert({-1, -1});
            continue;
        }

        if (curr0){
            x = '1';

            f = prev1[l];

            if(f < n-1)
                f++;
        }    
        else {
            x = '0';

            f = prev0[l];
            
            if(f < n-1)
                f++;
        }

        if (curr1 == 0){
            y = '1';

            s = next1[r];
            
            if(s)
                s--;
        }
        else {
            y = '0';

            s = next0[r];
            
            if(s)
                s--;
        }

        st.insert({f, s});
    }

    cout<<st.size();
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
