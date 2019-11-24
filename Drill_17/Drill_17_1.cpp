#include "std_lib_facilities.h"

void print_array10(ostream& os, int* a)        //4.
{
    for(int i = 0; i < 10; i++)
    {
        os << a[i] << endl;
    }
}

void print_array(ostream& os, int* a, int n)   //7.
{
	for(int i = 0; i < n; i++)
    {
    	os << a[i] << endl;
    }
}

void print_vector(ostream& os, vector<int> v)  //10.
{
	for(int i = 0; i < v.size(); i++)
    {
		os << v[i] << endl;
    }
}

int main()
{
    int* array1 = new int[10];                 //1.
    for(int i = 0; i < 10; i++)
    {
        cout << array1[i] << endl;             //2.
    }
    delete[] array1;                           //3.
    cout << endl;

    int* array2 = new int[10];                 //5.
	for(int i = 0; i < 10; i++)
    {
		array2[i] = 100 + i;
        cout << array2[i] << endl;
    }
	delete[] array2;
    cout << endl;

    int* array3 = new int[11];                //6.
	for(int i = 0; i < 11; i++)
    {
		array3[i] = 100 + i;
        cout << array3[i] << endl;
    }
	delete[] array3;
    cout << endl;

     int* array4 = new int[20];                //8.
	for(int i = 0; i < 20; i++)
    {
		array4[i] = 100 + i;
        cout << array4[i] << endl;
    }
	delete[] array4;
    cout << endl;

        
    vector<int> v;                            //10.
    for(int i = 0; i < 10; i++)
    {
        v.push_back(100 + i);
    }
    print_vector(cout, v);
    cout << endl;
    
    vector<int> v2;
    for(int i = 0; i < 11; i++)
    {
        v2.push_back(100 + i);
    }
    print_vector(cout, v2);
    cout << endl;
    
    vector<int> v3;
    for(int i = 0; i < 20; i++)
    {
        v3.push_back(100 + i);
    }
    print_vector(cout, v3);
    cout << endl;

}