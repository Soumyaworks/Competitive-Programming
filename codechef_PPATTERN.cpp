#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define fill(a,x) memset(a,x,sizeof(a))
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"Hello World"<<"\n";
    int t,i,j,k,p,c,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        k=1;
        int a[n][n];
        fill(a,0);
        for(i=0;i<n;i++)
        {
            j=i;
            p=0;
            while(j>=0)
            {
                a[p][j]=k;
                p++;
                j--;
                k++;
            }
        }
        for(i=1;i<n;i++)
        {
            j=i;
            p=n-1;
            while(j<n)
            {
                a[j][p]=k;
                k++;
                j++;
                p--;
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            cout<<a[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
