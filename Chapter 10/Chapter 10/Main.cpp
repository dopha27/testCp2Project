#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include "Frame.h"
#include "ExArray.h"
using namespace std;

class Word{
private:
	string word;
public:
	Word(string word){
		this->word = word;
	}
	string getWord(){
		return this->word;
	}
};


void main(){
	map < char, list<Word>> m;
	list<Word> aList;
	list<Word> bList;
	list<Word> cList;

	string a;
	aList.push_back(Word("apple"));
	aList.push_back(Word("avoid"));
	aList.push_back(Word("appear"));

	cin >> a;

	bList.push_back(Word(a));
	bList.push_back(Word("bring"));
	bList.push_back(Word("bow"));

	cList.push_back(Word("crack"));
	cList.push_back(Word("cpoint"));
	cList.push_back(Word("chapter"));

	m['a'] = aList;
	m['b'] = bList;
	m['c'] = cList;


	m['a'].push_back(Word("available"));
	aList.push_back(Word("aim"));



	map<char, list<Word>>::const_iterator iter = m.begin();

	while (iter != m.end()){
		cout << iter->first << ":" << endl;

		list<Word> temp = iter->second;
		list<Word>::const_iterator iter_list = temp.begin();

		while (iter_list != temp.end()){
			Word word = *iter_list;
			cout << word.getWord() << ", ";
			iter_list++;
		}
		cout << "\n===" << endl;
		iter++;
	}
}

	
	
	
/*


void dump(list<string> &l){
	list<string>::iterator iter = l.begin();

	while (iter != l.end()){
		cout << *iter << endl;
		iter++;
	}
}
void main(){

	list<string> names;
	names.insert(names.begin(), "konkuk");
	names.insert(names.end(), "University");
	names.insert(names.end(), "SCLAB");
	names.insert(names.end(), "CSY");
	dump(names);
	cout << "===" << endl;
	names.reverse();
	dump(names);






	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.insert(v.begin(), 40);
	v.insert(v.end(), 50);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;

	cout << "access index at 1 : " << v.at(1) << endl;

	v.erase(v.begin());
	v.erase(v.end() - 1);

	vector<int>::iterator iter = v.begin();

	cout << "access index at 2 with iterator : " << iter[2] << endl;
	while (iter != v.end()){
		cout << *iter << endl;
		iter++;
	}
}
*/


//
//
//void main(){
//	
//	ExArray<int> arr1(3);
//	ExArray<char> arr2(4);
//	ExArray<double> arr3(5);
//
//	arr1.addData(2);
//	arr2.addData('A');
//	arr3.addData(32.123);
//
//	arr1.printData();
//	arr2.printData();
//	arr3.printData();
//
//	int num1 = 10, num2 = 40;
//	cout << "before : " << num1 << ", " << num2 << endl;
//	mySwap<int>(num1, num2);
//	cout << "before : " << num1 << ", " << num2 << endl;
//
//	double num1d = 121.11, num2d = 10.5;
//	cout << "before : " << num1d << ", " << num2d << endl;
//	mySwap<double>(num1d, num2d);
//	cout << "before : " << num1d << ", " << num2d << endl;
//
//	ExArray<int> arr4(5);
//	arr4.addData(10);
//
//	mySwap<ExArray<int>>(arr1, arr4);
//	arr1.printData();
//	arr4.printData();
//
//	try {
//		frame *f1 = new frame;
//		frame *f2 = new frame[10];
//
//		delete f1;
//		delete[] f2;
//	}
//	catch (string msg){
//		cout << "error msg : " << msg << endl;
//	}
//}
// ctrl k+c, ctrl k+u
//