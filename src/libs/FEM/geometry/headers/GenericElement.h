/**
 * @file GenericElement.h
 * @author Lucas Gasparino
 * @brief Definitions of a basic Finite Element.
 * @details This file contains the definitions of a basic Finite Element.
 * It ssets the number of nodes, the element dimension, the number of
 * faces annd edges, as well as the element order. Specific geometries
 * will inherit from this class.
 * @version 0.1
 * @date 2022-08-07
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef GENERICELEMENT_H
#define GENERICELEMENT_H

#include <vector>

class GenericElement
{
private:
    int elemID;
protected:
    // Basic element data
    int numDims;
    int numNodes;
    int numEdges;
    int numFaces;
    int elemOrder;
    float charSize;
    float elemVolume;
    float detJacobian;
    std::vector<float> jacobian;
    std::vector<float> invJacobian;
public:
    // Getters
    int getNumDims();
    int getNumNodes();
    int getNumEdges();
    int getNumFaces();
    int getElemOrder();
    int getElemID();
    // Setters
    void setNumDims(int n);
    void setNumNodes(int n);
    void setNumEdges(int n);
    void setNumFaces(int n);
    void setElemOrder(int n);
    void setElemID(int n);
};

#endif // !GENERICELEMENT_H