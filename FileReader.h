#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class FileReader
{
public:
  FileReader();
  FileReader(string fileName);
  ~FileReader();

  void readsLines();
  void specifyFile(string filename);
  string accessLines();
  int getNumOfLines();


private:
  ifstream infile;
  string file;
  string readLines;
  int numOfLines;
};
