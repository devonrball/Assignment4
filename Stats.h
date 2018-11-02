#include <iostream>

using namespace std;

template <typename T>
class Stats
{
public:
  Stats();
  Stats(int x);
  ~Stats();

  //int getSize();
  T calcMean();
  T calcMedian();
  T calcMax();

  T* data;
private:
  int size;
};

template <typename T>
Stats::Stats()
{
  size = 0;
}


template <typename T>
Stats::Stats(int x)
{
  size = x;
  data = new T[size];
}


template <typename T>
Stats::~Stats()
{
  for(int i = 0; i < size; i++)
    data[i] = 0;
  delete data;
}


template <typename T>
T Stats::calcMean()
{
  double total = 0;

  for(int i = 0; i < size; i++)
    sum = sum + data[i];

  return (sum / size);
}


template <typename T>
T Stats::calcMedian()
{
  return data[size/2];
}


template <typename T>
T Stats::calcMax()
{
  T max;

  for(int i = o; i < size; i++){
    if(data[i] > max)
      max = data[i];
  }
  return max;
}
