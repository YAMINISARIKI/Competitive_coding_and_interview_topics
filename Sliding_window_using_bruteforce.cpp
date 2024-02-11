#include <bits/stdc++.h>
using namespace std;
int sliding_window(int n,int k,int a[])
{
    int maxi = INT_MIN;
    for(int i=0;i<n-k+1;i++)
    {
        int s = 0;
        for(int j=0;j<k;j++)
        {
            s+=a[i+j];
        }
        maxi = max(maxi,s);
    }
    return maxi;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<sliding_window(n,k,a); 
}
