//Author : Soumya Banerjee
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

// Defintion for a Linked List
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    //ListNode *head=new ListNode();
    //ListNode *ptr1,*ptr2;
};

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    //TreeNode *root=new TreeNode();
};

ll getClosest(ll val1, ll val2,
               ll target)
{
    if (target - val1 >= val2 - target)
        return val2;
    else
        return val1;
}

ll findClosest(vector<ll>&a, ll n, ll target)
{
    
    if (target <= a[0])
        return a[0];

    if (target >= a[n - 1])
        return a[n - 1];
 
    // Doing binary search
    ll i = 0, j = n, mid = 0;
    while (i < j) {
        mid = (i + j) / 2;
 
        if (a[mid] == target)
            return a[mid];
 
        
        if (target < a[mid]) {
 
            
            if (mid > 0 && target > a[mid - 1])
                return getClosest(a[mid - 1],
                                  a[mid], target);  
            j = mid;
        }
     
        else {
            if (mid < n - 1 && target < a[mid + 1])
                return getClosest(a[mid],
                                  a[mid + 1], target);
 
            i = mid + 1;
        }
    }
    return a[mid];
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // #ifndef ONLINE_JUDGE 
    //     freopen("input.txt", "r", stdin); 
    //     freopen("output.txt", "w", stdout); 
    // #endif 
    
    //cout<<"Hello World"<<"\n";
    ll n,i,j,k,sum=0;
    cin>>n;
    vector<ll>a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.begin(),a.end());
    ll m;
    cin>>m;
    while(m--){
        ll x,y;
        cin>>x>>y;
        ll ans=0;
        auto lower=lower_bound(a.begin(),a.end(),x);
        ll ind1=(lower!=a.end())?(lower-a.begin()):-1;
        // ll ind2=max((ll)0,ind1-1);
        // cout<<"ind1 = "<<ind1<<" ind2= "<<ind2<<"\n";
        k=findClosest(a,n,x);
        // int v1=(max(0,y-(sum-a[ind1])));
        ll v1=(ind1==-1)?(max((ll)0,(x-k)))+(max((ll)0,y-(sum-k))):(max((ll)0,(x-a[ind1])))+((ll)max((ll)0,y-(sum-a[ind1])));
        v1=min(v1,(max((ll)0,(x-k)))+(max((ll)0,y-(sum-k))));
        // cout<<"v2="<<v2<<"\n";
        ll v2=LLONG_MAX;
        if(ind1>0 && a[ind1]!=x){
            ll ind2 = ind1-1;
            v2=(max((ll)0,(x-a[ind2])))+((ll)max((ll)0,y-(sum-a[ind2])));
        }
        ans=min(v1,v2);;
        cout<<ans<<"\n";
    }

    return 0;
}