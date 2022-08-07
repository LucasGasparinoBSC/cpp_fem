#include <iostream>
#include <math.h>
#include "Hexahedron.h"

// Constructor
Hexahedron::Hexahedron(int n)
{
    // Set the number of dimensions
    numDims = 3;
    // Set the number of edges
    numEdges = 12;
    // Set the number of faces
    numFaces = 6;
    // Set element order
    elemOrder = n;
    // Set the number of nodes
    numNodes = (elemOrder + 1) * (elemOrder + 1) * (elemOrder + 1);
}

// Destructor
Hexahedron::~Hexahedron()
{
}

// Getters

// Setters
// Set the spectral flag to true or false
void Hexahedron::setFlagSpectral(int n)
{
    flagSpectral = n;
}

// Set the list of nodes
void Hexahedron::setListNodes(std::vector<int> list)
{
    for (int i = 0; i < numNodes; i++)
    {
        listNodes.push_back(list[i]);
    }
}

// Set the coordinates of the quadrature points
void Hexahedron::setQuadratureInfo()
{
    std::cout << "Setting the quadrature info..." << std::endl;
}