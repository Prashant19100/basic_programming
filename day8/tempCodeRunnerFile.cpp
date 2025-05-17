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

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1 = "Hello bro";
    s1.erase();
    cout<<s1<<endl;
}







