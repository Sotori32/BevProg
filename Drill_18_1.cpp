#include "std_lib_facilities.h"

int ga[10];                                         //1.

void f( int array[], int num_of_elements)           //2.
{
    int la[10];                                     //3a.
        for(int i = 0; i < num_of_elements; i++)
        {
            la[i] = array[i];                       //3b.
            cout << la[i] << endl;                  //3c.
        }

    int *p = new int[num_of_elements];              //3d.
        for (int i = 0; i < num_of_elements; i++)
        {
            p[i] = array[i];                        //3e.
            cout << p[i] << endl;                   //3f.
        }

delete[] p;                                         //3g.
}



int main()
{
    for(int i = 0; i < 10; i++)                     //1.
    {
        ga[i] = pow(2, i);
        cout << ga[i] << endl;
    }
    f(ga, 10);                                      //4a.

    int aa[10];                                     //4b.
    aa[0] = 1;
    for(int i = 1; i < 10; i++)
    {
        aa[i] = aa[i-1]*(i+1);
    }
    f(aa, 10);                                      //4c.

}