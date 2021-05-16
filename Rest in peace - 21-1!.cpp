#include<iostream>

using namespace std;

int main()

{

int testcase,num;

int a=1,b=2,st,ca,cb,f=0;

cin>>testcase;

while(testcase--)

{

cin>>num;

st=num;

while(st!=0)

{

ca=st%10;

st=st/10;

cb=st%10;

if(ca==1 && cb==2)

{

f=1;

break;

}

}


 

if(num % 21==0 || f==1)

cout<<"The streak is broken!"<<endl;


 

else

cout<<"The streak lives still in our heart!"<<endl;

f=0;

}

}
