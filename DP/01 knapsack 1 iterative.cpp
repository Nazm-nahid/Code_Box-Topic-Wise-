#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

int cost[1000],w[10000],dp[10005];

int cap,n;

void dpi()
{
    for(int i=0;i<n;i++)
        for(int j=cap;j>=0;j--)
    {
       if(w[i]<=j)
                {
                    dp[j]=max(dp[j],dp[j-w[i]] +cost[i]);
                }
    }
        return;
}

int main()
{

        for(int j=0;j<10003;j++)
                    dp[j]=-1;
                    dp[0]=0;
    cin>>n>>cap;
    for(int i=0;i<n;i++)
    {
        cin>>w[i]>>cost[i];
    }
    dpi();
    int mx=-1;
    for(int i=0;i<=cap;i++) mx=max(mx,dp[i]);
    cout<<mx<<endl;

}

