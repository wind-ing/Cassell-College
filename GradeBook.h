//4-12
#ifndef GRADEBOOK_H_INCLUDED
#define GRADEBOOK_H_INCLUDED

#include <string>
using namespace std;
class GradeBook
{
public :
    GradeBook(string);
    void setCourseName(string);
    string getCourseName();
    void displayMessage();
    void determineClassAverage();//加入了计算平均成绩的函数
private:
    string courseName;
};

#endif // GRADEBOOK_H_INCLUDED
