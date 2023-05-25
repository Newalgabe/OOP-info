#include "Point.h"
#include <iostream>
#include <cstdio>

using namespace std;

// Default constructor
Point::Point() {
    x = 0.0;
    y = 0.0;
    z = 0.0;
}

// Accessors
double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

double Point::getZ() const {
    return z;
}

void Point::setX(double xVal) {
    x = xVal;
}

void Point::setY(double yVal) {
    y = yVal;
}

void Point::setZ(double zVal) {
    z = zVal;
}

// Input function
void Point::input() {
    cout << "Enter the coordinates of the point (x, y, z): ";
    cin >> x >> y >> z;
}

// Display function
void Point::display() const {
    cout << "Point coordinates: (" << x << ", " << y << ", " << z << ")" << endl;
}

// Save to file function
void Point::saveToFile(const char* filename) const {
    FILE* file;
    if (fopen_s(&file, filename, "w") == 0) {
        fprintf(file, "%lf %lf %lf\n", x, y, z);
        fclose(file);
        cout << "Data saved to file: " << filename << endl;
    }
    else {
        cout << "Error opening file." << endl;
    }
}

// Load from file function
void Point::loadFromFile(const char* filename) {
    FILE* file;
    if (fopen_s(&file, filename, "r") == 0) {
        fscanf(file, "%lf %lf %lf", &x, &y, &z);
        fclose(file);
        cout << "Data loaded from file: " << filename << endl;
    }
    else {
        cout << "Error opening file." << endl;
    }
}
