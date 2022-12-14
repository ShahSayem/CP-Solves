#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

int findMax(multiset<int> my_set)
{
    int max_element;
    if (!my_set.empty())
        max_element = *(my_set.rbegin());

    return max_element;
}
 
int findMin(multiset<int> my_set)
{
    int min_element;
    if (!my_set.empty())
        min_element = *my_set.begin();
 
    return min_element;
}

void solve()
{
    int q, x, m, c, a, b;
    multiset <int> s;

    cin>>q;
    while (q--){
        cin>>x;

        if (x == 1){
            cin>>x;
            s.insert(x);
        }
        
        else if (x == 2){
            cin>>x>>c;

            int y = s.count(x);
            m = min(c, y);

            while (m--){
                s.erase(x);
            }
        }

        else {
            cout<<*s.rbegin()-*s.rend()<<"\n";
        }
    }
    
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

