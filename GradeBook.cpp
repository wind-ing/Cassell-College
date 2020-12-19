//4-13
#include<iostream>
#include<iomanip>
using namespace std;

#include "GradeBook.h"

GradeBook::GradeBook(string name)
{
    setCourseName(name);
}

void GradeBook::setCourseName(string name)//用设置函数确认数据的有效性
{
    if(name.length() <= 25)
        courseName = name;
    else
    {
        courseName = name.substr(0, 25);
        cout << "Name \"" << name << "\"n exceeds maximum length(25).\n"
             <<"Limiting courseName to first 25 characters.\n" <<endl;
    }
}

string GradeBook::getCourseName()
{
    return courseName;
}

void GradeBook::displayMessage()
{
    cout << "welcome to the grade book for\n" << getCourseName() << "!\n" << endl;
}

void GradeBook::determineClassAverage()
{
    int total;
    int gradeCounter;
    int grade;
    double average;

    total = 0;
    gradeCounter = 0;//计数器控制的循环

    cout << "Enter grade or -1 to quit: ";
    cin >> grade;

    while(grade != -1)
    {
        total = total + grade;
        gradeCounter = gradeCounter + 1;

        cout << "Enter grade or -1 to quit: ";
        cin >> grade;
    }
    if(gradeCounter != 0)
    {
        average = static_cast<double>(total) / gradeCounter;

        cout << "\nTotal of all " << gradeCounter << " grades entered is " << total << endl;
        cout << "Class average is " << setprecision(2) << fixed << average << endl;
    }
    else
        cout << "No grades were entered" << endl;
}

