#include <iostream>
#include <fstream> //important headerfile for writing the file
using namespace std;

int main()
{
    ofstream ofs("My.Text", ios::trunc);
    ofs << "john" << endl;
    ofs << 25 << endl;
    ofs << "cs" << endl;
    ofs.close();
}
