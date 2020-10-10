#include<bits/stdc++.h>

using namespace std;

int main()

{

int n;

cin>>n;

queue<int>A,B;

int count=0;

for(int i=0;i<n;i++)

{

int a;

cin>>a;

A.push(a);

}

for(int i=0;i<n;i++)

{

int b;

cin>>b;

B.push(b);

}

while(!A.empty())

{

if(A.front()==B.front())

{

A.pop();

B.pop();

count++;

}

else

{

A.push(A.front());

A.pop();

count++;

}

 

}

cout<<count;

return 0;

}
