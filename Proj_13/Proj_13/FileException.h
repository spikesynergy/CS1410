//============================================================================
// Name:		FileException.h
// Purpose:		Objects for diagnosing file exceptions
// Version:		1.0
// Author:		Kevin S. O'Day
// Course:		CS 1410 Section 002
// Instructor:	Dennis Fairclough
// Project:		Proj_09
// Date:		November 2014
// Date:		11/26/14 9:59 AM
//============================================================================
// I declare that the following source code was written by me, or provided
// by the instructor for this project. I understand that copying
// source code from any other source constitutes cheating, and that I will
// receive a zero grade on this project if I am found in violation of
// this policy.
//----------------------------------------------------------------------

#ifndef FILEEXCEPTION_H_
#define FILEEXCEPTION_H_

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdlib>//for POSIX compatibility

using namespace std;

///------------------- FileException class------------------
///  Purpose : To handle exceptions thrown from Utils
///-------------------End---------------------------------
class FileException
{
	//Member Data
private:
	string _message;
	int _errorFlag;
	//Member functions
public:

	///----------------- Constructor -----------------------
	/// Purpose: To create a FileException object given its parameters
	/// Parameters: String reference containing an error message
	///				integer representing error type
	///-------------------------- End ------------------------------
	FileException(string&, int);

	///----------------- Default Destructor -----------------------
	/// Purpose: To initialize all data members to their default
	/// Parameters: None
	///-------------------------- End ------------------------------
	~FileException();

	///-------------------- Getter Function -----------------------
	/// Purpose: To return the exception message
	/// Returns: String containing error message
	///-------------------------- End ------------------------------
	string GetMessage();

	///-------------------- Getter Function -----------------------
	/// Purpose: To return the exception error flag
	/// Returns: Integer representing an error flag
	///-------------------------- End ------------------------------
	int GetErrorFlag();

};//End class FileException

#endif /* FILEEXCEPTION_H_ */
