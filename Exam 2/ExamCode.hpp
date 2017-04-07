/*
Don't modify this file!
*/

#ifndef _EXAM_CODE
#define _EXAM_CODE

#include <iostream>
#include <string>
using namespace std;

class ExamCoding
{
    public:
		// Easy
		void CountBy(int increment, int arr[], int arrSize);

		int* GetAddress(int & variable);
		int GetValue(int * pointer);
		bool IsNull(int * pointer);
		bool AreAddressesSame(int* a, int* b);
		bool AreValuesSame(int* a, int* b);

		// Medium
		void InsertElement(int newItem, int arr[], int arrSize, int& itemCount);
		int* GetAddressOfElement(int arr[], int size, int index);
		void SwapFrontAndBack(int* ptrArray[], int arrSize);
		int SumValues(int* a, int* b, int* c);

		// Hard
		void RemoveElement(int removeIndex, int arr[], int arrSize);
};


#endif
