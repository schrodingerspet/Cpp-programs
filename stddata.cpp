#include <iostream>
#include <fstream>
using namespace std;
class student
{
    int roll_no;
    string name;
    char div;

public:
    void getdata()
    {
        cout << "enter student name :";
        cin >> name;
        cout << "enter student roll no :";
        cin >> roll_no;
        cout << "enter student div :";
        cin >> div;
    }
    void showdata()
    {
        cout << "Name of student is :" << name << endl;
        cout << "Roll no. of student is :" << roll_no << endl;
        cout << "Division of student is :" << div << endl;
    }
};
int main()
{
    student o[4];
    fstream f;
    int i, n;
    f.open("Student.txt");
    cout << "Enter the no. of students :";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter information of student- \n";
        o[i].getdata();
        f.write((char *)&o[i], sizeof o[i]);
    }
    f.close();
    f.open("Student.txt", ios::in);
    cout << "Information of student is :\n";
    for (i = 0; i < n; i++)
    {
        f.write((char *)&o[i], sizeof o[i]);
        o[i].showdata();
    }
    f.close();
    return 0;
}
