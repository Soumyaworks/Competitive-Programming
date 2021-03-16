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

/*References : https://www.geeksforgeeks.org/program-decimal-binary-conversion/
               https://www.geeksforgeeks.org/program-binary-decimal-conversion/
*/

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

ll nextpow(ll n){
    ll i=1;
    while(i<=n){
        i<<=1;
    }
    return i;
}

string dectobin(ll n){
    string s = bitset<64> (n).to_string(); 
    const auto loc1 = s.find('1'); 
      
    if(loc1 != string::npos) 
        return s.substr(loc1); 
      
    return "0"; 
}

ll bintodec(string n){
    string num = n;
    int dec_value = 0;
    int base = 1;
 
    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    return dec_value;
}

void make_equal(string &s,int n){
    int l=n-s.length();
    for(int i=1;i<=l;i++)
    s='0'+s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
    */
    //cout<<"Hello World"<<"\n";
    ll t,c,i,j,k;
    cin>>t;
    while(t--){
        cin>>c;
        k=nextpow(c);
        i=k;
        //cout<<"next power="<<k<<"\n";

        while(true){
            --k;
            j=k^c;
            if(j>=1 && j<i){
                //cout<<"j="<<j<<" k="<<k<<"\n";
                //cout<<(k*j)<<"\n";
                break;
            }
        }
        /*
        ll p=j*k;
        string s1=dectobin(j);
        string s2=dectobin(k);
        //cout<<s1<<" "<<s2<<"\n";
        if(s1.length()<s2.length()){
            make_equal(s1,s2.length());
        }
        else if(s2.length()<s1.length()){
            make_equal(s2,s1.length());
        }
        //cout<<s1<<" "<<s2<<"\n";
        string x,y;
        x=s1;
        y=s2;
        for(i=0;i<s1.length();i++){
            s1=x;
            s2=y;
            if(s1[i]!=s2[i]){
                for(j=i;j<s1.length();j++){
                    swap(s1[j],s2[j]);
                    ll v1=bintodec(s1);
                    ll v2=bintodec(s2);
                    //cout<<"v1*v2="<<(v1*v2)<<"\n";
                    p=max(p,(v1*v2));
                }
            }
        }
        cout<<p<<"\n";
        */
       ll p=k*j;
       ll n2=log2(k)+1;
       ll n1=log2(j)+1;
       //cout<<"j="<<j<<" k="<<k<<"\n";
       //cout<<"n1="<<n1<<" n2="<<n2<<"\n";
       ll x,y;
       x=j;
       y=k;
       for(i=0;i<n2;i++){
           j=x;
           k=y;
           if((k&(1<<i))!=(j&(1<<i))){
               for(ll v=i;v<n2;v++){
                if(((k&(1<<v))!=0 && (j&(1<<v))==0) || ((k&(1<<v))==0 && (j&(1<<v))!=0)){   
                j^=(1<<v);
                k^=(1<<v);
                //cout<<"j="<<j<<" k="<<k<<" (j*k)="<<(j*k)<<"\n";
                p=max(p,(j*k));
                }
               }
           }
       }
        cout<<p<<"\n";
    }
    return 0;
}