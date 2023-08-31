#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll k;
    cin>>k;

    priority_queue<pair<ll, ll>>pq;
    for(ll i = 1; i <= k; i++)
    {
        ll x;
        cin>>x;
        //speed //idx
        pair<ll, ll>p;
        p.first = x;
        p.second = i;
        pq.push(p);
    }

    while(!pq.empty())
    {
        if(pq.size() == 1)
            break;

        ll x1 = pq.top().second; //idx1
        ll y1 = pq.top().first;

        pq.pop();

        ll x2 = pq.top().second; //idx2
        ll y2 = pq.top().first;

        pq.pop();

        cout<<x1<<" "<<x2<<" ";
        y1--;
        y2--;

        if(y1 > 0){
            pq.push({y1, x1});
        }
        if(y2 > 0){
            pq.push({y2, x2});
        }
    }

    if(pq.size() == 1)
    {
        ll x = pq.top().second;
        ll y = pq.top().first;
        for(int i = 1; i <= y; i++)
        {
            cout<<x<<" ";
        }
    }
    cout<<"\n";
}



