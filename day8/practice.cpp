// find the length of the string
/* #include<iostream>
#include<string>
using namespace std;
int main()
{
   string str ="welcome";
   int count=0;
   for(int i=0;str[i]!='\0';i++)
   {
    count++;
   }
   cout<<"Length is "<<count<<endl;
} */

// change upper case to lower case

/* #include<iostream>
#include<string>
using namespace std;
int main()
{
   string str ="WELCOME";
   for(int i=0;str[i]!='\0';i++)
   {
    str[i]=str[i]+32; 
   }
   cout<<str<<endl;
} */

// change lower case to upper case
#/* include<iostream>
#include<string>
using namespace std;
int main()
{
   string str ="WelCOmE5";
   for(int i=0;str[i]!='\0';i++)
   {
    
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32; 

        }
    }
        cout<<str<<endl;
}  */



