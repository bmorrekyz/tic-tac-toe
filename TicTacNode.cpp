#include "TicTacNode.h"
#include "TicTacToe.h"

TicTacNode::TicTacNode() 
{
	/* empty constructor body */
}

TicTacNode::~TicTacNode() 
{
	/* empty destructor body */
}

void TicTacNode::addChildNode(TicTacNode *node)
{
	m_children.push_back(node);
	cout << "a TicTacNode object was pushed into a vector. " << endl;
}

void TicTacNode::addElementToBoard(int index, char element)
{
	// cout << "addElementToBoard was called. " << endl;
	m_board[index] = element;
}

char TicTacNode::elementAtIndexOnBoard(int index)
{
	return m_board[index];

}

ostream& operator << (ostream& outStream, TicTacNode& aNode)
{
	for (int i=0; i<10; i++)
	{
		outStream << aNode.elementAtIndexOnBoard(i);
		if (i == 3 || i == 6) 
		{
			cout << endl;
		}
	}
	cout << endl;
	return outStream;
}