/*****************************************
** File:    driver.cpp
** Project: CMSC 341 Project 2, Spring 2016
** Author:  Dinara Sagitova
** Date:    3/16/16
** Section: 04
** E-mail:  dsagit1@umbc.edu 
**
**   This file contains the main driver program for Project 2.
** This program reads the file containing the names of the game data files. 
** 
**
***********************************************/

#include <iostream>
#include <fstream>
#include <vector>

#include "TicTacNode.h"
#include "TicTacToe.h"
using namespace std;

int main(int argc, char const *argv[])
{
	/* code */

	/* create an input file stream object */
	ifstream inFile (argv[1], ifstream::in);
	vector<string> fileNames (3);

	/* validate that enough arguments were passed */
	if (argc == 2 && inFile.is_open()) 
	{

		/* get the game file names. WORKS. */
		int counter = 0;
		while (!inFile.eof()) 
		{
			inFile >> fileNames[counter];
			counter++;
		}

		/* read a file in fileNames */
		TicTacToe myGame1;
		myGame1.readGame(fileNames[0]);

		if (myGame1.gameIsOver())
			cout << "the game is over" << endl;

		else {cout <<"the game is not over" << endl;}

		cout << myGame1.getResult() << endl;

		// TicTacNode aNode;
		// TicTacNode *aNode2 = new TicTacNode;
		// for (int i=0; i < 3; i++) {
		// 	aNode.addChildNode(aNode2);
		// }
	}

	/* display errors */
	else 
	{
		if (argc != 2) cerr << "Error: not enough arguments were passed." << endl;
		else { cerr << "Error: The input file was not found." << endl; }

	}




	return 0;

}