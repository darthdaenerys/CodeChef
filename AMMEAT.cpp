#include <bits/stdc++.h>
#include<stack>
#include<array>
#include<vector>
#include<deque>
#include<algorithm>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int gcd(int a,int b)//b>=a
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}
bool isprime(int x)
{
    if(x==2 || x==3)
        return true;
    else
    {
        for(int i=2;i<=sqrt(x);i++)
        {
            if(x%i==0)
                return true;
        }
        return false;
    }
}
ll numoffactors(ll x)//except 1 and itself considered
{
    ll i,c=0;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
            c++;
    }
    return c;
}
ll factorial(ll x)
{
    if(x==1)
        return 1;
    return x*factorial(x-1);
}
ll reversenumber(ll x)
{
    ll rem,rev=0;
    while(x!=0)
    {
        rem=x%10;
        rev=rev*10+rem;
        x/=10;
    }
    return rev;
}
ll combination(ll n,ll r)
{
    if(r==0)
        return 1;
    if(r==1)
        return n;
    if(r==2)
        return (n*(n-1)/2);
    ll x;
    x=factorial(n)/(factorial(r)*factorial(n-r));
    return x;
}
bool isarmstrong(ll x)
{
    ll temp=x,s=0;
    while(x!=0)
    {
        s+=pow((x%10),3);
        x/=10;
    }
    if(temp==s)
        return true;
    return false;
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
void solve()
{
    ll n,m,i,c=0,meat=0,flag=0;
    cin>>n>>m;
    ll p[n];
    for(i=0;i<n;i++)
        cin>>p[i];
    sort(p,p+n,greater<ll>());
    for(i=0;i<n;i++)
    {
        if(meat>=m)
        {
            flag=1;
            break;
        }
        else
        {
            meat+=p[i];
            c++;
        }
    }
    if(flag==1 || meat>=m)
        cout<<c;
    else
        cout<<-1;
}
int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
	return 0;
}