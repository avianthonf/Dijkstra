#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include <iostream>
#include "stack.h"

using namespace std;

class Dijkstra
{
    public:
        int** adjacencyMatrix;
        int** weightMatrix;
        int** resultMatrix;
        int* visitedList;
        int size = 0;

        int inputMatrices();
        void displayAdjacency()
        {
            displayMatrix(adjacencyMatrix);
        }
        void displayWeight();
        void displayResult();

    private:
        void init(int n);
        void displayMatrix(int** matrix);
};

#endif