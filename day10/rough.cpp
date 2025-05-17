#include <iostream>
using namespace std;
class Student
{
private:
    int rollno;
    string name;
    int Mathsmarks;
    int Physicsmarks;
    int Chemistrymarks;

public:
    Student(int r, string n, int m, int p, int c)
    {
        rollno = r;
        name = n;
        Mathsmarks = m;
        Physicsmarks = p;
        Chemistrymarks = c;
    }

    int total()
    {

        return Mathsmarks + Physicsmarks + Chemistrymarks;
    }

    char grade()
    {
        float average = total() / 3.0;
        if (average > 70)
        {
            return 'A';
        }
        else if (average > 50 && average < 71)
        {
            return 'B';
        }
        else
            return 'C';
    }
};

int main()
{
    int r, m, c, p;
    string n;
    cout << "Enter the roll no: " << endl;
    cin >> r;
    cout << "Enter the Name: " << endl;
    cin >> n;
    cout << "Enter the 3 Subjects marks: " << endl;
    cin >> m >> c >> p;
    // creating object of class student
    Student s(r, n, m, c, p);
    cout << "Total marks = " << s.total() << endl;
    cout << "Grade = " << s.grade();
}