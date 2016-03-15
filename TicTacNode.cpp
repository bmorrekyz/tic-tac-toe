#include "TicTacNode.h"
#include "TicTacToe.h"

TicTacNode::TicTacNode() 
{
	/* empty constructor body */

	// should it be empty??? 
}

TicTacNode::~TicTacNode() 
{
	/* empty destructor body */
}

// to keep track of the children of a given node
void TicTacNode::addChildNode(TicTacNode *node)
{
	m_children.push_back(node);
}

// to add a new element to the map 
void TicTacNode::addElementToBoard(int index, char element)
{
	m_board[index] = element;
}


// to check the value at a given key on a map
char TicTacNode::elementAtIndexOnBoard(int index)
{
	return m_board[index];
}

// overloaded output operator
ostream& operator << (ostream& outStream, TicTacNode& aNode)
{
	// show each of the elements of m_board variable
	for (int i=0; i<10; i++)
	{
		outStream << aNode.elementAtIndexOnBoard(i);

		// necessary for showing m_board as a 3x3 square
		if (i == 3 || i == 6) 
		{
			cout << endl;
		}
	}

	// for better looking output
	cout << endl;

	return outStream;
}


// overloaded equality operator as a member function
bool TicTacNode::operator ==(TicTacNode& node2) 
{
	// status of equality of two nodes
	bool status = true;

	// compare each element on the m_boards of two nodes 
	for (int i=0; i<9; i++)
	{	
		// one false status proves that the nodes are different
		if (m_board[i] != node2.elementAtIndexOnBoard(i))
		{
			status = false;
		}
	}

	// return the result of comparing two nodes
	if (status) 
	{ 
		return true; 
	}

	else 
	{ 
		return false; 
	}
}