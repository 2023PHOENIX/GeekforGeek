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
    
    int countChar[26] = {0};
    
    for(int i=0 ;i<s.size();i++){
        countChar[s[i]-'a']++;
        
    }
    
    for(int i=0;i<26;i++)
    {
        for(int j = 0; j < countChar[i] ; j++)
            {
                cout<<(char) (i+'a');
            }
    }
    cout<<endl;
    }
}
