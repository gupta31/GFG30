#include <iostream>
using namespace std;

class Solution {
  public:
    void prank(long long a[], int n){
        // y=a[i],x=a[a[i]];(x*n+y) or (x%n)*n+y
        for(int i=0;i<n;i++){
            a[i]=a[i]+(a[a[i]]%n)*n;
        }
        for(int i=0;i<n;i++){
            a[i]=a[i]/n;
        }
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution ob;
        ob.prank(a,n);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
}