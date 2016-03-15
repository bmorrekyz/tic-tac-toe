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
		for (int i=0; i < 3; i++)
		{
			myGame1.readGame(fileNames[i]);		

			if (myGame1.gameIsOver())
			{
				cout << "game is over." << endl;
			}	
			else { cout << " ... " << endl; }
		}



	}

	/* display errors */
	else 
	{
		if (argc != 2) cerr << "Error: not enough arguments were passed." << endl;
		else { cerr << "Error: The input file was not found." << endl; }
	}

	return 0;
}


/* TO DO LIST
	1. get rid of the magin numbers. replace them with constants. 
*/