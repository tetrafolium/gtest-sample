#include "que_fifo.h"

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
    element = &queList.back();
    // queList.pop_back();
  }
  return element;
}

template <typename E>
size_t Queue<E>::size() const{
  return queList.size();
}
