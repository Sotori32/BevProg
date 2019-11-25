#include "std_lib_facilities.h"

vector<int> gv(10);                             //1.

void f(vector<int> v)                           //2.
{
    vector<int> lv(v.size());                   //3a.
        for(int i = 0; i < v.size(); i++)
        {
            lv[i] = v[i];                       //3b.
            cout << lv[i] << endl;              //3c.
        }

    vector<int> lv2 = v;                        //3d.
        for(int i = 0; i < lv2.size(); i++)
        {
            cout << lv2[i] << endl;             //3e.
        }
}


int main()
{
    for(int i = 0; i < 10; i++)                 //1.
    {
        gv[i] = pow(2,i);
        //cout << gv[i] << endl;
    }
    f(gv);                                      //4a.
    
    vector<int> vv(10);                         //4b.
    vv[0]=1;
    for(int i = 1; i < vv.size(); i++)
    {
        vv[i] = i * vv[i-1];
    }
    f(vv);                                      //4c.

}