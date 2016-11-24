#pragma once
#include <string>
#include "Frame.h"
#include "ExArray.h"

void main(){
	
	ExArray<int> arr1(3);
	ExArray<char> arr2(4);
	ExArray<double> arr3(5);

	arr1.addData(2);
	arr2.addData('A');
	arr3.addData(32.123);

	arr1.printData();
	arr2.printData();
	arr3.printData();

	int num1 = 10, num2 = 40;
	cout << "before : " << num1 << ", " << num2 << endl;
	mySwap<int>(num1, num2);
	cout << "before : " << num1 << ", " << num2 << endl;

	double num1d = 121.11, num2d = 10.5;
	cout << "before : " << num1d << ", " << num2d << endl;
	mySwap<double>(num1d, num2d);
	cout << "before : " << num1d << ", " << num2d << endl;

	ExArray<int> arr4(5);
	arr4.addData(10);

	mySwap<ExArray<int>>(arr1, arr4);
	arr1.printData();
	arr4.printData();

	//try {
	//	frame *f1 = new frame;
	//	frame *f2 = new frame[10];

	//	delete f1;
	//	delete[] f2;
	//}
	//catch (string msg){
	//	cout << "error msg : " << msg << endl;
	//}
}

// ctrl k+c, ctrl k+u