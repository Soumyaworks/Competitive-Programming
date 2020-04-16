#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long int
#define pb push_back
#define mp make_pair
#define ld long double
#define fill(a,x) memset(a,x,sizeof(a))
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"Hello World"<<"\n";
    ll t,i,j,k,p,c,n,f;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        n=s.length();
        stack<ll>st;
        k=0;c=-1;j=0;f=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='<')
            k++;
            else if(s[i]=='>')
            {
                j++;
            }
            if(j>k)
            {
                f=1;
                break;
            }
            if(k==j)
            c=i;
        }
        
        
        //if(!st.empty())
        //c=0;
        if(f==1)
        cout<<i<<"\n";
        else
        cout<<c+1<<"\n";
    }
    return 0;
}
