#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int i=0;

    while(1)
    {
        if(a+(b*(i))>=(c-(d*i)))
        {
            cout<<a+(b*i);
            break;
        }
        else if(c-(d*(i))<= a+(b*(i+1)))
        {
            cout<<c-(d*i);
            break;
        }

        i++;
    }
}
