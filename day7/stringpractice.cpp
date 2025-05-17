/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[20];
    cout<<"enter your name";
    cin.getline(s,19);
    // cout<<"your name is "<<s;
    cout<<strlen(s);
    return 0;
}*/

/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char *S;
    cout<<"enter name";
    cin>>S;
    cout<<"length of the string is =" <<strlen(S)<<endl;
    return 0;
}*/

/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"enter the string = ";
    getline(cin,str);
    cout<<str<<endl;
    return 0;
}*/

/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1 = "Hello";
    cout<<s1.length()<<endl;
}*/

/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1 = "Hello";
    cout<<s1.size()<<endl; //both size and length are used to find the length of the string

}*/

/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1 = "Hello";
    cout<<s1.capacity()<<endl;
}*/

/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    
    string s1 = "Hello";
    s1.resize(50);   //it will increase the capacity of the string upto 50 characters only if it is not already greater than that
    cout<<s1.capacity()<<endl;
    cout<<s1<<endl;

}*/

/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1 = "Hello";
    cout<<s1.max_size()<<endl;
}*/

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1 = "Hello";
    cout<<s1.length()<<endl;
    s1.clear(); //this function will be clear the string
    cout<<s1.length()<<endl;

    if(s1.empty())
        cout<<"The string is empty.";
    else
        cout<<"The string is not empty.";
}





