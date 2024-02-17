#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, count1, count2;
    count1 = count2 = 0;
    cin>>n;

    vector <long long> vec1;
    vector <long long> vec2;

    for (int i = 0; i < n; i++){
        int j;
        cin>>j;
        vec1.push_back(j);
    }

    for (int i = 0; i < n; i++){
        int j;
        cin>>j;
        vec2.push_back(j);

        if(vec1[i] == vec2[i]){
            count1++;
            vec2[i] = -1;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(vec1[i] == vec2[j])
                count2++;
        }
    }
    
    cout<<count1<<endl<<count2<<endl;
      
    return 0;
}
    