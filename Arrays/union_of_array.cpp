const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n,m;    cin>>n>>m;
        vector<int> A;
        vector<int> B;

        for(int i=0;i<n;i++)
        {
            int d;  cin>>d;
            A.push_back(d);
        }
        for(int i=0;i<m;i++)
        {
            int d;  cin>>d;
            B.push_back(d);
        }

        unordered_map <int,int> map;
        for(auto &i:  A)
        {
            map[i]++;
        } 
        for(auto &j: B)
        {
            map[j]++;
        }
        
        cout<<map.size()<<endl;
    }
}