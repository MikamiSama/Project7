#ifndef FUNCTIONS_H
#define FUNCTIONS_H

using namespace std;

#define INTEGER 1
#define DOUBLE 2
#define CHAR 3

#ifndef DATA_TYPE
#define DATA_TYPE INTEGER
#endif

void FillArrayInt(int arr[], int size, unsigned& seed);
void ShowArrayInt(const int arr[], int size);
int FindMinInt(const int arr[], int size);
int FindMaxInt(const int arr[], int size);
void SortArrayInt(int arr[], int size);
void EditElementInt(int arr[], int index, int value);

void FillArrayDouble(double arr[], int size, unsigned& seed);
void ShowArrayDouble(const double arr[], int size);
double FindMinDouble(const double arr[], int size);
double FindMaxDouble(const double arr[], int size);
void SortArrayDouble(double arr[], int size);
void EditElementDouble(double arr[], int index, double value);

void FillArrayChar(char arr[], int size, unsigned& seed);
void ShowArrayChar(const char arr[], int size);
char FindMinChar(const char arr[], int size);
char FindMaxChar(const char arr[], int size);
void SortArrayChar(char arr[], int size);
void EditElementChar(char arr[], int index, char value);

#if DATA_TYPE == INTEGER
#define FillArray FillArrayInt
#define ShowArray ShowArrayInt
#define FindMin FindMinInt
#define FindMax FindMaxInt
#define SortArray SortArrayInt
#define EditElement EditElementInt
#elif DATA_TYPE == DOUBLE
#define FillArray FillArrayDouble
#define ShowArray ShowArrayDouble
#define FindMin FindMinDouble
#define FindMax FindMaxDouble
#define SortArray SortArrayDouble
#define EditElement EditElementDouble
#elif DATA_TYPE == CHAR
#define FillArray FillArrayChar
#define ShowArray ShowArrayChar
#define FindMin FindMinChar
#define FindMax FindMaxChar
#define SortArray SortArrayChar
#define EditElement EditElementChar
#endif

#endif