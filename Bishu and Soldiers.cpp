#include<bits/stdc++.h>

using namespace std;


 

#define MAX_SIZE 10000


 

int main()

{

long long n;

cin>>n;

vector <long long> array;

for(long long i=0;i<n;i++)

{

long long temp;

cin>>temp;

array.push_back(temp);

}

long long Q;

cin>>Q;

while(Q--)

{

long long power;

cin>>power;

long long count=0;

long long powersum = 0;

for(long long i=0;i<array.size();i++)

{

if(power>=array[i]){

powersum = powersum+array[i];

count++;

}

}

cout<<count<<" "<<powersum<<endl;

}


 

return 0;

}
