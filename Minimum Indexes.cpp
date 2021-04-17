#include<iostream>
using namespace std;
int main(){
    
     int n,q;

    cin>>n>>q;

    long long int A[n+1] = {0},F[n+1] = {0};

    for(int i = 1; i<=n; i++){

        cin>>A[i];

        int x = A[i],sum = 0;

        while(x>0){

            int c = x%10;

            sum+=c;

            x = x/10;

        }

        F[i] = sum;

    }

    while(q--){

        int x;

        cin>>x;

        int flag = 0,a = 0;

        for(int i = x+1; i<=n; i++){

            if(A[x]<A[i]&&F[x]>F[i]){

                flag = 1;

                a = i;

                break;

            }

        }

        if(flag==0){

            cout<<"-1"<<endl;

        }

        else{

            cout<<a<<endl;

        }

    }
    return 0;
}
