#include <vector>
#include <cassert>

template<typename T>
class Stack {
    private:
      std::vector<T> m_elems;
    
    public:
       void push(T const& elem);
       void pop();
       T const& top() const;
       bool is_empty() const { return m_elems.empty(); }
};

template <typename T>
void Stack<T>::push(T const& elem) { m_elems.push_back(elem); }

template <typename T> 
void Stack<T>::pop() 
{
    assert(!m_elems.empty());
    return m_elems.pop_back();
}

template <typename T>
T const& Stack<T>::top() const 
{
    assert(!m_elems.empty());
    return  m_elems.back();
}
