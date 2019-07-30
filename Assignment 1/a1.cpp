//============================================================================
// Name        : a1.cpp
// Author      : Yinsheng Dong
// Student ID  : 11148648
// NSID        : yid164
// Lecture Section : CMPT 115 (02)
//============================================================================

#include <iostream>
using namespace std;

// Algorithm 2: checkSum(array, N, sum)
//   Pre: given an array of N integers, and a value in sum
//   Post: nothing
//   Return: true if the values in the array add up to sum
//           false otherwise
//
//  1. Add up all the values in the array.
//  2. Return true if the result is equal to sum; false otherwise

bool checkSum (int array[],int N, int sum)
{
	int a = 0;

	for(int i = 0; i < N; i++)
	{
		a = a + array[i];
	}

	if (a==sum)
	{
		return true;
	}

	else
	{
		return false;
	}

}


// Algorithm 1.2.2: checkRows(square)
//   Pre: given a 3x3 array of integers
//   Post: nothing
//   Return: true if all the rows sum to 15
//           false otherwise
//
//  1. call function checkSum() with values from first row
//  2. call function checkSum() with values from second row
//  3. call function checkSum() with values from third row
//  4. if any call to checkSum() returned false, return false
//     otherwise, return true

bool checkRows(int square[3][3])
{
	int row1[3];
	int row2[3];
	int row3[3];

	for(int i=0; i<3; i++)
	{
		row1[i] = square[0][i];
		row2[i] = square[1][i];
		row3[i] = square[2][i];
	}

	if(checkSum(row1,3,15)==true && checkSum(row2,3,15)==true && checkSum(row3,3,15)==true)
	{
		return true;
	}
	else
	{
		return false;
	}
}


// Algorithm 1.2.3: checkColumns(square)
//   Pre: given a 3x3 array of integers
//   Post: nothing
//   Return: true if all the columns sum to 15
//           false otherwise
//
//  1. call function checkSum() with values from first column
//  2. call function checkSum() with values from second column
//  3. call function checkSum() with values from third column
//  4. if any call to checkSum() returned false, return false
//     otherwise, return true


bool checkColumns (int square[3][3])
{
	int column1[3];
	int column2[3];
	int column3[3];

	for(int i=0; i<3; i++)
	{
		column1[i] = square[i][0];
		column2[i] = square[i][1];
		column3[i] = square[i][2];
	}

	if(checkSum(column1,3,15)==true && checkSum(column2,3,15)==true && checkSum(column3,3,15)==true)
	{
		return true;
	}

	else
	{
		return false;
	}
}


// Algorithm 1.2.4: checkDiagonals(square)
//   Pre: given a 3x3 array of integers
//   Post: nothing
//   Return: true if all the diagonals sum to 15
//           false otherwise
//
//  1. call function checkSum() with values from upward diagonal
//  2. call function checkSum() with values from downward diagonal
//  4. if any call to checkSum() returned false, return false
//     otherwise, return true

bool checkDiagonals(int square[3][3])
{
	int upwardDiagonal[3];
	int downwardDiagonal[3];

	for(int i=0; i<3; i++)
	{
		upwardDiagonal[i]=square[i][i];
	}

	for(int l=0; l<3; l++)
	{
		for(int h=2; h>0; h--)
		{
			downwardDiagonal[l]=square[l][h];
		}
	}
	if(checkSum(upwardDiagonal,3,15)==true && checkSum(downwardDiagonal,3,15)==true)
	{
		return true;
	}
	else
	{
		return false;
	}

}


// Algorithm 1.2.1: checkRange(square)
//   Pre: given a 3x3 array of integers
//   Post: nothing
//   Return: true if the square contains all the integers 1 .. 9
//           false otherwise
//
//   1. Declare an array of 9 boolean values, called seen
//      Initialize every value in seen to false
//   2. for every value in the square
//   2.1   seen[value-1] = true     // mark it as seen
//   3. if any value in seen is still false, return false
//      otherwise, return true
//
// Known Bug: checkRange() fails badly if square contains integers out of range!

