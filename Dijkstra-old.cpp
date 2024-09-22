#include <iostream>
using namespace std;

#include "stack.h"



int inputMatrices(int** adjacencyMatrix, int** weightMatrix)
{
  int n;
  cout << "Enter number of nodes:";
  cin >> n;
  
  adjacencyMatrix = new int*[n];
  weightMatrix = new int*[n];
  
  for (int i = 0; i < n; i++)
  {
    adjacencyMatrix[i] = new int[n];
    weightMatrix[i] = new int[n];
  }
  char choice;
  
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      adjacencyMatrix[j][j] = 0;
      
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
          weightMatrix[i][j] = 0;
        }
      }
    }
  }
  return n;
}

bool computeResult(int** adjacencyMatrix, int** weightMatrix, int** resultMatrix)
{
  int start;
  cout << "Enter starting node number: ";
  cin >> start;
  start--;
  
  int nAdj[start];
  for (int i = 0; i < start; i++)
  {
    if (adjacencyMatrix[start][i] == 1)
    {
      
    }
  }
  return true;
}

int main()
{
  int** adjacencyMatrix;
  int** weightMatrix;
  int* visited;
  int** resultMatrix;
  
  int n;
  
  Stack x(5);
  x.push(2);
  x.push(5);
  x.push(4);
  
  x.sortAscending();
  
  cout << x.pop() << x.pop() << x.pop();
  

  n = inputMatrices(adjacencyMatrix, weightMatrix);
  
  
  
  return 0;
}