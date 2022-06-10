#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
void solve()
{
    ll n,i;
    cin>>n;
    ll a[n];
    bool even=0,odd=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            even=1;
        if(a[i]%2!=0)
            odd=1;
    }
    if(even && odd)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
                cout<<a[i]<<" ";
        }
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)
                cout<<a[i]<<" ";
        }
    }
    else
        cout<<-1;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
	return 0;
}
