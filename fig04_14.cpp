// Fig. 4.14: fig04_14.cpp
// Create GradeBook object and invoke its determineClassAverage function.
#include"GradeBook.h"

int  main()
{
    // Create GradeBook object myGradeBook and
    // pass course name to constructor
    GradeBook myGradeBook("CS101 Programming");

    myGradeBook.displayMessage(); // display welcome message
    myGradeBook.determineClassAverage(); // find average of 10 grades

    system("pause");
} // end main