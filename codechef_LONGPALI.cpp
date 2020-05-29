#include<bits/stdc++.h>
using namespace std;
    string longestPalindrome(string s) {
        int best_len=1;
        int start=0;
        int low,high;
        int n=s.length();
        for(int i=1;i<n;i++)
        {
            low=i-1;
            high=i+1;
            while(low>=0 && high<n && s[low]==s[high])
            {
                if(high-low+1 > best_len)
                {
                    start=low;
                    best_len=high-low+1;
                }
                --low;
                ++high;
            }
            low=i-1;
            high=i;
            while(low>=0 && high<n && s[low]==s[high])
            {
                if(high-low+1 > best_len)
                {
                    start=low;
                    best_len=high-low+1;
                }
                --low;
                ++high;
            }
        }
        return s.substr(start,best_len);
    }
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,j,k,p;
    string s;
    cin>>n;
    cin>>s;
    string str=longestPalindrome(s);
    cout<<str.length()<<"\n"<<str<<"\n";
    return 0;
}
