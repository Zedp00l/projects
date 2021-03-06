// CS215_IP2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//files we will use for input/output
ofstream outfile;
ifstream infile;

//SUPER CLASS
class Question
{
private:
	string question, answer;
	int value;

public:

	string getQuestion()
	{
		return question;
	}
	int getValue()
	{
		return value;
	}

	virtual void setQuestions(string answer, int value)
	{
	}
	virtual void printOptions()
	{
	}

	virtual string getAnswer()
	{
		return answer;
	}
};

class QuestionTF : public Question // true/false question class
{
private:
	string question;
	string answer;
	int points;
	string options;

public:
	void setQuestion(string theQuestion, int pointValue)
	{
		string theAnswer;
		question = theQuestion;
		points = pointValue;
		options = "true/false";

		//get the answer from the file
		getline(infile, theAnswer);
		answer = theAnswer;
	}
	
	void printOptions() // prints the options for that question
	{
		cout << question << endl;
		cout << answer << endl;
	}

	string getAnswer()
	{
		return answer;
	}
};

class QuestionMC : public Question // multiple choice question class
{

private:
	int value, numberOfOptions;
	string question, answer;
	string options[6];

public:
	void setQuestion(string theQuestion, int pointValue)
	{
		string line;

		// get # of choices from the file
		getline(infile, line);
		numberOfOptions = stoi(line);
		question = theQuestion;
		value = pointValue;

		// get the choice lines and load into options array
		for (int count = 0; count < numberOfOptions; count++)
		{
			getline(infile, line);
			options[count] = line;
		}

		// get answer from the file and load into answer
		getline(infile, line);
		answer = line;
	}

	void printOptions() // prints the questions, options, and answer
	{
		char first = 'A';
		cout << question << endl;
		
		for (int count = 0; count < numberOfOptions; count++) 
		{
			cout << first++ << ". " << options[count] << endl;
		}

		cout << "Answer: " << answer << endl;
	}

	string getAnswer() // prints the answer
	{
		return answer;
	}
};

int main()
{
	Question *myQuestions[10];
	string questiontype, questiontxt;
	string answertxt, optiontxt;
	int numquestions, questionvalue;

outfile.open("testbank.txt");
if (outfile.is_open.())
{
	outfile << "3\n";
	outfile << "TF 5\n";
	outfile << 
}


    return 0;
}

