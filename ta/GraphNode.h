#include <vector>

using namespace std;

template <class Node_Type> class GraphNode
{
public:
    GraphNode(Node_Type &node_element);
    int getInDegree();
    void incrementInDegree();
    void decrementInDegree();
    bool getVisited();
    void setVisited();
    void addAdjacentNode(GraphNode<Node_Type> &adjacentNode);
private:
    Node_Type element;
    bool isVisited;
    int inDegree;
    vector<GraphNode<Node_Type>> adjacentNodes;
    int totalAdjacent;
};

template <class Node_Type> GraphNode<Node_Type>::GraphNode(Node_Type &node_element)
{
    element = node_element;
    inDegree = 0;
    isVisited = false;
    totalAdjacent = 0;
    adjacentNodes(2);
    //adjacentNodes = new vector<GraphNode<Node_Type>>(2);
}

template <class Node_Type> int GraphNode<Node_Type>::getInDegree()
{
    return inDegree;
}

template <class Node_Type> void GraphNode<Node_Type>::incrementInDegree()
{
    inDegree += 1;
}

template <class Node_Type> void GraphNode<Node_Type>::decrementInDegree()
{
    inDegree -= 1;
}

template <class Node_Type> bool GraphNode<Node_Type>::getVisited()
{
    return isVisited;
}

template <class Node_Type> void GraphNode<Node_Type>::setVisited()
{
    isVisited = true;
}

/*template <class Node_Type> GraphNode<Node_Type>::~GraphNode()
{
    delete adjacentNodes;
    // I've commented this code out. Most resources I've read
    // state that ussing the vector class will manage the heap
    // in the background for us rather than trying to do so
    // ourselvse
}*/