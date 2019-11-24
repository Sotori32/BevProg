#include "std_lib_facilities.h"

void print_array(ostream& os, int* a, int n)
{
	for(int i = 0; i < n; i++)
    {
    	os << a[i] << endl;
    }
}

void print_vector(ostream& os, vector<int> v)  //13.
{
	for(int i = 0; i < v.size(); i++)
    {
		os << v[i] << endl;
    }
}

int main()
{
    int i1 = 7;                                 //1.
    int* p1 = &i1;

        cout << p1 << endl;                     //2.
        cout << *p1 << endl;

    cout << endl;

    int* p2 = new int[7];                       //3.
        for(int i = 0; i < 7; i++)
        {
            p2[i] = pow(2, i);
        }
        cout << p2 << endl;                     //4.
        print_array(cout, p2, 7);
        
    cout << endl;

    int* p3 = p2;                               //5.

    p2 = p1;                                    //6.

    p2 = p3;                                    //7.

        cout << p1 << endl;                     //8.
        cout << *p1 << endl;
        cout << p2 << endl;
        cout << *p2 << endl;

delete[] p1;                                    //9.
delete[] p2;
delete[] p3;

    p1 = new int[10];                           //10.
        for(int i = 0; i < 10; i++)
        {
            p1[i] = pow(2, i);
        }
        
    cout << endl;

    p2 = new int[10];                           //11.

        for (int i = 0; i < 10; i++)            //12.
        {
            p2[i] = p1[i];
        }
        print_array(cout, p2, 10);
    
    cout << endl;

    vector<int> v1;                             //13.
		for (int i = 0; i < 10; i++)
        {
			v1.push_back(pow(2, i));
        }
        
    vector<int> v2;
		for (int i = 0; i < v1.size(); i++)
		{
        	v2.push_back(v1[i]);
        }
        print_vector(cout, v2);
}