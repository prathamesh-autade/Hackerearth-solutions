#include<iostream>
#include<algorithm>
using namespace std;
bool binarySearch(long long arr[], int l, int r, long long x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        // Check if x is present at mid 
        if (arr[m] == x) 
            return true; 
  
        // If x greater, ignore left half 
        if (arr[m] < x) 
            l = m + 1; 
  
        // If x is smaller, ignore right half 
        else
            r = m - 1; 
    } 
  
    // if we reach here, then element was 
    // not present 
    return false; 
}
int main(){
    int n,q;
    cin>>n>>q;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<q;i++){
        long long x;
        cin>>x;
        bool ans=binarySearch(a,0,n-1,x);
        if(ans)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';    
    }

    return 0;
}
