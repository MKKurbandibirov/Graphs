#include "s21_graph.h"

Graph::Graph(std::vector<std::vector<int> >& matrix) {
    adj_matrix = matrix;
}

std::vector<std::vector<int> > Graph::getMatrix(void) const {
    return adj_matrix;
}

void Graph::setMatrix(std::vector<std::vector<int> >& matrix) {
    adj_matrix = matrix;
}

void Graph::loadGraphFromFile(std::string filename) {
    std::ifstream file(filename);
    
    if (!file.is_open()) {
        throw std::runtime_error("could not open the file: " + filename);
    }

    int size;
    file >> size;
    adj_matrix.assign(size, std::vector<int>(size, 0));

    int s;
    int curr_row = 0;
    for(file >> s; !file.eof(); file >> s, ++curr_row) {
        int row = curr_row % size, col = curr_row / size;
        adj_matrix[row][col] = s;
    }

    file.close();
}

void Graph::exportGraphToDot(std::string filename) {
    std::ofstream file(filename+".dot");

    if (!file.is_open()) {
        throw std::runtime_error("could not open/create the file: " + filename);
    }

    file << "graph " + filename + " {\n";

    for (std::size_t i = 0; i != adj_matrix.size(); ++i) {
        file << "\t" << i+1 << ";\n";
    }

    for (std::size_t i = 0; i != adj_matrix.size(); ++i) {
        for (std::size_t j = i + 1; j != adj_matrix.size(); ++j) {
            if (adj_matrix[i][j] != 0) {
                file << "\t" << i+1 << " -- " << j+1 << ";\n";
            }
        }
    }

    file << "}\n";

    file.close();
}


std::ostream& operator<<(std::ostream& out, const Graph& graph) {
    for (const auto& row : graph.getMatrix()) {
        for (const auto& elem : row) {
            out << elem << " ";
        }
        out << "\n";
    }
    return out;
}
