// This program performs a linear search on a character array

// Kyaw Min Thu

#include <iostream>
using namespace std;

int searchCharList(char[], int, char); // function prototype 
int searchIntList(int[], int, int); // function prototype 

const int SIZE = 8;

int main()
{
	char word[SIZE] = "Harpoon";
	int found, searchInt = -1, nums[SIZE] = {3,16,-19,5,5,0,-2,99};
	char ch;
  bool exit = false;

	//cout << "Enter a letter to search for:" << endl;
	//cin >> ch;
  //found = searchCharList(word, SIZE, ch);
  
  do{


    cout << "Enter an Integer to search for : ";
    cin >> searchInt;
    if(cin.fail())
      exit = true;
    else
    {

      found = searchIntList(nums, SIZE, searchInt);
      if (found == -1)
		    cout << "The letter " << ch << " was not found in the list" << endl;
	    else
		    cout << "The Integer  " << ch << " is in the " << found + 1 << " position of the list" << endl;
      
    }
    
    
  }while(exit != true);



	

	return 0;
}

//*******************************************************************
//	searchList
//
//  task:	       This searches an array for a particular value
//  data in:	   List of values in an array, the number of
//	               elements in the array, and the value searched for
//	               in the array
//  data returned: Position in the array of the value or -1 if value
//	               not found
//
//*******************************************************************

int searchCharList(char List[], int numElems, char value)
{
	for (int count = 0; count <= numElems; count++)
	{
		if (List[count] == value)
			// each array entry is checked to see if it contains
			// the desired value.

      
			return count;
			// if the desired value is found, the array subscript
			// count is returned to indicate the location in the array
	}

	return -1;	// if the value is not found, -1 is returned
}


int searchIntList(int List[], int numElems, int value)
{
	for (int count = 0; count <= numElems; count++)
	{
		if (List[count] == value)
			// each array entry is checked to see if it contains
			// the desired value.

      
			return count;
			// if the desired value is found, the array subscript
			// count is returned to indicate the location in the array
	}

	return -1;	// if the value is not found, -1 is returned
}
