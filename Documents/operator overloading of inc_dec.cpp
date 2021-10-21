// This is the operator overloading of increment/decrement operator.

#include<iostream>
using namespace std;
class integer
{
	private:
		int x;
public:

	void set_data(int a)
	{
		x = a;
	}
	void show_data()
	{
		cout<<"x="<<x;
	}
    integer operator ++ (int)
    {
    	int i;
    	i.x = x++;
    	return (i);
	}
	integer operator -- (int)
{
int i;
	i.x = x--;
	return(i);
	
}

};
int main()
{
	integer i1,i2,i3,i4;
	i1.set_data(3);
	i1.show_data();
	i2 = i1 ++;
	i1.show_data();
	i2.show_data();
	
	i3.set_data(3);
	i3.show_data();

	i4 = i3 --;
	i3.show_data();
	i4.show_data();
	
	
	
	
	
	
	return 0;
}
