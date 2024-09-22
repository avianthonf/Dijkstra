#include "Dijkstra.h"
#include <iostream>

using namespace std;

void Dijkstra::init(int n)
{
    size = n;

    // Create dynamic 2-D arrays

        // Create an array of n pointers
    adjacencyMatrix = new int*[size];
    weightMatrix = new int*[size];
    resultMatrix = new int*[size];
        // Each pointer to point to array of n integers
    for (int i = 0; i < size; i++)
    {
        adjacencyMatrix[i] = new int[size];
        weightMatrix[i] = new int[size];
        resultMatrix[i] = new int[size];
    }

}

int Dijkstra::inputMatrices()
{
    int n;
    cout << "Enter number of nodes:";
    cin >> n;

    init(n);
    
    char choice;
    
    for (int i = 0; i < n; i++)
    {
        adjacencyMatrix[i][i] = 1;
        weightMatrix[i][i] = 0;

        for (int j = 0; j < n; j++)
        {   
            if (i < j)
            {
                cout << "Is node-" << i+1 << " connected to node-" << j+1 << "? (y/n) : ";
                cin >> choice;
                
                if  (choice == 'y')
                {
                    adjacencyMatrix[i][j] = 1;
                    adjacencyMatrix[j][i] = 1;
                    cout << "Enter weightage of the connection: ";
                    cin >> weightMatrix[i][j];
                    weightMatrix[j][i] = weightMatrix[i][j];
                }
                else {
                    adjacencyMatrix[i][j] = 0;
                    adjacencyMatrix[j][i] = 0;
                    weightMatrix[i][j] = 0;
                    weightMatrix[j][i] = 0;
                }
            }
        }
    }
    return n;
}

void Dijkstra::displayMatrix(int** matrix)
{
    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {
            cout << matrix[i][j] << "\t";
        }

        cout << endl;
    }
}