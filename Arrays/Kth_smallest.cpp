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
            int n;  cin>>n;

            int *A{nullptr};
            A = new int[n];


            for(int i=0;i<n;i++)
                cin>>A[i];

            sort(A,A+n);

            int k;  cin>>k;

            cout<<A[k-1]<<endl;


            
        }
}