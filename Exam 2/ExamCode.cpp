#include "ExamCode.hpp"

#include "cuTEST/Menu.hpp"


/* CountBy ***********************************************************************

INPUT: int increment	The amount to count up by each time
INPUT: int arr[]		An array of integers
INPUT: int arrSize		The size of arr[]

RETURN:	None

FUNCTIONALITY:
This function will initialize all the values of the array, 'arr',
with values counting up by 'increment', from 0.
For example: 0, 2, 4, 6, 8, if increment is 2.
The array size is given in 'arrSize', so you will use a
for loop to iterate through all the elements of the array and
assign values to each element.
*/
void ExamCoding::CountBy(int increment, int arr[], int arrSize) // 10%
{
	while (arrSize != 0)
	{
		arr[arrSize - 1] = increment * (arrSize - 1);
		arrSize--;
	}
}

/* GetAddress ***********************************************************************

INPUT: int & variable		A reference to a variable

RETURN: int*				The address of the variable passed in

FUNCTIONALITY: For the variable passed in, return its address.
*/
int* ExamCoding::GetAddress(int & variable) // 5%
{
	int* ref = &variable;
	return ref;
}

/* GetValue ***********************************************************************

INPUT: int * pointer		A pointer to an integer

RETURN:	int					The value that the pointer is pointing to

FUNCTIONALITY: For the pointer passed in, return the value of the item it is pointing at.
*/
int ExamCoding::GetValue(int * pointer) // 5%
{
	return *pointer;
}

/* IsNull ***********************************************************************

INPUT: int * pointer		A pointer to an integer

RETURN: bool				Whether the pointer is null or not

FUNCTIONALITY: For the poiner passed in, assess whether it is set to nullptr or
not, and return true if it is null, and false if it is not.
*/
bool ExamCoding::IsNull(int * pointer) // 5%
{
	if (pointer == nullptr)
	{
		return true;
	}
	else
	{
		return false;  // temp
	}
}

/* AreAddressesSame ***********************************************************************

INPUT:	int * a				A pointer to some integer
		int * b				A pointer to some integer

RETURN: bool				Whether the address that a and b are pointing to is the same

FUNCTIONALITY: Figure out if a and b are pointing to the same address.
Return true if so, or false if not.
*/
bool ExamCoding::AreAddressesSame(int* a, int* b) // 10%
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;  // temp
	}
}

/* AreValuesSame ***********************************************************************

INPUT:	int * a				A pointer to some integer
		int * b				A pointer to some integer

RETURN: bool				Whether the values of the variables that a and b are pointing to is the same

FUNCTIONALITY: a and b can be pointing to different memory addresses, but if the values
at those addresses contain the same value, this should return true.
Otherwise, it should return false.
*/
bool ExamCoding::AreValuesSame(int* a, int* b) // 10%
{
	if (*a == *b)
	{
		return true;
	}
	else
	{
		return false;  // temp
	}
}

/* InsertElement ***********************************************************************

INPUT:	int newItem			The new item to be inserted into the array
		int arr[]			The array
		int arrSize			The total size of the array
		int& itemCount		The amount of items currently stored in the array

RETURN: none

FUNCTIONALITY: The new item newItem should be added to the array, after all other previous items.
For example, if arr is empty, then the new item will go at position 0.
If array contains 1, 2, and 3, then the newItem will go after 3.

ERROR CHECKING: If the array is full (use itemCount and arrSize to assess this),
then do NOT change anything (else the program will crash.)
*/
void ExamCoding::InsertElement(int newItem, int arr[], int arrSize, int& itemCount) // 15%
{
	if (arrSize < itemCount - 1 || arrSize == itemCount)
	{
		cout << "error" << endl;
	}
	else if (arrSize >= itemCount - 1)
	{
			arr[itemCount] = newItem;
			itemCount++;
	}
}

/* GetAddressOfElement ***********************************************************************

INPUT:	int arr[]			An array of integers
		int size			The size of the array
		int index			The index of the element whose address we want

RETURN: int*				The address of the element that is wanted,
							or nullptr if index is invalid.

FUNCTIONALITY: Get the element of the arr[] at position index and return
its address.

ERROR CHECKING: If the index is INVALID, return nullptr instead.
*/
int* ExamCoding::GetAddressOfElement(int arr[], int size, int index) // 15%
{
	if (size <= index || index < 0)
	{
		return nullptr;
	}
	else
	{
		int* ptr = &arr[index];
		return ptr; // temp
	}
}

/* SumValues ***********************************************************************

INPUT:	int* a			A pointer to some integer
		int* b			A pointer to some integer
		int* c			A pointer to some integer

RETURN: int				The sum of the values of the pointers

FUNCTIONALITY: For the given input pointers, get their values and add them together.
The resulting sum will be the return value.
*/
int ExamCoding::SumValues(int* a, int* b, int* c) // 5%
{
	return *a + *b + *c; // temp
}

/* SwapFrontAndBack ***********************************************************************

INPUT:	int* ptrArray[]		An array of integer pointers (each element is an int*)
		int arrSize			The size of the array

RETURN: none

FUNCTIONALITY: For the given array passed in, the very first element and very last element
should be swapped -- but DON'T swap the values; just swap the addresses that the pointers
are pointing to.

CHALLENGE: If you can't figure this one out right away, proceed to other problems and come back to this.
*/
void ExamCoding::SwapFrontAndBack(int* ptrArray[], int arrSize) // 10%
{
	int* arr = ptrArray[0];
	ptrArray[0] = ptrArray[arrSize - 1];
	ptrArray[arrSize - 1] = arr;
}

/* RemoveElement ***********************************************************************

INPUT:	int removeIndex			The index of the item to remove
		int arr[]				The array of integers
		int arrSize				The size of the array

RETURN: none

FUNCTIONALITY: Remove the element at the index given (removeIndex); you don't actually have
to "remove" it, you can simply overwrite it.

Everything should be shifted back so that the elements of the array are contiguous (one-after-another).
Best way to do this is with a for loop.

Example-
	Before
	INDEX		0	1	2	3	4	5
	VALUE		2	4	6	8

	After remove 1
	INDEX		0	1	2	3	4	5
	VALUE		2	6	8

(empty spots don't matter)

ERROR CHECKING: If the index is invalid then do NOT change anything (else the program will crash.)

				Make sure to not go outside the bounds of the array!

CHALLENGE: If you can't figure this one out right away, proceed to other problems and come back to this.
*/
void ExamCoding::RemoveElement(int removeIndex, int arr[], int arrSize) // 10%
{
	if (arrSize < removeIndex || arrSize < 0)
	{ }
	else
	{
		int i = removeIndex;
		while (arrSize > removeIndex && i != arrSize)
		{
			arr[i] = arr[i + 1];
			i++;
		}
	}
}
