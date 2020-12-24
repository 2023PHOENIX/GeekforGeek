#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;  cin>>t;
    while(t--){
    int n,k;    cin>>n>>k;
    unordered_map<int,int> map;

    for(int i=0;i<n;i++){
        int d;  cin>>d;
        map[d]++;
    }

    int flag{0};
    for(auto i: map)
        {
            if(i.second == 1)
                cout<<i.first<<endl;
               
        }
    }
}