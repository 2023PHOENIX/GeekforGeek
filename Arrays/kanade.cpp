#include<bits/stdc++.h>

using namespace std;

int kanade(int *A,int n){
    int maximum{0},current{0};

    for(int i=0;i<n;i++)
        {
            current = current + A[i];
            if(current < 0)
                current = 0;
            maximum = max(current,maximum);
        }

        return maximum;
}
int main()
{
    int n;  cin>>n;

    int * A = new int[n];

    for(int i=0;i<n;i++)
        cin>>A[i];
    
    cout<<kanade(A,n)<<"\n";
}