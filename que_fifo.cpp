#include "que_fifo.h"

// template <typename E>  // E is the element type.
// class Queue {
//  public:
//   Queue();
//   void Enqueue(const E& element);
//   E* Dequeue();  // Returns NULL if the queue is empty.
//   size_t size() const;
// };

template <typename E>
Queue<E>::Queue(){
}

template <typename E>
void Queue<E>::Enqueue(const E& element){
  queList.push_front(element);
}

template <typename E>
E* Queue<E>::Dequeue(){
  E* element = NULL;
  if (queList.size()>0) {
    element = &queList.front();
    queList.pop_front();
  }
  return element;
}

template <typename E>
size_t Queue<E>::size() const{
  return queList.size();
}
