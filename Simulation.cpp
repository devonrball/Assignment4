#include "Simulation.h"

using namespace std;

Simulation::Simulation()
{
  okay = true;
  timeRun = 0;
}


Simulation::Simulation(string file)
{
  okay = true;
  timeRun = 0;

  runSim(file);
}


Simulation::~Simulation()
{ }


void Simulation::runSim(string file)
{
  //future updates may require adjustments of runSim() for memory management
  userInput.specifyFile(file);

  if(lines <= 0)
    okay = false;

  if(okay)
  {
    lines = userInput.getNumOfLines();
    int counter = 0;

    fileArr = new string[lines];

    for(int i = 0; i < lines; i++){
      fileArr = "";
      while(userInput.accessLines() != '\n'){
        fileArr[i] += userInput.accessLines();
        counter++;
      } //end of valid readfile statement
      counter++;
    } // end of forloop
  }// end of 1st if-okay statement

  if(okay = true){
    if(stoi(fileArr[0] >= 1))
    {
      openWindows = stoi(fileArr[0]);
      windowRow = new Windows[openWindows];
      for(int i = 0; i < openWindows; i++)
        windowRow[i].isIdle = false;
    }//end of ifstatement verifying there is atleast one window open
  }// end of 2nd if-okay statement
  else{
    okay = false;
    cout << "The file specified did not contain a valid number of open windows."
      << " It should be a positive integer. Check the file and run again.\n";
  }

  for(int i = 1; i < (userInput.getNumOfLines()-1);i++)
  {
    int numOfStudents = stoi(fileArr[i]);
    int t = stoi(fileArr[i++]);

    for(int j = 0; j < numOfStudents; j++)
    {
      if(stoi(fileArr[i]) > 0){
        studentsWaiting
      }
    }

  }//end of ifstatement creating the queue of students
}
