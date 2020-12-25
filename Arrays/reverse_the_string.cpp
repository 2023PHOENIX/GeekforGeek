const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;  cin>>t;
    
    while(t--){
        string s;   cin>>s;
        int HashTable[26] = {0};
        
        for(auto &i : s){
            HashTable[i-'a']++;
        }
        
        
        for(int i=25;i>=0;i--){
            for(int j=0;j<HashTable[i];j++)
                {
                    cout<<(char)(i+'a');
                }
        }
        cout<<endl;
    }
}
