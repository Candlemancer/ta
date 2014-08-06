/*GraphEdge::GraphEdge(GraphNode &adjacent_node)
{
    GraphEdge(adjacent_node, 1);
}*/

GraphEdge::GraphEdge(GraphNode &adjacent_node, int node_weight)
{
    node = adjacent_node;
    weight = node_weight;
}

GraphNode GraphEdge::getAdjacentNode()
{
    return node;
}

int GraphEdge::getWeight()
{
    return weight;
}