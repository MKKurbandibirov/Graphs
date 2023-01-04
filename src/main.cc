#include <iostream>
#include "graph/s21_graph.h"
#include "graph_algorithms/stack.h"
#include "graph_algorithms/queue.h"

int main() {
    // Graph test;

    // test.loadGraphFromFile("testGraph");

    // test.exportGraphToDot("result");

    // std::cout << test;

    Stack stk = Stack::init();

    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);

    std::cout << stk.peek() << " ";
    stk.pop();
    std::cout << stk.peek() << " ";
    stk.pop();
    std::cout << stk.peek() << " \n";

    std::cout << "-------------------------------------------\n";

    Queue que = Queue::init();

    que.push(1);
    que.push(2);
    que.push(3);
    que.push(4);

    std::cout << que.peek() << " ";
    que.pop();
    std::cout << que.peek() << " ";
    que.pop();
    std::cout << que.peek() << " \n";

    return 0;
}
