//Example 1.3
//
//#include<iostream>
//using namespace std;
//
//template<class T>
//T GetMax(T a, T b)
//{
//	T result;
//	result = a > b ? a : b;
//	return (result);
//
//}
//int main() {
//	int i = 5, j = 6, k;
//	long l = 10, m = 5, n;
//	k = GetMax<int>(i, j);
//	n = GetMax<long>(l, m);
//	cout << k << endl;
//	cout << n << endl;
//	return 0;
//}
//
//Example 1.4
//
//#include<iostream>
//using namespace std;
//
//template<class T>
//class mypair
//{
//	Ta, b;
//public:
//	mypair(T first, T second)
//	{
//		a = first; b = second;
//	}
//	T getmax();
//};
//template <class T>
//T mypair<T> ::getmax()
//{
//	T retval;
//	retval = a > b ? a : b;
//	return retval;
//}
//int main()
//{
//	mypair<int> myobject(100, 75);
//	cout << myobject.getmax();
//	return 0;
//}
//
//Exercise 1.2
//#include<iostream>
//using namespace std;
//
//template<class T>
//class mypair
//{
//	T a, b;
//public:
//	mypair(T first, T second)
//	{
//		a = first; b = second;
//	}
//	T getmin();
//};
//template <class T>
//T mypair<T> ::getmin()
//{
//	T retval;
//	retval = a < b ? a : b;
//	return retval;
//}
//int main()
//{
//	mypair<int> myobject(100, 75);
//	cout << myobject.getmin();
//	return 0;
//}
//
//Exercise 1.3
//#include<iostream>
//using namespace std;
//
//template<class T, int N>
//class mysequence
//{
//	T memblock[N];
//public:
//	void setmember(int x, T value);
//	T getmember(int x);
//	T getmin(int x);
//	T getmax(int x);
//};
//template <class T, int N>
//T mysequence <T, N>::setmember(int x, T value)
//{
//	return memblock[x];
//	T max = memblock[0];
//	for (int i = ; i < N; i++) {
//		if (max < memblock[0]) {
//			max = memblock[0];
//		}
//		template <class T, int N>
//		mysequence <T, N>::setmember(int x, T value)
//		{
//			return memblock[x];
//			T min = memblock[0];
//			for (int i = ; i < N; i++) {
//				if (min < memblock[0]) {
//					min = memblock[0];
//				}
//			}
//
//		}
//		int main() {
//			mysequence <int, 5>myints;
//			mysequence <double, 5>myfloats;
//
//			myints.setmember(0, 100);
//			myints.setmember(1, 600);
//			myints.setmember(2, 200);
//			myints.setmember(3, 400);
//			myints.setmember(4, 800);
//			myfloats.setmember(3, 3.1416);
//			cout << myints.getmember(0) << '\n';
//
//			cout << myfloats.getmember(30) << '\n';
//
//
//			return 0;
//		}
//
//		Example 1.5
//
//#include<iostream>
//			using namespace std;
//
//		template<class T, int N>
//		class mysequence
//		{
//			T memblock[N];
//		public:
//			void setmember(int x, T value);
//			T getmember(int x);
//		};
//		template <class T, int N>
//		void mysequence <T, N>::setmember(int x, T value)
//		{
//			memblock[x] = value;
//		}
//		template <class T, int N>
//		T mysequence <T, N>::getmember(int x)
//		{
//			return memblock[x];
//		}
//
//
//		int main() {
//			mysequence <int, 5>myints;
//			mysequence <double, 5>myfloats;
//
//			myints.setmember(0, 100);
//			myfloats.setmember(3, 3.1416);
//
//			cout << myints.getmember(0) << '\n';
//
//			cout << myfloats.getmember(30) << '\n';
//
//
//			return 0;
//		}
//
//		exercise 1.3
//
//#include<iostream>
//			using namespace std;
//
//		template<class T, int N>
//		class mysequence
//		{
//			T memblock[N];
//		public:
//			void setmember(int x, T value);
//			T getmember(int x);
//			T getmin();
//			T getmax();
//		};
//		template <class T, int N>
//		void mysequence <T, N>::setmember(int x, T value)
//		{
//			memblock[x] = value;
//		}
//		template <class T, int N>
//		T mysequence <T, N>::getmember(int x)
//		{
//			return memblock[x];
//		}
//		template <class T, int N>
//		T mysequence<T, N>::getmin() {
//			T minNum = memblock[0];
//			for (int i = 1; i < N; i++) {
//				if (memblock[i] < minNum)
//					minNum = memblock[i];
//			}
//			return minNum;
//		}
//
//		template <class T, int N>
//		T mysequence<T, N>::getmax() {
//			T maxNum = memblock[0];
//			for (int i = 1; i < N; i++) {
//				if (memblock[i] < maxNum)
//					maxNum = memblock[i];
//			}
//			return maxNum;
//		}
//
//		int main() {
//			mysequence <int, 5>myints;
//
//			myints.setmember(0, 10);
//			myints.setmember(5, 15);
//			myints.setmember(7, 9);
//			myints.setmember(3, 4);
//			myints.setmember(9, 2);
//
//			cout << "minimum:" << myints.getmin() << endl;
//			cout << "maximum:" << myints.getmax() << endl;
//
//			return 0;
//		}
//
//		example 1.6
//#include<iostream>
//#include<fstream>
//
//			using namespace std;
//
//		int main(void)
//		{
//			ofstream outFile;
//			outFile.open("fout.txt");
//
//			ifstream inFile("fin.txt");
//
//			char ch;
//			int count = 0;
//			while (inFile.get(ch))
//			{
//				outFile << ch;
//				count++;
//
//			}
//			outFile << "\n\n vharacter count = " << count << endl;
//			inFile.close();
//			outFile.close();
//			return 0;
//
//		}
//
//		exercise 1.4
//#include<iostream>
//#include<fstream>
//
//			using namespace std;
//
//		int main(void)
//		{
//			ofstream outFile;
//			outFile.open("fout.txt");
//
//			ifstream inFile("fin.txt");
//
//			char ch;
//			int charCount = 0, wordCount = 0, sentenceCount = 0;
//			bool insideWord = false;
//
//
//			while (inFile.get(ch))
//			{
//				outFile << ch;
//				charCount++;
//
//
//				if (isspace(ch)) {
//					wordCount += insideWord;
//					insideWord = false;
//				}
//				else {
//					insideWord = true;
//				}
//
//				if (ch == '.' || ch == '!' || ch == '?') {
//					sentenceCount++;
//				}
//			}
//
//			wordCount += insideWord;
//
//			outFile << "\n\n vharacter count = " << charCount << endl;
//			outFile << "\n\n word count = " << wordCount << endl;
//			outFile << "\n\n sentence count = " << sentenceCount << endl;
//
//			inFile.close();
//			outFile.close();
//			return 0;
//
//		}


