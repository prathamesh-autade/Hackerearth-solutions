#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long min=0,max=0;
    for(int i=1;i<=n-1;i++){
        max+=a[i];
    }
    for(int i=0;i<n-1;i++){
        min+=a[i];
    }
    cout<<min<<' '<<max;
}
