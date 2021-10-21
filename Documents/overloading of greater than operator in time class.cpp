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
int operator > (time t)        // we have used int here bcz we want to return 0 and 1.
{
	if(hr > t.hr)
	return (1);
	else if(hr < t.hr)
	return (0);
	else if(min > t.min)
	return (1);
	else if(min < t.min)
	return (0);
	else if(sec > t.sec)
	return (1);
	else
	return (0);
}

};

int main(){

time t1,t2;
t1.set_time(4,35,26);
t2.set_time(3,50,45);
if(t1>t2)
t1.show_time();
else
t2.show_time();
return 0;

}
