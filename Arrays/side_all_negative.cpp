const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL);

        int n;  cin>>n;

        int *A = new int[n];

        for(int i=0;i<n;i++)
            cin>>A[i];
        int j{0};

        for(int i=0;i<n;i++)
        {
            if(A[i]<0)
            {
                swap(&A[i],&A[j]);
                j++;
            }
        }

        for(int i=0;i<n;i++)
            cout<<A[i]<<" ";
}