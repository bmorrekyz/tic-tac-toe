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

	/*
		Description:     addChildNode
		Pre-condition:   a valid TicTacNode object
	 	Post-condition:  adds this node to the m_children vector.
	*/	
	void addChildNode(TicTacNode *node);

	/*
		Description:     addElementToBoard
		Pre-condition:   a valid key, value pair
	 	Post-condition:  adds a key:value pair to the map container.
	*/	
	void addElementToBoard(int index, char element);

	/*
		Description:     elementAtIndexOnBoard
		Pre-condition:   a valid index of the map container
	 	Post-condition:  returns a value (char) of the key (int) in a map container.
	*/	
	char elementAtIndexOnBoard(int index);

	/* ----- overloaded operators ----- */

	/*
		Description:     
		Pre-condition:  
	 	Post-condition: 
	*/	
	friend ostream& operator << (ostream& outStream, TicTacNode& aNode);


	/*
		Description:    
		Pre-condition:  
	 	Post-condition: 
	*/	
	bool operator ==(TicTacNode& node2);
	
private:
	vector<TicTacNode*> m_children;
	map<int,char> m_board;

};
#endif

