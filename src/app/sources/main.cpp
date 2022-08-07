#include <iostream>
#include <vector>
#include "Hexahedron.h"

int main(int argc, char const *argv[])
{
    Hexahedron hex(1);
    std::cout << "Number of nodes: " << hex.getNumNodes() << std::endl;
    std::cout << "Number of edges: " << hex.getNumEdges() << std::endl;
    std::cout << "Number of faces: " << hex.getNumFaces() << std::endl;
    return 0;
}
