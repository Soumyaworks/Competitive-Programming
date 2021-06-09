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
    int i,k,j,c,p;
    string s;
    cin>>s;
    cin>>k;
    c=0;
    int candy=0,snow=0;
    for(i=0;i<s.length();i++){
       if(s[i]=='*')
       snow++;
       else if(s[i]=='?')
       candy++;
       else
       c++;
    }
    string str;
    if(c==k){
        for(i=0;i<s.length();i++){
            if(s[i]!='*' && s[i]!='?')
            str+=s[i];
        }
        cout<<str;
    }
    else if(c<k){
        if(snow==0)
        cout<<"Impossible";
        else{
            for(i=0;i<s.length();i++){
                if(s[i]=='*'){
                    while(c!=k){
                        str+=s[i-1];
                        c++;
                    }
                    break;
                }
            }
            string s1;
            for(j=0;j<i;j++){
                if(s[j]!='*' && s[j]!='?')
                s1+=s[j];
            }
            str=s1+str;
            s1="";
            for(j=i+1;j<s.length();j++){
                if(s[j]!='*' && s[j]!='?')
                s1+=s[j];
            }
            str+=s1;
            cout<<str;
        }
    }
    else{
        if((snow+candy)<(c-k))
        cout<<"Impossible";
        else{
            for(i=0;i<s.length();i++){
                if(s[i]=='*' || s[i]=='?'){
                    s[i-1]='*';
                    c--;
                }
                if(c==k)
                break;
            }
            for(i=0;i<s.length();i++){
                if(s[i]!='*' && s[i]!='?')
                str+=s[i];
            }
            cout<<str;
        }
    }

    return 0;
}