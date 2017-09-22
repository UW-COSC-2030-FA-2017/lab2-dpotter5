//Drake E. Potter 9/22/17
// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl;
	cout << "cows size  :  " << cows.size() << endl;
	cout << "cows sum   :  " << cows.sum() << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl;
	cout << "cows size  :  " << cows.size() << endl;
	cout << "cows sum   :  " << cows.sum() << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "cows size  :  " << cows.size() << endl;
	cout << "cows sum   :  " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses size:  " << horses.size() << endl;
	cout << "horses sum :  " << horses.sum() << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "cows size  :  " << cows.size() << endl;
	cout << "cows sum   :  " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses size:  " << horses.size() << endl;
	cout << "horses sum :  " << horses.sum() << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "cows size  :  " << cows.size() << endl;
	cout << "cows sum   :  " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses size:  " << horses.size() << endl;
	cout << "horses sum :  " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "pigs size  :  " << pigs.size() << endl;
	cout << "pigs sum   :  " << pigs.sum() << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "cows size  :  " << cows.size() << endl;
	cout << "cows sum   :  " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses size:  " << horses.size() << endl;
	cout << "horses sum :  " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "pigs size  :  " << pigs.size() << endl;
	cout << "pigs sum   :  " << pigs.sum() << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "cows size  :  " << cows.size() << endl;
	cout << "cows sum   :  " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses size:  " << horses.size() << endl;
	cout << "horses sum :  " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "pigs size  :  " << pigs.size() << endl;
	cout << "pigs sum   :  " << pigs.sum() << endl << endl;

	cows.insertAsLast(33.33);
	pigs.insertAsLast(21.2);
	horses.removeFirst();
	horses.insertAsLast(3.14);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	cout << "End of code" << endl;

	return 0;
}
