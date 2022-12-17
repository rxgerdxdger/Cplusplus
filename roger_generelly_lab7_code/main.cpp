//
//  main.cpp
//  roger_generelly_lab7_code
//
//  Created by Peter Roger Generelly IV on 11/28/22.
//
/*

Author: Roger Generelly

Program Title: GradeBook

File Description:

 In this lab, we will write a program that can manage a gradebook for a teacher. The teacher gave 4 tests this semester. The teacher has the following grading scale to assign a letter grade to each student based on his or her test average
 */
#include <iostream>
#include <string>


using namespace std;

const int TEST_NUMBER = 4;
const int STUDENT_NUMBER = 4;
double inputValidate(double number);
void getStudentTestScores(double );
double calculateAverageOfArray(const double[], int);
char getAverageLetterGrade(double);
void getStudentNames(string studentNames);
void getAllTestScores(const string studentNames,
                      double student1TestScores,
                      double student2TestScores,
                      double student3TestScores,
                      double student4TestScores);
void calculateAndDisplayAverages(const string studentNames,
                                 const double student1TestScores,
                                 const double student2TestScores,
                                 const double student3TestScores,
                                 const double student4TestScores);

int main()
{
    string studentNames(TEST_NUMBER);

    double student1TestScores(TEST_NUMBER);
    double student2TestScores(TEST_NUMBER);
    double student3TestScores(TEST_NUMBER);
    double student4TestScores(TEST_NUMBER);
    getStudentNames(studentNames);

    getAllTestScores(studentNames,
                     student1TestScores,
                     student2TestScores,
                     student3TestScores,
                     student4TestScores);

    calculateAndDisplayAverages(studentNames,
                                student1TestScores,
                                student2TestScores,
                                student3TestScores,
                                student4TestScores
                                );
    
    return 0;
}

//  Checks for correct intry -- Error message
double inputValidate(double number)
{
    while(!(cin >> number) || (number < 0 || number > 100))
    {
        cout << "Error. A number from 0 thru 100 must be entered: ";
        

    return number;
}

void getStudentTestScores(double array[i])
{
    for (int i = 0; i < TEST_NUMBER; i++)
    {
        cout << "Test #" << (i + 1) << ": ";
        array[i] = inputValidate(array[i]);
    }
}

double calculateAverageOfArray(const double array[], int ARRAY_SIZE)
{
    double sum = 0;

    for (int i = 0; i < ARRAY_SIZE; i++)
        sum += array[i];

    return sum / ARRAY_SIZE;
}

char getAverageLetterGrade(double average)
{
    char letter;

    if (average <= 100 && average >= 90)
        letter = 'A';
    else if (average < 90 && average >= 80)
        letter = 'B';
    else if (average < 80 && average >= 70)
        letter = 'C';
    else if (average < 70 && average >= 60)
        letter = 'D';
    else if (average < 60 && average >= 0)
        letter = 'F';
    
    return letter;
}

void getStudentNames(string studentNames)
{
    cout << "Enter student names: " << endl;
    for(int i = 0; i < STUDENT_NUMBER; i++)
    {
        cout << "Student " << (i + 1) << " name: ";
        getline(cin, studentNames[i]);
    }
}

void getAllTestScores(const string studentNames,
                      double student1TestScores,
                      double student2TestScores,
                      double student3TestScores,
                      double student4TestScores)
{
    cout << "\nEnter test scores for " << studentNames[0] << endl;
    getStudentTestScores(student1TestScores);

    cout << "\nEnter test scores for " << studentNames[1] << endl;
    getStudentTestScores(student2TestScores);

    cout << "\nEnter test scores for " << studentNames[2] << endl;
    getStudentTestScores(student3TestScores);

    cout << "\nEnter test scores for " << studentNames[3] << endl;
    getStudentTestScores(student4TestScores);


}

void calculateAndDisplayAverages(const string studentNames,
                                 const double student1TestScores,
                                 const double student2TestScores,
                                 const double student3TestScores,
                                 const double student4TestScores)
                                 
{
    // Student #1
    double average = calculateAverageOfArray(student1TestScores, TEST_NUMBER);
    cout << "\nAverage test score for " << studentNames[0] << " = " << average << endl;
    
    char average_letter_grade = getAverageLetterGrade(average);
    cout << "Letter grade = " << average_letter_grade << endl;
    cout << endl;
    
    // Student #2
    average = calculateAverageOfArray(student2TestScores, TEST_NUMBER);
    cout << "Average test score for " << studentNames[1] << " = " << average << endl;
    
    average_letter_grade = getAverageLetterGrade(average);
    cout << "Letter grade = " << average_letter_grade << endl;
    cout << endl;
    
    // Student #3
    average = calculateAverageOfArray(student3TestScores, TEST_NUMBER);
    cout << "Average test score for " << studentNames[2] << " = " << average << endl;
    
    average_letter_grade = getAverageLetterGrade(average);
    cout << "Letter grade = " << average_letter_grade << endl;
    cout << endl;
    
    // Student #4
    average = calculateAverageOfArray(student4TestScores, TEST_NUMBER);
    cout << "Average test score for " << studentNames[3] << " = " << average << endl;
    
    average_letter_grade = getAverageLetterGrade(average);
    cout << "Letter grade = " << average_letter_grade << endl;
    cout << endl;
    
    
    average_letter_grade = getAverageLetterGrade(average);
    cout << "Letter grade = " << average_letter_grade << endl;
    cout << endl;
    
}


