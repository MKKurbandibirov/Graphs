#ifndef QUEUE_H
# define QUEUE_H

# include <queue>

class Queue {
private:
    std::queue<int> data;

    Queue( void ) = default;
    Queue( const Queue& ) = default;
    Queue& operator=( const Queue& ) = default;

public:
    ~Queue( void ) = default;

    static Queue init(void) {
        return Queue();
    }

    void push(int value) {
        data.push(value);
    }

    void pop(void) {
        data.pop();
    }

    int peek(void) {
        return data.front();
    }

};

#endif