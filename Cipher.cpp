#include<bits/stdc++.h>

using namespace std;

int main()

{

   string str;

   cin>>str;

   int n,i=0,temp;

   cin>>n;

   while(str[i]!='\0')

   {

       if(isalnum(str[i]))    // if it is alphanumeric than we have to check 3 condition i.e isupper,   islower or isdigit

       {

           if(isupper(str[i]))

           {

               temp=abs(65-int(str[i]))+n;     // 65 is the ASCII value of A

               temp=temp%26;

               cout<<char(65+temp);

           }

           else if(islower(str[i]))

           {

               temp=abs(97-int(str[i]))+n;      // 97 is the ASCII value of a

               temp=temp%26;

               cout<<char(97+temp);

           }

           else

           {

               temp=abs(48-int(str[i]))+n;     // 48 is the ASCII value of 0

               temp=temp%10;

               cout<<char(48+temp);

           }

       }

       else    // this are the symbols which we have to simply print

       {

           cout<<str[i];

       }

       i++;

   }

   return 0;

}
