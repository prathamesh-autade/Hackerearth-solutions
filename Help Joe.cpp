#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int hsh[26]={0};
    for(int i=0;i<s.length();i++)
        hsh[s[i]-'a']++;
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        string t;
        while(n--){
            char x;
            cin>>x;
            t.push_back(x);
        }
        set<char> Set;
        set<char>::iterator itr;
        for(int i=0;i<t.length();i++)
            Set.insert(t[i]);

        //cout<<"t: "<<t<<endl;

        int ans=0;
        vector<int> val;
        for(itr=Set.begin();itr!=Set.end();itr++){
                val.push_back(hsh[*itr-'a']);
                //cout<<val[i]<<" ";

        }
        //cout<<endl;
        int odd=0,even=0,od1=0;
        for(int i=0;i<val.size();i++){
            if(val[i]%2==0)
                ans+=val[i];
            else
                if(val[i]>1){
                    ans+=val[i]-1;
                    odd++;
                }

                else
                    od1++;

        }
        if(odd>=1 && od1==0)
            ans+=1;
        else if(od1>=1)
                ans+=1;

        cout<<ans<<endl;


    }


	return 0;
}




