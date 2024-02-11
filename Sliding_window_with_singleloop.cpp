#include<bits/stdc++.h>
using namespace std;
int sliding_window(int n,int k,int a[])
{
    if(n<k)return -1;
    int maxi=0;
    //initially here we are computing first window value
    for(int i=0;i<k;i++)
    {
        maxi += a[i];
    }
    //here we start from window size and add next element moving forward and subtracting starting element.
    int current_sum = maxi;
    for(int i = k;i<n;i++)
    {
        current_sum += a[i]-a[i-k];
        maxi = max(maxi,current_sum);
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
