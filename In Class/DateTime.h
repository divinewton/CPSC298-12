/*
Name: Divi Newton
Student ID: 2440117
Email: dnewton@chapman.edu
Class Section: CPSC-298-12
In-class practice for .h files
*/

#ifndef DATETIME_H
#define DATETIME_H

#include <string>
using namespace std;

class DateTime{
  public:
  DateTime(); // constructor
  virtual ~DateTime(); // destrucroe
  void setTime(int hours, int minutes, int seconds); // sets the hours, minutes, and days to specified values
  void setDate(int day, int month, int year); // sets day, month, and year with specified values
  string getTime(); // returns a string of the time (with hours, minutes and seconds included)
  string getDate(); // returns a string of the date (with month, day, and year included)
  int numDaysUntilDate(int futureDay, int futureMonth, int futureYear); // returns an int of the number of days until the specified date at futureDay, futureMonth, futureYear

  private:
  int day;
  int month;
  int year;
  int hours;
  int minutes;
  int seconds;
};

#endif