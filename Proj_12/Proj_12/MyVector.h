//============================================================================
// File Prolog
// Author: Kevin S. O'Day
// Course: CS 1410 Section 002
// Project: Proj_12
// Purpose: Demonstrate understanding of dynamic storage & memorty management.
// Date: December 2014 
// Date: 12/09/14 9:59 AM
//============================================================================
// I declare that the following source code was written by me, or provided
// by the instructor for this project. I understand that copying 
// source code from any other source constitutes cheating, and that I will
// receive a zero grade on this project if I am found in violation of
// this policy.
//----------------------------------------------------------------------


#include <iostream>
#include <string>
using namespace std;


class MyVector
{
	private:
		//pointer of type int
		int* _pData = NULL;
		//the current number of elements in the array
		int _size;
		//the total current capacity of the array
		int _capacity;

	public:

		///----------------- Default Constructor -----------------------
		/// Purpose: To initialize all data members to their default values
		/// Parameters: None
		///-------------------------- End ------------------------------
		MyVector();

		///----------------- Copy Constructor -----------------------
		/// Purpose: Facilitate the copying of a MyVector object
		/// Parameters: MyVector object to be copied
		///-------------------------- End ------------------------------
		MyVector(MyVector&);

		///----------------- Constructor -----------------------
		/// Purpose: To construct a MyVector object, setting its capacity to provided value
		/// Parameters: integer for capacity
		///-------------------------- End ------------------------------
		MyVector(int);

		///----------------- Destructor -----------------------
		/// Purpose: To delete dynamically allocated storage, prevent leaks.
		/// Parameters: none
		///-------------------------- End ------------------------------
		virtual ~MyVector();

		///--------------------size Function---------------------
		/// Purpose: get the current number of elements in the array
		/// Parameters: none
		/// Returns: integer current number of elements in the array
		///---------------------------End-------------------------------
		int Size() const;

		///--------------------capacity Function---------------------
		/// Purpose: get the total capacity of the array
		/// Parameters: none
		/// Returns: integer total capacity of the array
		///---------------------------End-------------------------------
		int Capacity() const;

		///--------------------clear Function---------------------
		/// Purpose: Clar all the elements in the array, reset size and capacity to default
		/// Parameters: none
		/// Returns: none
		///---------------------------End-------------------------------
		void Clear();

		///--------------------push_back Function---------------------
		/// Purpose: add the integer value to the end of the array, grow as needed
		/// Parameters: integer to add to the array
		/// Returns: none
		///---------------------------End-------------------------------
		void Push_Back(int);

		///--------------------ValueAt Function-------------------------------------------------
		/// Purpose: Returns the value of the element at given index
		/// Parameters: integer for index
		/// Returns: integer at given index, throws exception if index is greater than size
		///---------------------------End--------------------------------------------------
		int ValueAt(int) const;

		///--------------------Copy Function-------------------------------------------------
		/// Purpose: Copies the object
		/// Parameters: Reference to a MyVector object
		/// Returns: none
		///---------------------------End--------------------------------------------------
		void Copy(MyVector&);

		///--------------------Free Function-------------------------------------------------
		/// Purpose: Frees (Deletes the pointers) the memory associated with the object
		/// Parameters: none
		/// Returns: none
		///---------------------------End--------------------------------------------------
		void Free(void);

		///-------------------- assignment operator overloading Function -----------------------
		/// Purpose: Assigns the values of one MyVector object to another
		/// Returns: Reference to MyVector object
		///-------------------------- End ------------------------------
		MyVector& operator = (MyVector&);

};


///-------------------- stream insertion overloading Function -----------------------
/// Purpose: Converts the object into a form that can be printed and overloads the stream insertion operator
/// Returns: reference to ostream object containing a representation of the object.
///-------------------------- End ------------------------------
ostream& operator<<(ostream& out, const MyVector& rho);
