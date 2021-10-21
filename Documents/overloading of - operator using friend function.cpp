#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
		void set_data(int x, int y)
		{
			a = x;b = y;
		}
		void show_data()
		{
			cout<<"A="<<a<<"B="<<b;
		}
		friend complex operator - (complex);
};
complex operator - (complex c)
{
	complex temp;
	temp.a = -c.a;
	temp.b = -c.b;
	return(temp);
	
	 
}

int main()
{
	complex c1,c2;
	c1.set_data(3,4);
	c2 = -c1;
	c2.show_data();
	return 0;
}
