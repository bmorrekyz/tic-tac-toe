/*****************************************
** File:    TicTacToe.cpp
** Project: CMSC 341 Project 2, Spring 2016
** Author:  Dinara Sagitova
** Date:    3/16/16
** Section: 04
** E-mail:  dsagit1@umbc.edu 
**
**   This file contains the TicTacToe class implementation. 
**  This class will essentially be a linked list of TicTacNodes 
**	that contains the information about the individual game you just read in.
**
***********************************************/

#include "TicTacToe.h"


TicTacToe::TicTacToe()
{
	/* constructor body */
	m_isOver = false;
	m_results = 0;
}


TicTacToe::~TicTacToe()
{ /* empty destructor body */ }

void TicTacToe::readGame(string fileName) 
{
	const char *c = fileName.c_str();
	char line[128];

	cout << "======================= " << endl;
	cout << "Reading: " << fileName << endl; 
	cout << "======================= " << endl;

	ifstream gameFile (c, ifstream::in);

	/* 	In the code below, I am reading a file while
		combining every three lines into a node. 
		Each line is further split into three elements	*/

	while (!gameFile.eof()) 
	{
		TicTacNode *aNode = new TicTacNode;

		
	
		int index = 0;       // track position on m_board
		
		// outer for loop for lines
		for (int i = 0; i < 3; i++) 
		{
			gameFile.getline(line,128); 
			
			// inner for loop for characters on each line
			for (int j = 0;j < 3; j++)
			{
				index++;
				aNode->addElementToBoard(index, line[j]); 	
			}	
		}

		// this is here to skip the empty line separating nodes. 
		gameFile.getline(line,128);

		// reset index before reading the next node.
		index = 0;		

		// add the nodes to a doubly-linked list
		m_ticTacList.push_back(aNode);
		
		cout << *m_ticTacList.back() << endl;  // TEST

		// to prevent a memory leak.
		delete aNode;
	}
}

bool TicTacToe::gameIsOver() 
{
	cout << *m_ticTacList.back() << endl;  // TEST
	
	// 	check whether the last node in the linked list has a winning map elements. 
	if (
		((m_ticTacList.back()->getElement(0) == m_ticTacList.back()->getElement(1)) 
			&& (m_ticTacList.back()->getElement(1) == m_ticTacList.back()->getElement(2))) || 

		((m_ticTacList.back()->getElement(3) == m_ticTacList.back()->getElement(4)) 
			&& (m_ticTacList.back()->getElement(4) == m_ticTacList.back()->getElement(5))) || 

		((m_ticTacList.back()->getElement(6) == m_ticTacList.back()->getElement(7)) 
			&& (m_ticTacList.back()->getElement(7) == m_ticTacList.back()->getElement(8))) || 

		((m_ticTacList.back()->getElement(0) == m_ticTacList.back()->getElement(3)) 
			&& (m_ticTacList.back()->getElement(3) == m_ticTacList.back()->getElement(6))) || 

		((m_ticTacList.back()->getElement(1) == m_ticTacList.back()->getElement(4)) 
			&& (m_ticTacList.back()->getElement(4) == m_ticTacList.back()->getElement(7))) || 

		((m_ticTacList.back()->getElement(2) == m_ticTacList.back()->getElement(5)) 
			&& (m_ticTacList.back()->getElement(5) == m_ticTacList.back()->getElement(8)))

		)
	{
		m_isOver = true;
		return m_isOver;	
	}

	else
	{
		return m_isOver;
	}
	

}

int TicTacToe::getResult() 
{
	cout << "getResult() was called. it returned 0 " << endl;
	// cout << "dbg0: " << m_ticTacList.back()->getElement(0) << endl;  // TEST
	// cout << "dbg1: " << m_ticTacList.back()->getElement(1) << endl;  // TEST
	// cout << "dbg2: " << m_ticTacList.back()->getElement(2) << endl;  // TEST
	// cout << "dbg3: " << m_ticTacList.back()->getElement(3) << endl;  // TEST
	// cout << "dbg4: " << m_ticTacList.back()->getElement(4) << endl;  // TEST

	// if (m_ticTacList.back()->getElement(3) == m_ticTacList.back()->getElement(4))
	// {
	// 	cout << "3 == 4" << endl;
	// }
	return 0;


}


/* TO DO LIST
	1. get rid of the magic numbers. replace them with constants. 
	2. finish gameIsOver()
	3. finish getResult()

	4. think whether should constructor initialize any variables
*/