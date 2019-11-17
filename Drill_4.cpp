#include "std_lib_facilities.h"
#include <cfloat>

/*main()
{
	double x,y;
	while(cin>>x>>y)
	{
		cout<<x<<" "<<y<<endl;
		if(x>y)
			cout<<"the smaller value is: "<<y<<" the larger value is: "<<x<<endl;
		else if(y>x)
			cout<<"the smaller value is: "<<x<<" the larger value is: "<<y<<endl;
		else
			cout<<"the numbers are equal"<<endl;
		if(abs(x-y)<1.0/100)
			cout<<"the numbers are almost equal"<<endl;
			
	}
}*/
main()
{
	double value,min=DBL_MAX,max=-DBL_MAX,sum=0;
	int num_of_values=0;
	vector<double> vector_num;
	string unit;
	while(cin>>value>>unit)
	{
		cout<<value<<" "<<unit<<endl;
		if(unit=="cm")
		{
		}
		else if(unit=="m")
		{
			value*=100;
		}
		else if(unit=="in")
		{
			value*=2.54;
		}		
		else if(unit=="ft")
		{
			value*=12*2.54;
		}		
		else
		{
			cout<<"illegal unit"<<endl;
			continue;
		}
		if(value<=min)
		{
			cout<<value/100<<" m is the smallest so far"<<endl;
			min=value;
		}
		if(value>=max)
		{
			cout<<value/100<<" m is the the largest so far"<<endl;
			max=value;
		}
		num_of_values++;
		sum+=value;
		vector_num.push_back(value/100);
	}
	cout<<min/100<<" is the smallest"<<endl;
	cout<<max/100<<" is the greatest"<<endl;
	cout<<num_of_values<<" is the number of values"<<endl;
	cout<<sum/100<<" is the sum of values"<<endl;
	sort(vector_num);
	for(double v : vector_num)
		cout<<v<<" ";
	cout<<endl;
}
