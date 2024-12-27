#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool b[107];
ll n,i,a[107];
void Try(ll k)
{
    for(ll i=1;i<=n;i++)
    {
        if(!b[i])
        {
            b[i]=1;
            a[k]=i;
            if(k==n)
            {
                for(ll j=1;j<=n;j++)
                    cout<<a[j];
                cout<<'\n';
            }
            else    Try(k+1);
            b[i]=0;
        }
    }
}
int main()
{
    cin>>n;
    Try(1);
}