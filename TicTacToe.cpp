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
{
	/* empty destructor body */
}

void TicTacToe::readGame(string fileName) 
{
	cout << "readGame() was called with filename: "<< fileName << endl;
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