#ifndef STACK_H
# define STACK_H

#include <stack>

class Stack {
private:
    std::stack<int> data;

    Stack( void ) = default;
    Stack( const Stack& ) = default;
    Stack& operator=( const Stack& ) = default;

public:
    ~Stack( void ) = default;
    
    static Stack init(void) {
        return Stack();
    }

    void push(int value) {
        data.push(value);
    }

    void pop(void) {
        data.pop();
    }

    int peek(void) {
        return data.top();
    }

};

#endif