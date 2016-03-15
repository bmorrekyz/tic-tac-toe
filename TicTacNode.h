/* FILE HEADER
 * the node class that will be used in the other classes. 
 * This class will hold the information about the current state of the game board.
 * Required variables:
		m_children - A vector containing pointers to all of the children of this node.
		m_board - A map containing the game board.
 * Required functions:
		Overloaded comparison (==) operator
		Overloaded assignment (=) operator
		Overloaded out (<<) operator
 */

#ifndef TICTACNODE_H
#define TICTACNODE_H

#include <vector>
#include <map>
#include <iostream>

using namespace std;

class TicTacNode
{
public:
	TicTacNode();
	~TicTacNode();

	void addChildNode(TicTacNode *node);

	void addElementToBoard(int index, char element);

	char elementAtIndexOnBoard(int index);

	/* overloaded operators */
	friend ostream& operator << (ostream& outStream, TicTacNode& aNode);
	bool operator ==(TicTacNode& node2);
	
private:
	vector<TicTacNode*> m_children;
	map<int,char> m_board;

};
#endif

