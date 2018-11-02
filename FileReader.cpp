#include "FileReader.h"

using namespace std;

FileReader::FileReader()
{
  file = "\n";
  readLines = "";
  numOfLines = 0;
}


FileReader::FileReader(string fileName)
{
  file = fileName;
  readLines();
}


FileReader::~FileReader()
{
  infile.close();
}


void FileReader::readsLines()
{
  string someLine;
  infile.open(file);

  if(infile)
  {
    while(getline(infile, line)){
      readLines += line;
      numOfLines++;
    }
  }
  else{
    cout << "Your file was not found. Make sure that the file is in the local "
      << "directory or that you properly specified the filepath.\n";
  }
}


void FileReader::specifyFile(string filename)
{
    file = filename;
    readsLines();
}


string FileReader::accessLines()
{
  return readLines;
}

int FileReader::getNumOfLines()
{
  return numOfLines;
}
