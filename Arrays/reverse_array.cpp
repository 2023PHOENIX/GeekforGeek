const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL);

    
        string s;   cin>>s;

        for(int i=s.size()-1;i>=0;i--)
            cout<<s.at(i);
}