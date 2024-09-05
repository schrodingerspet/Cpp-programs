#include <iostream>
using namespace std;

class Student
{
    int roll;         // Student roll number
    string name;      // Student name
    float percentage; // Student percentage
    string cls;       // Student class
    char div;         // Student division

public:
    static int stdinfo; // Static variable to keep track of the number of Student objects created

    // Static function to output the number of students created using stdinfo
    static void count()
    {
        cout << "Student count is: " << stdinfo << endl;
    }

    // Default constructor
    Student()
    {
        roll = 1;
        name = "Gopal";
        percentage = 84.3;
        cls = "SE";
        div = 'A';
        ++stdinfo; // Increment the static data member to keep track of the number of Student objects created
    }

    // Member function to take input from user
    void getdata()
    {
        cout << "\nEnter details (Roll No, Name, Percentage, Class, Division): " << endl;
        cin >> roll >> name >> percentage >> cls >> div;
    }

    // Friend function to display the details of the Student object
    friend void display(Student s);
};

// Initialize the static member variable
int Student::stdinfo = 0;

// Definition of the friend function to display Student details
void display(Student s)
{
    cout << "Roll no is: " << s.roll << endl;
    cout << "Name is: " << s.name << endl;
    cout << "Percentage is: " << s.percentage << endl;
    cout << "Class is: " << s.cls << endl;
    cout << "Division is: " << s.div << endl;
}

int main()
{
    Student s1;   // Create the first Student object
    display(s1);  // Display the details of the first Student object
    s1.getdata(); // Take input for the first Student object
    display(s1);  // Display the updated details of the first Student object

    // Call the static function using the class name to display the count of students
    Student::count();

    return 0;
}
