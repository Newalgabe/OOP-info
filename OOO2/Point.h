#pragma once
#include <iostream>
using namespace std;

class Student
{
public:
    char name[50];
    char surname[50];
    int day;
    int month;
    int year;
    char phone[20];
    char city[50];
    char country[50];
    char university_name[100];
    char university_city[50];
    char university_country[50];
    char group_number[20];

    void input();
    char* getName();
    char* getSurname();
    bool isValidDate();
    void displayDate();
    char* getPhone();
    char* getCity();
    char* getCountry();
    char* getUniversityName();
    char* getUniversityCity();
    char* getUniversityCountry();
    char* getGroupNumber();
};
