#include <bits/stdc++.h>
using namespace std;
//User function Template for C++

class Solution{
    
    public:
    int transfigure (string A, string B)
    {
    	// Your code goes here
    	int m=A.length(), n=B.length();
    	
    	if(n!=m)
    	{
    	    return -1;
    	}
    	int count[256];
    	memset(count,0,sizeof(count));
    	for(int i=0;i<n;i++)//count charcters in A
    	    count[B[i]]++;
    	for(int i=0;i<n;i++)
    	    count[A[i]]--;
    	for(int i=0;i<256;i++)
    	    if(count[i])
    	        return -1;
    	int res=0;
    	for(int i=n-1,j=n-1;i>=0;)
        {
    	    while( i>=0 && A[i]!=B[j] )
    	    {
    	        i--;
    	        res++;
    	    }
    	    if(i>=0)
    	    {
    	        i--;
    	        j--;
    	    }
        }
        return res;
    }
    
};
int main(){
     string A, B; 
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
    
