template <class Edge_Type> class GraphEdge
{
public:
    GraphEdge(GraphNode<Edge_Type> &adjacent_node, int node_weight);
    GraphNode<Edge_Type> getAdjacentNode();
    int getWeight();
private:
    GraphNode<Edge_Type> node;
    int weight;
};

template <class Edge_Type> GraphEdge<Edge_Type>::GraphEdge(GraphNode<Edge_Type> &adjacent_node, int node_weight)
{
    node = adjacent_node;
    weight = node_weight;
}

template <class Edge_Type> GraphNode<Edge_Type> GraphEdge<Edge_Type>::getAdjacentNode()
{
    return node;
}

template <class Edge_Type> int GraphEdge<Edge_Type>::getWeight()
{
    return weight;
}