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
	/* empty constructor body */
}


TicTacToe::~TicTacToe()
{ /* empty destructor body */ }

void TicTacToe::readGame(string fileName) 
{
	const char *c = fileName.c_str();
	char line[128];

	cout << "readGame() was called with filename: "<< fileName << endl; // TESTING

	ifstream gameFile (c, ifstream::in);

	/* 	In the code below, I am reading through the file while
		combining every three lines into a node. Each node has a 
		board with 9 positions to store Xs or Os.	*/
	while (!gameFile.eof()) 
	{
		TicTacNode *aNode = new TicTacNode;

		// outer for loop for lines
		// index keeps track of position on m_board
		int index = 0;    
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
	cout << "gameIsOver() was called. it returned true." << endl;

	return true;
}

int TicTacToe::getResult() 
{
	cout << "getResult() was called. it returned 0 " << endl;
	return 0;
}

