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
bool check(string str){
    int i=0,j=str.length()-1;
    while(i<j){
        if(str[i]!=str[j])
        return false;
        i++;
        j--;
    }
    return true;

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
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string str=s;
        int f=0;
        int i=0,j=s.length()-1;
        str='a'+str;
        if(check(str)==false)
        {
            cout<<"YES"<<"\n";
            cout<<str<<"\n";
        }
        else{
            str=s;
        while(i<s.length()){
            if(str[i]!='a'){
                f=1;
                cout<<"YES"<<"\n";
                string p="";
                int k;
                for(k=0;k<s.length()-1-i;k++)
                p+=str[k];
                p+='a';
                p+=str.substr(k);
                cout<<p<<"\n";
                break;
            }
            i++;
            j--;
        }
        if(f==0)
        cout<<"NO"<<"\n";
        }
    }
    return 0;
}