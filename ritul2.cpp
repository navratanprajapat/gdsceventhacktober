#include<iostream>
using namespace std;
class complex
{
	int real,imag;
	public:
		complex()
		{
			real=1;
			imag=1;
		}
		complex(int r,int i)
		{
			real=r;
			imag=i;
		}
		complex operator -(complex c)
		{
			complex t;
			t.real=real*c.real;
			t.imag=imag*c.imag;
	        return t;
		}
		void print(){
			cout<<"multiple of two complex no is: ";
			cout<<real<<" + i"<<imag<<endl;
		}
};
int main()
{
	complex c1(5,10);
	complex c2(2,2);
	complex c3;
	c3=c1-c2;
	c3.print();
	return 0;
}
