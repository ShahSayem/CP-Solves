#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
template <typename T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);


int main()
{
    Shah_Sayem

    int q, val, k;
    cin>>q;
    char type;

    oset <int> s;
    while (q--){
        cin>>type;

        if (type == 'I'){
            cin>>val;
            s.insert(val);
        }
        else if (type == 'D'){
            cin>>val;
            s.erase(val);
        }
        else if (type == 'K'){
            cin>>k;
            --k;

            // cout<<k<<" "<<s.size()<<" "<<*s.find_by_order(k)<<"\n";
            if (k >= s.size())
                cout<<"invalid"<<"\n";
            else
                cout<<*s.find_by_order(k)<<"\n";
        }
        else {   //C
            cin>>k;
            cout<<s.order_of_key(k)<<"\n";
        }
    }

    return 0;
}
