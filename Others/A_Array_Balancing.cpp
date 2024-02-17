#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n, sum1 = 0, sum2 = 0;
		cin>>n;
		
        vector <long long> vec1;
        for (int i = 0; i < n; i++){
            int j;
            cin>>j;
            vec1.push_back(j);
        }

        vector <long long> vec2;
        for (int i = 0; i < n; i++){
            int j;
            cin>>j;
            vec2.push_back(j);

            if (vec1[i] > vec2[i]){
                swap(vec1[i], vec2[i]);
            }
        }
        
        for (int i = 0; i < n-1; i++){
            sum1 += abs(vec1[i]-vec1[i+1]);
            sum2 += abs(vec2[i]-vec2[i+1]);
        }

        cout<<sum1+sum2<<endl;
	}

	return 0;
}