bool checkRange(int square[3][3])
{
	bool seen[9];
	for(int i=0; i<9; i++)
	{
		seen[i]=false;
	}


	for(int l=0; l<3; l++)
	{
		for(int s=0; s<3; s++)
		{
			seen[square[l][s]-1]=true;
		}
	}

	for(int i=0; i<9; i++)
	{
		if(seen[i]==false)
		{
			return false;
		}
	}

	return true;

}


// Algorithm 1.2: checkSquare(square)
//   Pre: given a 3x3 array of integers
//   Post: nothing
//   Return: true if the square has all the properties of a magic
//           square; false otherwise
//
//   1. To check the square has all integers 1 ... 9
//      use function checkRange()
//   2. To check 3 rows of the square sum to 15
//      use function checkRows()
//   3. To check 3 columns of the square sum to 15
//      use function checkRows()
//   4. To check 2 diagonals of the square sum to 15
//      use function checkColumns()
//   5. If all the checks are positive (true), return true

bool checkSquare(int square[3][3])
{
	if(checkRows(square)==true && checkColumns(square)==true && checkDiagonals(square)==true && checkRange(square)==true)
	{
		return true;
	}
	else
	{
		return false;
	}
}


// Algorithm 1.1: getSquare(square)
//   Pre: given a 3x3 array to contain integers
//   Post: obtains 9 numbers from the console, storing them in the
//         given array
//   Return: Nothing
//
//   1. Display a friendly prompt
//   2. Obtain 9 integers from the console

void getSquare(int square[3][3])
{
	for(int i=0; i<3; i++)
	{
		for(int l=0; l<3; l++)
		{
			cout<<"Can you enter some integer please? "<<endl;
			cin>>square[i][l];
		}
	}
}


int main()
{

	int array[3] = {5,6,7};

	if (checkSum(array,3,18)==true)
	{
		cout << "CheckSum works good!"<<endl;
	}

	else
	{
		cout << "No, CheckSum doesn't work"<<endl;
	}

	cout<<endl;

	int a [3][3]={{8,1,6},{3,5,7},{4,9,2}};

	if(checkRows(a)==true)
	{
		cout<< "checkRows works good!"<<endl;

	}

	else
	{
		cout<<"No, checkRows dosen't work!"<<endl;
	}

	cout<<endl;


	if(checkColumns(a)==true)
	{
		cout<<"checkColumns works good!"<<endl;
	}

	else
	{
		cout<<"No, checkColumns dosen't work!"<<endl;
	}

	cout<<endl;

	if(checkDiagonals(a)==true)
	{
		cout<<"checkDiagonals works good!"<<endl;
	}

	else
	{
		cout<<"No, checkDiagonals doesn't work!"<<endl;
	}

	cout<<endl;

	if(checkRange(a)==true)
	{
		cout<<"checkRange works good!"<<endl;
	}

	else
	{
		cout<<"No, checkRange doesn't work!"<<endl;
	}

	cout<<endl;

	if(checkSquare(a)==true)
	{
		cout<<"checkSquare works good!"<<endl;
	}

	else
	{
		cout<<"No, checkSquare doesn't work!"<<endl;
	}

	// Algorithm 1: main()
	//   Pre: nothing
	//   Post: nothing
	//   Return: 0
	//
	//   1. Ask for the sequence of numbers ("square")
	//      call procedure getSquare()
	//
	//   2. Check that it is magic
	//      call procedure checkSquare()
	//
	//   3. Display "Yes!" if it's magic, "No!" otherwise

	int square[3][3];
	getSquare(square);

	if(checkSquare(square)==true)
	{
		cout<<"Yes!"<<endl;
	}

	else
	{
		cout<<"No!"<<endl;
	}



	return 0;
}
