#include <bits/stdc++.h>
using namespace std;
bool checkPrime(long long n)
{
    for (long long i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            return true;
        }
    }
    return false;
}
long long primeFactor(long long n)
{
    vector<long long> v;

    for (long long i = 2; i * i <= n; ++i)
    {
        while (n % i == 0)
        {
            v.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
    {
        v.push_back(n);
    }
    return v[v.size()-1];
    
}
int main()
{
    long long n;
    while (cin >> n)
    {

        if (n == 0)
        {
            break;
        }
        else if (!checkPrime(n) || primeFactor(n) == 2)
        {
            cout << -1 << endl;
        }
        else
        {
            cout<<primeFactor(n)<<endl;
        }
        
    }
    return 0;
}