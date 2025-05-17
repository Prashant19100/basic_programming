/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1 = "Hello";
    cout<<s1.capacity()<<endl;
    cout<<s1.append(" World");//Appends the characters of C-style string to the end of given string object 
    //and returns reference to the modified string object
    cout<<s1.capacity()<<endl;

}*/

/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1 = "Hello";
    cout<<s1.insert(4," what ")<<endl; //Inserts the character sequence pointed by cstr at the specified location in the string object
    cout<<s1.insert(3, " grapes ",2);//Inserts the substring at specified position in, last 2 means only two character of the new string will add into original string

}*/

/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1 = "Hello bro";
    cout<<s1.replace(3,4,"do")<<endl; //at index  3 we replace 4 characters starting from index 3 with 'do'
}*/

/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1 = "Hello bro";
    cout<<s1.replace(3,4,"do")<<endl; //at index  3 we replace 4 characters starting from index 3 with 'do'
}*/

/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1 = "Hello bro";
    cout<<s1.r(3,4,"do")<<endl; //at index  3 we replace 4 characters starting from index 3 with 'do'
}*/

/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1 = "Hello bro";
    s1.erase();
    cout<<s1<<endl;
}*/

/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1 = "Hello bro";
    cout<<s1.size()<<endl;
    s1.push_back('Z'); //this function is used to add alphabet at the end of the original character
    cout<<s1.size()<<endl;
    cout<<s1<<endl;

}*/

/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1 = "Hello bro";
    cout<<s1.replace(3,4,"do")<<endl; //at index  3 we replace 4 characters starting from index 3 with 'do'
}*/

/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1 = "Hello bro";
    string s2 = "How are you";

    s1.swap(s2);
    cout<<s1<<endl;
}*/

/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s = "Hello world";
    char c[20];
    s.copy(c,s.length()); // this function s.copy use to copy  a string into an array
    cout<<c<<endl;
}*/

/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1 = "Hello bro";
    cout<<s1.find("bro")<<endl;
    cout<<s1.find('r')<<endl;
}*/

/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1 = "Hello bro";
    cout<<s1.rfind("ro")<<endl;//to find the reverse index
    cout<<s1.rfind('b')<<endl;
}*/

/* #include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1 = "How are you";
    cout<<s1.find_first_of("are")<<endl;
    cout<<s1.find_first_of('o')<<endl;
    cout<<s1.find_first_of('o',4)<<endl;
} */

/* #include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1 = "What is this";
    cout<<s1.find_last_of("is")<<endl;
    cout<<s1.find_last_of('h')<<endl;
    cout<<s1.find_last_of('s',11)<<endl;
    
} */

/* #include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str= "Programming";
    cout<<str.substr(3,4);  //print from 3rd position to 7
    cout<<"\n";
} */


#/* include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1= "Hello";
    string str2= "World";
    cout<<str1.compare(str2);  
    cout<<"\n";
} */

// How to iterate a string check below programme

/* #include<iostream>
#include<string>
using namespace std;
int main()
{
    string str ="today";
    string::iterator it;
    for (it=str.begin(); it!=(str.end());it++)
    {
        cout<<*it;
        
    }
}
 */

/* #include<iostream>
#include<string>
using namespace std;
int main()
{
    string str ="today";
    string::reverse_iterator it;
    for (it=str.rbegin(); it!=str.rend();it++)
    {
        *it=*it-32; //converting lowercase to uppercase using ASCII value difference of  32
        cout<<*it;
    }
      
    
}*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str ="today";
    for(int i =0;str[i] != '\0';i++)
    {
        // cout<<str[i];
        str[i]=str[i]-32;
    } 
    cout<<str;
}















