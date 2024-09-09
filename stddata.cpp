#include <iostream>
#include <fstream>

using namespace std;
class Student
{
    int roll_no;
    string name;
    char div;

public:
    void getData()
    {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter student roll no: ";
        cin >> roll_no;
        cout << "Enter student div: ";
        cin >> div;
    }
    void showData()
    {
        cout << "Name of student is: " << name << endl;
        cout << "Roll no. of student is: " << roll_no << endl;
        cout << "Division of student is: " << div << endl;
    }

    void writedata(ofstream &file)
    {
        file << "-----------------------------" << endl;
        file << "Name of student is: " << name << endl;
        file << "Roll no. of student is: " << roll_no << endl;
        file << "Division of student is: " << div << endl;
        file << "-----------------------------" << endl;
    }
};
int main()
{
    Student students[4];
    ofstream file;
    int i, n;

    file.open("Student_Data.txt");

    cout << "Enter the no. of students: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter information of student-" << (i + 1) << ": \n";
        students[i].getData();
        students[i].writedata(file);
    }

    file.close();

    ifstream infile("Student_Data.txt");
    string line;

    cout << "\nInformation of student is :\n";
    while (getline(infile, line))
    {
        cout << line << endl;
    }

    infile.close();
    return 0;
}
