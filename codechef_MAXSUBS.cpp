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

//Attributes : https://www.geeksforgeeks.org/find-maximum-subset-xor-given-set/

int maxXor(int a[], int n) 
{ 
    int i,j,c,p,k;
    k=0; 
  
    
    for (int i = 31; i >= 0; i--) 
    { 
        
        int a1 = k; 
        int a2 = INT_MIN; 
        for (int j = k; j < n; j++) 
        { 
            
            if ( (a[j] & (1 << i)) != 0 && a[j] > a2 ) 
                a2 = a[j], a1 = j; 
        } 
  
        
        if (a2 == INT_MIN) 
        continue; 
  
        
        swap(a[k], a[a1]); 
  
        
        a1 = k; 
  
        
        for (j=0; j<n; j++) 
        { 
            
            if (j != a1 && (a[j] & (1 << i)) != 0) 
                a[j] = a[j] ^ a[a1]; 
        } 
  
        
        k++; 
    } 
  
    
    c=0;
    for (i = 0; i < n; i++) 
        c =c^ a[i]; 
    return c; 
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
    int n,i,j,k,c,p;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<maxXor(a,n)<<"\n";
    return 0;
}
