
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l;
    cin>>l;
    while(l--){
        int q;
        cin>>q;
        int j=n-1;
        while(q>a[j]){
            q-=a[j];
            j--;
        }
        if(j%2==0)
            cout<<"A"<<'\n';
        else
            cout<<"B"<<'\n';    
    }
    return 0;
}
