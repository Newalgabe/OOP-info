#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
    Student student;

    cout << "Enter student information: " << endl;
    student.input();

    cout << "\nIndividual data members: " << endl;
    cout << "First Name: " << student.getName() << endl;
    cout << "Last Name: " << student.getSurname() << endl;
    cout << "Birth date: ";
    student.displayDate();
    cout << "\nPhone number: " << student.getPhone() << endl;
    cout << "City: " << student.getCity() << endl;
    cout << "Country: " << student.getCountry() << endl;
    cout << "University Name: " << student.getUniversityName() << endl;
    cout << "University City: " << student.getUniversityCity() << endl;
    cout << "University Country: " << student.getUniversityCountry() << endl;
    cout << "Group Number: " << student.getGroupNumber() << endl;



    return 0;
}
