#include <iostream>
#include <string>
using namespace std;

int main()
{

    string names[] = {"Arham", "Samad", "Abdullah"};
    int rollno[] = {101, 102, 103};

    for (int i = 0; i < 3; i++)
    {
        cout << "Name of Student is " << names[i] << " Having roll no " << rollno[i] << "." << endl;
    }
    
    return 0;
}