// EXERCISE 1.6:
// #include <iostream>
// #include <fstream>
// #include <iomanip>
// #include <string>

// using namespace std;

// class Student {
// private:
// 	char name[30];
// 	int grades[10];
// 	float average;

// public:
// 	void readData(ifstream& file, int numGrades) {
// 		file.ignore();
// 		file.getline(name, 30);

// 		int sum = 0;
// 		for (int i = 0; i < numGrades; i++) {
// 			file >> grades[i];
// 			sum += grades[i];
// 		}
// 		average = static_cast<float>(sum) / numGrades;
// 	}

// 	void display(int numGrades) const {
// 		cout << left << setw(15) << name;
// 		for (int i = 0; i < numGrades; i++) {
// 			cout << setw(5) << grades[i];
// 		}
// 		cout << setw(10) << fixed << setprecision(2) << average << endl;
// 	}

// 	float getAverage() const {
// 		return average;
// 	}

// 	string getName() const {
// 		return string(name);
// 	}
// };

// int main() {
// 	string filename;
// 	cout << "Enter the filename: ";
// 	cin >> filename;

// 	ifstream file(filename);
// 	if (!file) {
// 		cerr << "Error opening file!" << endl;
// 		return 1;
// 	}


// 	int numStudents, numGrades;
// 	if (!(file >> numStudents >> numGrades) || numStudents <= 0 || numGrades <= 0) {
// 		cerr << "Invalid input data!" << endl;
// 		return 1;
// 	}

// 	//  error handling
// 	if (numStudents > 10000) {
// 		cerr << "Too many students! Limit is 10,000." << endl;
// 		return 1;
// 	}


// 	Student* students = nullptr;
// 	try {
// 		students = new Student[numStudents];
// 	}
// 	catch (bad_alloc& e) {
// 		cerr << "Memory allocation failed: " << e.what() << endl;
// 		return 1;
// 	}

// 	for (int i = 0; i < numStudents; i++) {
// 		students[i].readData(file, numGrades);
// 	}

// 	file.close();


// 	cout << "\nStudent Grades:\n";
// 	cout << left << setw(15) << "Name";
// 	for (int i = 1; i <= numGrades; i++) {
// 		cout << setw(5) << "G" + to_string(i);
// 	}
// 	cout << setw(10) << "Average" << endl;
// 	cout << string(50, '-') << endl;

// 	for (int i = 0; i < numStudents; i++) {
// 		students[i].display(numGrades);
// 	}


// 	float classSum = 0, highest = students[0].getAverage(), lowest = students[0].getAverage();
// 	string highestName = students[0].getName(), lowestName = students[0].getName();

// 	for (int i = 0; i < numStudents; i++) {
// 		float avg = students[i].getAverage();
// 		classSum += avg;
// 		if (avg > highest) {
// 			highest = avg;
// 			highestName = students[i].getName();
// 		}
// 		if (avg < lowest) {
// 			lowest = avg;
// 			lowestName = students[i].getName();
// 		}
// 	}

// 	float classAverage = classSum / numStudents;

// 	cout << "\nClass Average: " << fixed << setprecision(2) << classAverage << endl;
// 	cout << "Highest Average: " << highest << " (Student: " << highestName << ")\n";
// 	cout << "Lowest Average: " << lowest << " (Student: " << lowestName << ")\n";


// 	cout << "\nStudents below class average:\n";
// 	for (int i = 0; i < numStudents; i++) {
// 		if (students[i].getAverage() < classAverage) {
// 			cout << students[i].getName() << endl;
// 		}
// 	}


// 	delete[] students;

// 	return 0;
// }