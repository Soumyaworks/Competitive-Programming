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
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    /*
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
    */
    //cout<<"Hello World"<<"\n";
    ll t,i,j,k,c,p,n;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        map<char,ll>mymap;
        //char ch=*min_element(s2.begin(),s2.end());

        for(i=0;i<s1.length();i++)
        {
            mymap[s1[i]]++;
        }
        for(i=0;i<s2.length();i++)
        {
            mymap[s2[i]]--;
        }
        string str1="",str2="";
        //str=s2;
        //cout<<"Print mymap:"<<"\n";
        /*
        for(auto it:mymap)
        {
            cout<<it.fi<<" : "<<it.se<<"\n";
        }
        */
        for(auto it:mymap)
        {
            if(it.se>0)
            {
            if(it.fi<s2[0])
            {
                //cout<<"enter less="<<it.fi<<"\n";
                for(k=1;k<=it.se;k++)
                {
                    str1=str1+it.fi;
                }
                /*
                while(it.se>0)
                {
                    str1=str1+it.fi;
                    it.se--;
                }
                */
                //cout<<"new string str1="<<str1<<"\n";
            }
            else if(it.fi==s2[0])
            {
                int f=0;
                for(i=1;i<s2.length();i++)
                {
                    if(s2[i]<it.fi)
                    {
                        str2+=it.fi;
                        break;
                    }
                    else if(s2[i]>it.fi)
                    {
                        f=1;
                        str1+=it.fi;
                        break;
                    }
                }
                if(i==s2.length())
                str2+=it.fi;
                if(f==1)
                {
                    for(k=2;k<=it.se;k++)
                    str1+=it.fi;
                }
                else
                {
                    for(k=2;k<=it.se;k++)
                    str2+=it.fi;
                }
                
            }
            else
            {
                //cout<<"enter more="<<it.fi<<"\n";
                for(k=1;k<=it.se;k++)
                {
                    str2=str2+it.fi;
                }
                /*
                while(it.se>0)
                {
                    str2=str2+it.fi;
                    it.se--;
                }*/
                //cout<<"new string str2="<<str2<<"\n";
            }
            }
        }
        cout<<(str1+s2+str2)<<"\n";
        mymap.clear();
    }
    return 0;
}
