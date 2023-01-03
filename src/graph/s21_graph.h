#ifndef S21_GRAPH_H
# define S21_GRAPH_H

#include <vector>
#include <string>
#include <fstream>
#include <iostream>

class Graph {
private:
    std::vector<std::vector<int> > adj_matrix;

public:
    Graph( void ) = default;
    Graph( std::vector<std::vector<int> >& );
    Graph( const Graph& ) = default;
    Graph& operator=( const Graph& ) = default;
    ~Graph( void ) = default;

    std::vector<std::vector<int> > getMatrix( void ) const;
    void setMatrix( std::vector<std::vector<int> >& );

    void loadGraphFromFile( std::string );
    void exportGraphToDot( std::string );

};

std::ostream& operator<<( std::ostream&, const Graph& );

#endif
