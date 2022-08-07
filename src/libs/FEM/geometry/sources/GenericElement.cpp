/**
 * @file GenericElement.cpp
 * @author Lucas Gasparino
 * @brief Functions that operate on element data.
 * @details This file contains functions that operate on element data,
 * setting all required information to define a single element.
 * The class is inherited by specific geometries, which actually
 * set all the information apart from a couple of specific ones.
 * @version 0.1
 * @date 2022-08-07
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "GenericElement.h"

// Getters
int GenericElement::getNumDims()
{
    return numDims;
}

int GenericElement::getNumNodes()
{
    return numNodes;
}

int GenericElement::getNumEdges()
{
    return numEdges;
}

int GenericElement::getNumFaces()
{
    return numFaces;
}

int GenericElement::getElemOrder()
{
    return elemOrder;
}

int GenericElement::getElemID()
{
    return elemID;
}

// Setters

void GenericElement::setNumDims(int n)
{
    numDims = n;
}

void GenericElement::setNumNodes(int n)
{
    numNodes = n;
}

void GenericElement::setNumEdges(int n)
{
    numEdges = n;
}

void GenericElement::setNumFaces(int n)
{
    numFaces = n;
}

void GenericElement::setElemOrder(int n)
{
    elemOrder = n;
}

void GenericElement::setElemID(int n)
{
    elemID = n;
}