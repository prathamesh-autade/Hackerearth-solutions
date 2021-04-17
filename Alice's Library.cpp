#include<iostream>
#include<string>
#include<stack>
#include<ctype.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(isalpha(s[i]) || s[i]=='/'){
            st.push(s[i]);
            }
        else{
                string t="";
            while(!st.empty() && st.top()!= '/'){
                    t=t+st.top();
                    st.pop();



            }
            st.pop();
            for(int j=0;j<t.length();j++){
                st.push(t[j]);
            }
        }
    }
    string ans="";
    while(!st.empty()){
        ans=ans+st.top();
        st.pop();
    }
    for(int i=ans.length()-1;i>=0;i--){
        cout<<ans[i];
    }
    return 0;
}
