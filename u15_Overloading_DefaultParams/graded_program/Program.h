#ifndef _PROGRAM
#define _PROGRAM

#include "School.h"

void Program();

void Register( Course& course, Student* student );
void Register( Course& course, Teacher* teacher );

void Display( const Student& student );
void Display( const Teacher& teacher );
void Display( const Course& course );

#endif
