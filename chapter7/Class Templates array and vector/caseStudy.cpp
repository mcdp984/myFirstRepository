#include <array>
#include "GradeBook.h"
using namespace std;

int main() {
    const array<int, GradeBook::students> grades{
        87, 68, 94, 100, 83, 78, 85, 91, 76, 87};
    string courseName{"CS101 Introduction to C++ Programming"};

    GradeBook myGradeBook(courseName, grades);
    myGradeBook.displayMessage();
    myGradeBook.processGrades();
}

