#include <iostream>
using namespace std;

class Stack
{
  private:
  int index= -1;
  
  public:
  int* list;
  Stack(int n)
  {
    list = new int[n];
  }
  
  void push(int n)
  {
    list[++index] = n;
  }
  
  int pop()
  {
    if (index > -1)
    {
      return list[index--];
    }
    else
    {
      return 0;
    }
  }
  
  int peek()
  {
    if (index > -1)
    {
      return list[index];
    }
    else {
      return 0;
    }
  }
  
  void sortAscending()
  {
    int *arr = list;
    int n = index;
    
for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        /* Move elements of arr[0..i-1], that are
           greater than key, to one position ahead
           of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
  }
  
};

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