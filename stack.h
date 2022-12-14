#include <stddef.h>
#include <list>

template <typename E>  // E is the element type.
class Stack {
  public:
    Stack();
    void Push(const E& element);
    E* Pop();  // Returns NULL if the stack is empty.
    size_t size() const;
  private:
    std::list<E> stackList;
};
