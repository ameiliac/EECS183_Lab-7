/**
 * test.cpp
 *
 * EECS 183
 * Lab 7
 *
 * Ameilia Chung
 * ameiliac
 *
 * Testing of the point functions
 */

#include <iostream>
#include <fstream>
using namespace std;

#include "Point.h"

void test_Point();

int main() {
    test_Point();

    return 0;
}

void test_Point() {
    Point pt1;
    pt1.setX(15);
    cout << "Expected: (15,0), actual :" << pt1 << endl;
        
    ifstream input_file;
    input_file.open("data1.txt");
    pt1.read(input_file);
    cout << "Expected: (42,7), actual :" << pt1 << endl;

    // Start of created test cases
    Point pt2;
    pt2.read(input_file);
    cout << "Expected: (50,-7), actual :" << pt2 << endl;
  
    cout << endl;
    cout << "Testing Set Y" << endl;

    // Set negative Y
    Point pt3;
    pt3.setX(0);
    pt3.setY(-5);
    cout << "Expected: (0,0), actual :" << pt3 << endl;

    // Set positive Y
    Point pt11;
    pt11.setX(7);
    pt11.setY(6);
    cout << "Expected: (7,6), actual :" << pt11 << endl;

    // Set stupid large Y
    Point pt12;
    pt12.setX(5000000);
    pt12.setY(20000);
    cout << "Expected: (99,99), actual :" << pt12 << endl;

    cout << endl;

    // Set negative X
    Point pt4;
    pt4.setX(-15);
    pt4.setY(0);
    cout << "Expected: (0,0), actual :" << pt4 << endl;
    cout << endl;

    cout << "Now testing Get X";

    // Get Negative X
    int val = pt4.getX();
    cout << "Expected: 0, actual :" << val << endl;

    // Get Positive X
    val = pt11.getX();
    cout << "Expected: 7, actual :" << val << endl;

    // Get stupid large X 
    val = pt12.getX();
    cout << "Expected: 99, actual :" << val << endl;


    // Non-Default constructor
    Point pt5;
    pt5 = Point(5, 6);
    cout << "Expected: (5,6), actual :" << pt5 << endl;

    Point pt6;
    pt6 = Point(-5, 6);
    cout << "Expected: (0,6), actual :" << pt6 << endl;



    return;
}
