#include<iostream>
using namespace std;
class time{
	private:
		int hr,min,sec;
	public:
	void set_time(int h, int m, int s )
	{
		hr = h;
		min = m;
		sec = s;
	}
	void show_time()
	{
		cout<<hr<<":"<<min<<":"<<sec;
	}


void normalize()
{
	min = min + sec/60;
	sec = sec%60;
	hr = hr + min/60;
	min = min%60;
	
}

time operator +(time t)
{
	time temp;
	temp.hr = hr + t.hr;
	temp.min = min + t.min;
	temp.sec = sec + t.sec;
	return(temp);
}


};

int main(){

time t1,t2,t3;
t1.set_time(4,35,26);
t2.set_time(3,50,45);
t3=t1+t2;
t3.normalize();
t3.show_time();
return 0;

}
