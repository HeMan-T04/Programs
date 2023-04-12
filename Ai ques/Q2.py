#Best First Search
class Node:
    def __init__(self, v, weight):
        self.v=v
        self.weight=weight

# pathNode class will help to store
# the path from src to dest.
class pathNode:
    def __init__(self, node, parent):
        self.node=node
        self.parent=parent

# Function to add edge in the graph.
def addEdge(u, v, weight):
    # Add edge u -> v with weight weight.
    adj[u].append(Node(v, weight))


# Declaring the adjacency list
adj = []
# Greedy best first search algorithm function
def GBFS(h, V, src, dest):
    """ 
    This function returns a list of 
    integers that denote the shortest
    path found using the GBFS algorithm.
    If no path exists from src to dest, we will return an empty list.
    """
    # Initializing openList and closeList.
    openList = []
    closeList = []

    # Inserting src in openList.
    openList.append(pathNode(src, None))

    # Iterating while the openList 
    # is not empty.
    while (openList):

        currentNode = openList[0]
        currentIndex = 0
        # Finding the node with the least 'h' value
        for i in range(len(openList)):
            if(h[openList[i].node] < h[currentNode.node]):
                currentNode = openList[i]
                currentIndex = i

        # Removing the currentNode from 
        # the openList and adding it in 
        # the closeList.
        openList.pop(currentIndex)
        closeList.append(currentNode)
        
        # If we have reached the destination node.
        if(currentNode.node == dest):
            # Initializing the 'path' list. 
            path = []
            cur = currentNode

            # Adding all the nodes in the 
            # path list through which we have
            # reached to dest.
            while(cur != None):
                path.append(cur.node)
                cur = cur.parent
            

            # Reversing the path, because
            # currently it denotes path
            # from dest to src.
            path.reverse()
            return path
        

        # Iterating over adjacents of 'currentNode'
        # and adding them to openList if 
        # they are neither in openList or closeList.
        for node in adj[currentNode.node]:
            for x in openList:
                if(x.node == node.v):
                    continue
            
            for x in closeList:
                if(x.node == node.v):
                    continue
            
            openList.append(pathNode(node.v, currentNode))

    return []

# Driver Code
# The total number of vertices.
V = 10
## Initializing the adjacency list
for i in range(V):
    adj.append([])

addEdge(0, 1, 2)
addEdge(0, 2, 1)
addEdge(0, 3, 10)
addEdge(1, 4, 3)
addEdge(1, 5, 2)
addEdge(2, 6, 9)
addEdge(3, 7, 5)
addEdge(3, 8, 2)
addEdge(7, 9, 5)

# Defining the heuristic values for each node.
h = [20, 22, 21, 10, 25, 24, 30, 5, 12, 0]
path = GBFS(h, V, 0, 9)
print("The shortest path from src to dest is(GBFS): ")
for i in range(len(path) - 1):
    print(path[i], end = " -> ")

print(path[(len(path)-1)])

#A* algorithm
class Node():
    """A Node class for A* Pathfinding"""
    # Constructor for Node class.
    def __init__(self, parent=None, position=None):
        self.parent = parent
        self.position = position

        self.g = self.h = self.f = 0
    # Comparator for Node class
    def __eq__(self, temp):
        return self.position == temp.position

# Boolean function to check if 
# a move is valid or not.
def notValid(nodePosition,n,m):
    return nodePosition[0] > n-1 or nodePosition[0] < 0 \
    or nodePosition[1] > m-1 or nodePosition[1] < 0

# A* algorithm function
def A_Star(board, src, dest):
    """This function returns a list of
    tuples representing the path from the given 
    src node to the given dest node in the given board"""
    # Creating the src and dest node
    # with parent as None.
    srcNode = Node(None, src)
    destNode = Node(None, dest)
    

    # Initializing both openList and 
    # closedList as empty list.
    openList = []
    closedList = []

    # Append srcNode in openList. 
    openList.append(srcNode)

    # Iterate until we reach the 
    # dest Node. 
    while len(openList) > 0:

        # Get the current node
        currentNode = openList[0]
        currentIndex = 0
        # Iterate over the openList to find 
        # node with least 'f'. 
        for index, item in enumerate(openList):
            if item.f < currentNode.f:
                currentNode = item
                currentIndex = index

        # Pop the found node off openList,
        # and add it to the closedList. 
        openList.pop(currentIndex)
        closedList.append(currentNode)

        # If reached the dest.
        if currentNode == destNode:
            # Initializng the 'path' list. 
            path = []
            current = currentNode
            # Adding currentposition in path 
            # and the moving to its parent until 
            # we reach None (parent of src). 
            while current is not None:
                path.append(current.position)
                current = current.parent
            # Returning the reversed path (to make
            # it src -> dest, instead of dest -> src.
            return path[::-1] 

        # Generate children
        children = []
        dirs=((0, -1), (0, 1), (-1, 0), (1, 0),
        (-1, -1), (-1, 1), (1, -1), (1, 1))
        # Iterate over neighouring cells.
        for newPosition in dirs: 

            # Find the position of new Node.
            nodePosition = (currentNode.position[0] + newPosition[0], 
            currentNode.position[1] + newPosition[1])

            # If the new position is not valid (lies outside the board)
            # then do not proceed ahead with this node.
            if(notValid(nodePosition,len(board),
            len(board[len(board)-1]))==True):
                continue
            # Also if the new position contains obstacle, 
            # we can't go ahead.
            if (board[nodePosition[0]][nodePosition[1]] != 0):
                continue
            # Append the node in children list.
            children.append(Node(currentNode, nodePosition))

        # Iterate over the children list.
        for child in children:
            
            # If the child is in closedList
            for closedChild in closedList:
                if closedChild == child:
                    continue
            
            # Assign the values of f, g, and h.
            child.g = currentNode.g + 1
            child.h = ((child.position[0] - destNode.position[0]) ** 2) \
            + ((child.position[1] - destNode.position[1]) ** 2)
            child.f = child.g + child.h

            # If the Child is present in OpenList. 
            for openNode in openList:
                if child == openNode and child.g > openNode.g:
                    continue

            # Append the child at the last of open list
            openList.append(child)
        if (len(openList) > len(board)**2*len(board[0])**2): 
            return None

def main():
    board = [
                [0, 0, 0, 1, 0, 0],
                [0, 0, 1, 0, 1, 0],                
                [1, 0, 1, 0, 0, 0]
            ]

    src = (1, 0)
    dest = (2, 5)

    pathSrcToDest = A_Star(board, src, dest)
    print("A* Path from ", src, " to ", dest, " is:")
    print(pathSrcToDest)


if __name__ == '__main__':
    main()
