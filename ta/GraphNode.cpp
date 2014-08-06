GraphNode::GraphNode(string nodeString)
{
    element = nodeString;
    inDegree = 0;
    isVisited = false;
    totalAdjacent = 0;
    //adjacentNodes;
    //adjacentNodes = new vector<GraphNode<Node_Type>>(2);
}

int GraphNode::getInDegree()
{
    return inDegree;
}

void GraphNode::incrementInDegree()
{
    inDegree += 1;
}

void GraphNode::decrementInDegree()
{
    inDegree -= 1;
}

bool GraphNode::getVisited()
{
    return isVisited;
}

void GraphNode::markVisited()
{
    isVisited = true;
}

void GraphNode::addAdjacentNode(GraphNode &adjacentNode)
{
    adjacentNodes.push_back(GraphEdge(adjacentNode));
}