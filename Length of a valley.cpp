#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long p[n],s[n];
        p[0]=1;
        for(int i=1;i<n;i++){
            if(a[i-1]>a[i]){
                p[i]=p[i-1]+1;
            }else{
            p[i]=1;
            }
        }
        s[n-1]=1;
        for(int i=n-2;i>=0;i--){
            if(a[i+1]>a[i]){
                s[i]=s[i+1]+1;
            }else{
            s[i]=1;
            }
        }
        for(int i=0;i<n;i++){
            cout<<p[i]+s[i]-1<<" ";
        }

        t--;
        cout<<endl;
    }
    return 0;

}
