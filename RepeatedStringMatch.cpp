#include <bits/stdc++.h>
using namespace std;
//User function Template for C++
class Solution{

    public:
    int repeatedStringMatch(string A, string B) 
    {
        // Your code goes here
        
         int count=1;
         int res=B.length() / A.length();
        string s=A;
        for(int i=0;i<=res+2;i++)
        {
            
            if(s.find(B)!= string::npos)//here string::npos means static member variable 
            //we access with :: and after that npos(not a positon) it is constant(-ve no) and String is class 
            {
                return count;
            }
            else
            {
                s+=A;
                count++;
            }
        }
    return -1;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        string A,B;
        cin>>A;
        cin>>B;
        
        
            Solution obj;
            cout<<obj.repeatedStringMatch(A,B)<<"\n";
        
    }
    return 0;
}