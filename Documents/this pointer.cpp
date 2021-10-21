#include<iostream>
using namespace std;
class test
{
	private:
		int a;
		public:
			void setData(int a)
			{
				this -> a = a;
			}
			void showData(){
			cout<<"x:"<<a;
			}
			
};
int main()
{
	test t1;
	int a;
	t1.setData(12);
	t1.showData();
	
}
