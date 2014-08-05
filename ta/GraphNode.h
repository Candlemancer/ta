template <class T> class GraphNode
{
public:
    GraphNode(T &nodeElement);
    int getInDegree();
    void incrementInDegree();
    bool getVisited();
    void setVisited();
private:
    T element;
    bool isVisited;
    int inDegree;
};

template <class T> GraphNode<T>::GraphNode(T &nodeElement)
{
    element = nodeElement;
    inDegree = 0;
    isVisited = false;
}

template <class T> int GraphNode<T>::getInDegree()
{
    return inDegree;
}

template <class T> void GraphNode<T>::incrementInDegree()
{
    inDegree += 1;
}

template <class T> bool GraphNode<T>::getVisited()
{
    return isVisited;
}

template <class T> void GraphNode<T>::setVisited()
{
    isVisited = true;
}