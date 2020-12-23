const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void swap(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void solve(int *A,int *B,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        if(A[i]>B[0])
            {
                swap(&A[i],&B[0]);
                sort(B,B+m);
            }
    }

    for(int i=0;i<n;i++)
            cout<<A[i]<<" ";

        for(int i=0;i<m;i++)
            cout<<B[i]<<" ";
    
}
int main()
{
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL);
        int n,m;    cin>>n>>m;
        int *A = new int[n];
        int *B = new int[m];

        for(int i=0;i<n;i++)
            cin>>A[i];

        for(int i=0;i<m;i++)
            cin>>B[i];
        
        solve(A,B,n,m);

        
        
}