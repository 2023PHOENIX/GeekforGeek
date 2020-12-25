const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;  cin>>t;
    
    while(t--){
        int n,k;    cin>>n>>k;
        
        vector<int> arr;
        for(int i=0;i<n;i++){
            int d;  cin>>d;
            arr.push_back(d);
        }
        int sum{0},minValue{INT_MAX};
        for(int i=0;i<arr.size();i++){
            sum =0;
            for(int j=i;j<arr.size();j++){
                sum += arr.at(j);
                if(sum > k){
                    minValue = min(minValue,j-i+1);
                    break;
                    
                }
            }
        }
        cout<<minValue<<endl;
    }
}
