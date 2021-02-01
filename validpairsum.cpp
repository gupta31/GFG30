#include <bits/stdc++.h>
using namespace std;
//User function Template for C++


class Solution{
    
    
    
    public:
     long long ValidPair(int a[], int n) 
    { 
    	// Your code goes here 
    	//sorting the given array
        sort(a,a+n);
        //variable to store the count of pairs
        long long int ans=0;
        for(int i =0;i<n;i++){
            if(a[i]<=0)
                continue;
            //finding the index using lower_bound
            int j=lower_bound(a,a+n,-a[i]+1) -a;
            ans+=i-j;
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
        int array[n];
        for(int i=0;i<n;i++){
            cin>>array[i];
            Solution obj;
            cout<<obj.ValidPair(array,n)<<"\n";
        }
    }
    return 0;
}