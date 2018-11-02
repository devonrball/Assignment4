#include <iostream>
#include "DLinkedList.h"
//#include "Node.h"

using namespace std;

template <typename T>
class Queue
{
public:
  Queue();
  ~Queue();
  void enqueue(T data);
  Node<T>* dequeue();
  Node<T>* peek();
  bool isEmpty();
  int getSize(); //okay
  void clear();

private:
  //Node<T> *front;
  //Node<T> *rear;
  DLinkedList<T> myQueue; //might need to be a pointer?
};

//Methods
template <typename T>
Queue<T>::Queue()
{
  myQueue = new DLinkedList<T>();
}

/*template <typename T>
Queue<T>::~Queue()
{

}
*/

template <typename T>
void Queue<T>::enqueue(T data)
{
  myQueue.insertBack(data);
}

template <typename T>
Node<T>* Queue<T>::dequeue()
{
  return myQueue.removeFront();
}

template <typename T>
Node<T>* Queue<T>::peek()
{
  return myQueue.peekFront();
}

template <typename T>
bool Queue<T>::isEmpty()
{
  return myQueue.isEmpty();
}

template <typename T>
int Queue<T>::getSize()
{
  return myQueue.getSize();
}
