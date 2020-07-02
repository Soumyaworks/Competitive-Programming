#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize("Ofast")
#define ll long long int
#define pb push_back
#define mp make_pair
#define ld long double
#define fi first
#define se second
#define mod 1000000007
#define fill(a,x) memset(a,x,sizeof(a))
#define indexed_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"Hello World"<<"\n";
    int q,t,n,i,j,k,c,p,f;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        string s1[n],s2[q];
        int a1[n][26],a2[q][26];
        fill(a1,0);
        fill(a2,0);
        for(i=0;i<n;i++)
            {
                cin>>s1[i];
                for(j=0;j<s1[i].length();j++)
                {
                    a1[i][(int)s1[i][j]-97]++;
                }
            }
        for(i=0;i<q;i++)
            {
                cin>>s2[i];
                for(j=0;j<s2[i].length();j++)
                {
                    a2[i][(int)s2[i][j]-97]++;
                }
            }
        c=0;
        /*
        cout<<"n strings"<<"\n";
        for(i=0;i<n;i++)
            cout<<s1[i]<<"\n";
        cout<<"q strings"<<"\n";
        for(i=0;i<q;i++)
            cout<<s2[i]<<"\n";

        cout<<"\nalphabets\n";
        for(i=97;i<=122;i++)
            cout<<(char)i<<" ";
        cout<<"\nfor n strings:\n";
        for(i=0;i<n;i++)
        {
            for(j=0;j<26;j++)
                cout<<a1[i][j]<<" ";
            cout<<"\n";
        }

        cout<<"\nfor q strings:\n";
        for(i=0;i<q;i++)
        {
            for(j=0;j<26;j++)
                cout<<a2[i][j]<<" ";
            cout<<"\n";
        }

        */
        for(i=0;i<q;i++)
        {
            c=0;
            f=0;
            string s;
            s=s2[i];
            for(j=0;j<n;j++)
            {
                f=0;
                for(p=0;p<26;p++)
                {
                    if(a1[j][p]==a2[i][p])
                        continue;
                    else if((a1[j][p]-a2[i][p])==1)
                    {
                        c++;
                        if(c>2)
                        {
                            f=-1;
                            break;
                        }
                    }
                    else if((a2[i][p]-a1[j][p])==1)
                    {
                        c++;
                        if(c>2)
                        {
                            f=-1;
                            break;
                        }
                    }
                    else if(abs(a1[j][p]-a2[i][p])>1)
                    {
                        f=-1;
                        break;
                    }
                }
                if(f==-1)
                {
                    f=0;
                    c=0;
                    continue;
                }
                else
                {
                    cout<<s1[j]<<"\n";
                    break;
                }
            }
        }


    }
    return 0;
}
