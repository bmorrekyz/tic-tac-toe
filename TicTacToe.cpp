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
	frontPtr = NULL;
	rearPtr = NULL;
	cursorPtr = NULL;
	insertPtr = NULL;
	previousPtr = NULL;
}


TicTacToe::~TicTacToe()
{
	/* empty destructor body */
}

void TicTacToe::readGame(string fileName) 
{
	const char *c = fileName.c_str();
	char line[128];

	cout << "readGame() was called with filename: "<< fileName << endl;
	ifstream gameFile (c, ifstream::in);

	/*
	In the code below, I am trying to read through the file while
	splitting the lines into nodes. 
	*/
	while (!gameFile.eof()) 
	{
		TicTacNode *aNode = new TicTacNode;

		int index = 0;
		for (int i=0; i<3; i++) 
		{
			gameFile.getline(line,128); 
			
			//cout << i << " " << line << endl;  // TESTING

			
			for (int j=0;j<3; j++)
			{
				// cout << "index = " << index << endl;  
				// cout << "element: " << line[j] << endl;
				index++;
				aNode->addElementToBoard(index, line[j]); 	
			}	
		}
		gameFile.getline(line,128);
		index = 0;		

		cout << *aNode << endl;

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