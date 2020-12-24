#include<bits/stdc++.h>

using namespace std;
int solve(int *a,int n){
    int minPrice{INT_MAX},maxProfit{0};

    for(int i=0;i<n;i++){
        minPrice = min(minPrice,a[i]);
        maxProfit = max(maxProfit,a[i]-minPrice);
    }
    return maxProfit;
}
int main()
{
    int n;  cin>>n;
    int *a = new int[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<solve(a,n);
}