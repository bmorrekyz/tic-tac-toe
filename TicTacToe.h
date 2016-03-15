/*****************************************
** File:    TicTacToe.h
** Project: CMSC 341 Project 2, Spring 2016
** Author:  Dinara Sagitova
** Date:    3/16/16
** Section: 04
** E-mail:  dsagit1@umbc.edu 
**
**   This file contains the interface of the TicTacToe class. 
**  This class will essentially be a linked list of TicTacNodes 
**	that contains the information about the individual game you just read in.
***********************************************/

#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include <list>
#include <vector>

#include "TicTacNode.h"

using namespace std;

class TicTacToe
{
public:
	TicTacToe();
	~TicTacToe();

	/*
		Description:     readGame 
		Pre-condition:   a valid input filename
	 	Post-condition:  It will parse through the passed in file name, 
	 						create nodes for each play made in the game, 
	 						and determine the result of the game once it’s reached the end.
	*/
 	void readGame(string fileName);

	/* getters */

	/*
		Description:     gameIsOver 
		Pre-condition:   none
	 	Post-condition:  returns true if the game is over; returns false otherwise. 
	*/
 	bool gameIsOver();

	/*
		Description:     getResult 
		Pre-condition:   none
	 	Post-condition:  returns the following integers
							0 – game did not end
							1 – Player X won
							2 – Player O won
							3 – Game ended in a draw 		 
	*/
 	int getResult(); 

private:
	bool m_isOver;
	int m_results;

	list<TicTacNode*> m_ticTacList;

};
#endif