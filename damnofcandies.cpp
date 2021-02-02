#include <bits/stdc++.h>
using namespace std;
//User function Template for C++


class Solution{
    
    public:
    int maxCandy(int height[], int n) 
    { 
        // Your code goes here
        int l=0;
        int r=n-1;
        int area=0;
        int ans=0;
        
        while(l<r)
        {
            if(height[l]<height[r])
            {
                area=min(height[l],height[r])*(r-l-1);
                ans=max(ans,area);
                l++;
            }
            
            else
            {
                area=min(height[l],height[r])*(r-l-1);
                ans=max(ans,area);
                r--;
                
            }
        }
        return ans;
    }   
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int height[n];
        for(int i=0;i<n;i++){
            cin>>height[i];
            Solution obj;
            cout<<obj.maxCandy(height,n)<<"\n";
        }
    }
    return 0;
}