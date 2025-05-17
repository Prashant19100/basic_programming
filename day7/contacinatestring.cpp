/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]="Good";
    char s2[20]="Morning";
    strcat(s1,s2);//to concatanetad(add) two string
    cout<<"concatenated string is = "<<s1;
    return 0;
    
}*/

/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]="Good";
    char s2[20]="Morning";
    strncat(s1,s2,4);//to add  only first four characters of second string to the first
    cout<<"concatenated string is = "<<s1;
    return 0;
    
}*/

/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]="Good";
    char s2[20]=" ";
    strcpy(s2,s1);//to copy one string to another
    cout<<s2;
    return 0;
    
}*/

/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]="Good";
    char s2[20]=" ";
    strncpy(s2,s1,2);//to copy one string to another but only two alphabets
    cout<<s2;
    return 0;
    
}*/

/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]="235";
    char s2[20]="54.78";
    long int x = strtol(s1,NULL,10); //converts a string into integer
    float y = strtof(s2,NULL);      //converts a string into float
    cout<<x + 10<<endl<<y - 2<<endl;
    return 0;
    
}*/

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]="x=10;y=20;z=30";
    char *token;
    token = strtok(s1,";");   /*strtok is used for breaking up the string on the basis of "=" and it returns pointer pointing to next substring after each delimiter */
      //break the string at "=" and give pointer to next substring
    while(token != NULL)
    {   
        cout<<token<<endl;
        token = strtok(NULL,";"); //give NULL as first argument so that it takes the last occurrence of delimiter       
        

    }
    return 0;
}



