template <class Node_Type> class GraphNode
{
public:
    GraphNode(Node_Type &node_element);
    int getInDegree();
    void incrementInDegree();
    bool getVisited();
    void setVisited();
private:
    Node_Type element;
    bool isVisited;
    int inDegree;
};

template <class Node_Type> GraphNode<Node_Type>::GraphNode(Node_Type &node_element)
{
    element = node_element;
    inDegree = 0;
    isVisited = false;
}

template <class Node_Type> int GraphNode<Node_Type>::getInDegree()
{
    return inDegree;
}

template <class Node_Type> void GraphNode<Node_Type>::incrementInDegree()
{
    inDegree += 1;
}

template <class Node_Type> bool GraphNode<Node_Type>::getVisited()
{
    return isVisited;
}

template <class Node_Type> void GraphNode<Node_Type>::setVisited()
{
    isVisited = true;
}