#include "FileReader.h"
#include "Windows.h"
#include "Stats.h"
#include "Queue.h"

using namespace std;

class Simulation
{
public:
  Simulation();
  Simulation(string file);
  ~Simulation();

  void runSim(string file);
  void math(); //calcutations

private:
  bool okay;
  string *fileArr;
  Windows *windowRow;
  FileReader userInput;
  int timeRun;
  int openWindows;
  
  Queue<Student> studentsWaiting;
  Queue<Student> studentsDone;
  Stats<Student> studentStats;
  Stats<Windows> windowStats;
};
