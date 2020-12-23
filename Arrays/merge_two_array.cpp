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
    int i{0},j{0};
    int temp{0};
    for(i=0,j=0;i<n and j<m;)
    {
        if(A[i] > B[j])
        {
            swap(&A[i],&B[j]);
            sort(B,B+m);
            j =-1;
            j++;
        }
        i++;
        
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