#include <iostream>
#include "s21_graph.h"

int main() {
    Graph test;

    test.loadGraphFromFile("testGraph");

    test.exportGraphToDot("result");

    std::cout << test;

    return 0;
}
