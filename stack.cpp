#include "stack.h"

template <typename E>
Stack<E>::Stack(){
}

template <typename E>
void Stack<E>::Push(const E& element){
  queList.push_front(element);
}

template <typename E>
E* Stack<E>::Pop(){
  E* element = NULL;
  if (queList.size()>0) {
    element = &queList.front();
    queList.pop_front();
  }
  return element;
}

template <typename E>
size_t Stack<E>::size() const{
  return queList.size();
}
