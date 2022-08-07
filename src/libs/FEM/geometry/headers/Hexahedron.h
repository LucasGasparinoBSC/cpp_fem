/**
 * @file Hexahedron.h
 * @author Lucas Gasparino
 * @brief Defines a hexahedron-shaped element.
 * @version 0.1
 * @date 2022-08-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef HEXAHEDRON_H
#define HEXAHEDRON_H

#include "GenericElement.h"

class Hexahedron : public GenericElement
{
    private:
        int flagSpectral;
    protected:
        std::vector<int> listNodes;
        std::vector<float> quadraturePoints;
        std::vector<float> quadratureWeights;
        std::vector<float> N_gp;
        std::vector<float> dN_gp;
        std::vector<float> scalarNodeVal;
        std::vector<float> vectorNodeVal;
    public:
        // Constructor
        Hexahedron(int n);
        // Destructor
        ~Hexahedron();
        // Getters
        // Setters
        void setFlagSpectral(int n);
        void setListNodes(std::vector<int> list);
        void setQuadratureInfo();
        void setShapeFunctionsAndDerivatives();
        void setNodalValues(std::vector<float> scalar, std::vector<float> vector);
};

#endif // !HEXAHEDRON_H