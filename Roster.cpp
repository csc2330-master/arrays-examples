// Roster.cpp : Defines the entry point for the console application.
//

#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	string courses[] = {"Math","Science","English"};
	string students[] = {"Joe","Jay"};

	const int STUDENT_COUNT = sizeof(students) / sizeof(students[0]);
	const int COURSE_COUNT = sizeof(courses) / sizeof(courses[0]);
	
	short grades[COURSE_COUNT][STUDENT_COUNT];
	float courseAverage[COURSE_COUNT] = { 0.0 };
	float studentAverage[STUDENT_COUNT] = { 0.0 };

	for (size_t i = 0; i < COURSE_COUNT; i++){
		cout << "Input grades for course: " << courses[i] << endl;
		for (size_t j = 0; j < STUDENT_COUNT; j++){
			cout << "\t" << students[j] << ": ";
			cin >> grades[i][j];
		}
	}

	for (size_t i = 0; i < COURSE_COUNT; i++) {
		courseAverage[i] = 0.0;
		for (size_t j = 0; j < STUDENT_COUNT; j++) {
			courseAverage[i] += grades[i][j];
		}
		courseAverage[i] /= STUDENT_COUNT;
	}

	for (size_t i = 0; i < STUDENT_COUNT; i++) {
		studentAverage[i] = 0.0;
		for (size_t j = 0; j < COURSE_COUNT; j++) {
			studentAverage[i] += grades[j][i];
		}
		studentAverage[i] /= COURSE_COUNT;
	}
	cout << endl << endl << endl << "--------------------" << endl;
/*

	for (size_t i = 0; i < COURSE_COUNT; i++) {
		for (size_t j = 0; j < STUDENT_COUNT; j++) {
			cout << setw(6) << grades[i][j];
		}
		cout << endl;
	}
	cout << "The Averages are: " << endl;
	for (size_t i = 0; i < COURSE_COUNT; i++){
		cout << setw(15) << courses[i] << setw(8)
			<< setprecision(2) << fixed << courseAverage[i] << endl;
	}

	cout << "The Averages are: " << endl;
	for (size_t i = 0; i < STUDENT_COUNT; i++){
		cout << setw(15) << students[i] << setw(8)
			<< setprecision(2) << fixed << studentAverage[i] << endl;
	}

*/
	cout << setw(6) << " ";
	for (size_t i=0; i<COURSE_COUNT; i++)
		cout << setw(9) << courses[i];
	cout << endl;

	for (size_t i = 0; i < STUDENT_COUNT; ++i){
		cout << setw(6) << students[i];
		for (size_t j = 0; j < COURSE_COUNT; ++j){
			cout << setw(9) << fixed << setprecision(2) << grades[j][i];
		}
		cout << setw(8) << fixed << setprecision(2) << studentAverage[i];
		cout << endl;
	}
	float allAverage = 0.0;
	cout << setw(6) << " ";
	for (size_t i=0; i<COURSE_COUNT; i++){
		cout << setw(9) << courseAverage[i];
		allAverage += courseAverage[i];
	}
	allAverage /= COURSE_COUNT;
	cout << setw(8) << fixed << setprecision(2) << allAverage << endl;
	

    return 0;
}

