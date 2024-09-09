#include <iostream>
#include <fstream> //for file operation
using namespace std;

int main()
{
    ofstream file("example.txt"); // create and opens file

    if (file.is_open())
    {
        file << "Hello, this is a created file";

        file.close();
        cout << "File created and written successfully.\n";
    }
    else
    {
        cout << "Unable to create file\n";
    }

    return 0;
}
