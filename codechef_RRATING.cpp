#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long int
#define pb push_back
#define mp make_pair
#define ld long double
#define fi first
#define se second
#define fill(a,x) memset(a,x,sizeof(a))
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"Hello World"<<"\n";
    ll n,x,y,i,j,k,p,c;
    //priority_queue<ll>pq;
    //cin>>n;
    scanf("%lld",&n);
    j=0;p=0;
    //vector<ll>v;
    multiset<ll,greater<ll>>S;
    priority_queue<ll>maxheap;
    priority_queue<ll,vector<ll>,greater<ll>>minheap;
    while(n--)
    {
        //cin>>k;
        scanf("%lld",&k);
        if(k==1)
        {
            //cin>>x;
            scanf("%lld",&x);
            j++;
            //pq.push(x);
            //v.pb(x);
            //S.insert(x);
            if(minheap.size()<(j/3))
            {
                if(maxheap.empty()||maxheap.top()<=x)
                minheap.push(x);
                else
                {
                    p=maxheap.top();
                    maxheap.pop();
                    minheap.push(p);
                    maxheap.push(x);
                }
            }
            else
            {
                if(minheap.size()>0 && minheap.top()<x)
                {
                    p=minheap.top();
                    minheap.pop();
                    maxheap.push(p);
                    minheap.push(x);
                }
                else
                maxheap.push(x);
            }
        }
        else
        {
            //i=j/3;
            if(!minheap.empty())
            cout<<minheap.top()<<"\n";
            
            
            else
            {
                cout<<"No reviews yet\n";
                //printf("No reviews yet\n");    
                //make_heap(v.begin(),v.end());
                //cout<<S[i]<<"\n";
                //auto it=S.begin();
                //advance(it,i-1);
                //cout<<*it<<"\n";
                //printf("%lld\n",*it);
            }
        }
    }
    return 0;
}
