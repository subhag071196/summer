#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int bs(int lo, int hi, vector<int>& C, int n, int k)
{
    int ans = 0;
    while(lo <= hi)
    {
        int mid = lo + (hi-lo)/2;
        int tot = 0;
        for(int i=0; i<n; ++i)
        {
            tot += C[i]/mid;
        }
        if(tot < k) hi = mid-1;
        else
        { 
            lo = mid+1;
            ans = mid;
        }
    }
    return ans;
}
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> C;
        for(int i=0; i<n; ++i) 
        {
            int x;
            cin >> x;
            C.push_back(x);
        }
        cout <<endl << bs(1,1e10,C,n,k) <<"\n";
    }
} 
