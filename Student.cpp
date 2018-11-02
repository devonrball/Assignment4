#include "Student.h"

using namespace std;

Student::Student()
{
  arrivalTime = 0;
  windowTime = 0;
  timeQueued = 0;
  helped = false;
  finished = false;
}

Student::Student(int x int y)
{
  arrivalTime = x;
  windowTime = y;
  timeQueued = 0;
  helped = false;
  finished = false;
}

void Student::timeWaiting()
{
    if(!this->helped){
      this->timeQueued = this->timeQueued + 1;
    }

    return;
}

void Student::timeAtWindow()
{
  if(this->helped){
    this->windowTime = this->windowTime - 1;
  }
}
