#include "Student.h"


void Student::input()
{
    cout << "Enter First Name: "; cin >> name;
    cout << "Enter Last Name: "; cin >> surname;
    cout << "Enter Birth day: "; cin >> day;
    cout << "Enter Birth month: "; cin >> month;
    cout << "Enter Birth year: "; cin >> year;
    cout << "Enter Phone number: "; cin >> phone;
    cout << "Enter City: "; cin >> city;
    cout << "Enter Country: "; cin >> country;
    cout << "Enter University Name: "; cin >> university_name;
    cout << "Enter University City: "; cin >> university_city;
    cout << "Enter University Country: "; cin >> university_country;
    cout << "Enter Group Number: "; cin >> group_number;
}

char* Student::getName()
{
    return name;
}

char* Student::getSurname()
{
    return surname;
}

bool Student::isValidDate()
{
    bool isValid = true;

    if (year < 1940 || year > 2023)
    {
        cout << "Incorrect data";
        isValid = false;
    }
    else if (month < 1 || month > 12)
    {
        cout << "Incorrect data";
        isValid = false;
    }
    else
    {
        int daysInMonth = 31;
        if (month == 2)
        {
            daysInMonth = 28;
            bool isLeapYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
            if (isLeapYear)
            {
                daysInMonth = 29;
            }
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            daysInMonth = 30;
        }

        if (day < 1 || day > daysInMonth)
        {
            cout << "Incorrect data";
            isValid = false;
        }
    }

    return isValid;
}



void Student::displayDate()
{
    if (isValidDate())
    {
        cout << day << "/" << month << "/" << year << endl;
    }
}

char* Student::getPhone()
{
    return phone;
}

char* Student::getCity()
{
    return city;
}

char* Student::getCountry()
{
    return country;
}

char* Student::getUniversityName()
{
    return university_name;
}

char* Student::getUniversityCity()
{
    return university_city;
}

char* Student::getUniversityCountry()
{
    return university_country;
}

char* Student::getGroupNumber()
{
    return group_number;
}