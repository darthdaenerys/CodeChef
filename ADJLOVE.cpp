#include <bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
bool isprime(int x)
{
    if(x==2 || x==3)
        return true;
    else
    {
        for(int i=2;i<=sqrt(x);i++)
        {
            if(x%i==0)
                return false;
        }
        return true;
    }
}
bool ispalindrome(string s)
{
    int i,l=s.length();
    for(i=0;i<l;i++)
    {
        if(s[i]!=s[l-i-1])
            return false;
    }
    return true;
}
ll numofdigits(ll x)
{
    ll ans=0;
    while(x)
    {
        ans++;
        x/=10;
    }
    return x;
}
void display(ll a[],ll n)
{
    for(ll i=0;i<n;i++)
        cout<<a[i]<<" ";
}
void solve()
{
    ll n,i,x;
    cin>>n;
    ll twoodds=0;
    stack<ll> evenset,oddset,oddtarget;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x%2==0)
            evenset.push(x);
        else
        {
            if(twoodds<=1)
            {
                oddtarget.push(x);
                twoodds++;
            }
            else
                oddset.push(x);
        }
    }
    if(oddtarget.size()<=1)
    {
        cout<<-1;
        return;
    }
    if((oddset.size()+oddtarget.size())%2==0)
    {
        while(!evenset.empty())
        {
            cout<<evenset.top()<<" ";
            evenset.pop();
        }
        while(!oddset.empty())
        {
            cout<<oddset.top()<<" ";
            oddset.pop();
        }
        while(!oddtarget.empty())
        {
            cout<<oddtarget.top()<<" ";
            oddtarget.pop();
        }
        return;
    }
    if(evenset.size()==0)
    {
        cout<<-1;
        return;
    }
    while(!oddset.empty())
    {
        cout<<oddset.top()<<" ";
        oddset.pop();
    }
    while(!evenset.empty())
    {
        cout<<evenset.top()<<" ";
        evenset.pop();
    }
    while(!oddtarget.empty())
    {
        cout<<oddtarget.top()<<" ";
        oddtarget.pop();
    }
}
int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<'\n';
    }
}