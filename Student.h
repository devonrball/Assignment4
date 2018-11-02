#include <string>

class Student
{
public:
  Student();
  Student();
  ~Student();
  void timeWaiting();
  void timeAtWindow();


private:
  int arrivalTime;
  int windowTime;
  int timeQueued;
  bool helped;
  bool finished;
};
