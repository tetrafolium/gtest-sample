#include "stack.h"

template <typename E>
Stack<E>::Stack(){
}

template <typename E>
void Stack<E>::Push(const E& element){
  stackList.push_front(element);
}

template <typename E>
E* Stack<E>::Pop(){
  E* element = NULL;
  if (stackList.size()>0) {
    element = &stackList.front();
    stackList.pop_front();
  }
  return element;
}

template <typename E>
size_t Stack<E>::size() const{
  return stackList.size();
}
