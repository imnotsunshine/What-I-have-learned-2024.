#include <bits/stdc++.h>
using namespace std;
#define nmax 1000007
#define ll long long
const long long mod = 1e9+7;
long long a[31];
long long dem=0;
long long n;
string s;
void dq(long long i)
{
    if(i<n)
    {
        if(s[i]=='(')
        {
            for(int j=0; j<=1; j++)
            {
                a[i]=j;
                dq(i+1);
            }
        }
        else a[i]=1, dq(i+1);
    }
    if(i==n)
    {
        bool ok=0;
        long long tong=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==0) tong++;
            else tong--;
            if(tong<0) ok=1;
            // else tong++;
            //cout<<a[i];
        }
        if(ok==0 and tong==0) 
        {
            dem++;
        }
        // dem++;
        // cout<<'\n';
    }
    
}
signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>s;
    dq(0);
    cout<<dem;
}