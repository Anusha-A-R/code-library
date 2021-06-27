#include <iostream>

class Node {
  public:
  int data; 
  Node * nextElement; //Pointer to next element
  Node();
};
class LinkedList {
  private:
  Node * head;
  public:
  
  LinkedList();
  bool isEmpty();
  Node * getHead();
  bool printList();
  bool insertAtHead(int value);
  void insertAtTail(int value);
  bool search(int value);
  bool deleteAtHead(int value);
  bool Delete(int value);
};
class Graph {
private:
    int vertices;
    LinkedList* array;

public:
    Graph(int v);

    void addEdge(int source, int destination);

    void printGraph();

    LinkedList* getArray();

    int getVertices();
};
bool checkCycle(Graph g,int vertex, bool* visited, int parent)
{
    // Mark the current vertex as visited
    visited[vertex] = true;

    // Recursive calls for all the vertices adjacent to this vertex
    Node* temp =(g.getArray())[vertex].getHead();



    while (temp != NULL) {
        // If an adjacent is not visited, then make recursive call on the adjacent
        if (!visited[temp->data]) {
            if(checkCycle(g,temp->data,visited,vertex))
                return true;
        }
        else if (temp->data != parent)
            return true;
        //^ If an adjacent is visited and not parent of current
        // vertex, then there is a cycle.
        temp = temp->nextElement;
    }

    return false;
}

bool isTree(Graph g)
{

    bool *visited = new bool[g.getVertices()];
    for (int i = 0; i < g.getVertices(); i++)
        visited[i] = false;


    if (checkCycle(g,0, visited, -1))
        return false;

    for (int i = 0; i < g.getVertices(); i++) {
        if (!visited[i])
            return false;
    }
    delete[] visited;
    visited = NULL;
    return true;
}

int main() {
    Graph g(5);
    g.addEdge(1,0);
    g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(3,4);


    Graph g2(5);
    g2.addEdge(1, 0);
    g2.addEdge(0, 2);
    g2.addEdge(2, 1);
    g2.addEdge(0, 3);
    g2.addEdge(3, 4);


    cout << isTree(g) << endl;
    cout << isTree(g2) << endl;

}