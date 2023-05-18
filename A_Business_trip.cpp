#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k, sum = 0;
	cin>>k;

    vector <int> vec;
	for (int i = 0; i < 12; i++){
        int j;
        cin>>j;
        vec.push_back(j);
    }

    sort(vec.begin(), vec.end(), greater <int>());

    int i;
    for (i = 0; sum < k; i++){
        sum += vec[i];
    }

    if (i < 13)
        cout<<i<<endl;
    else
        cout<<-1<<endl;

	return 0;
}