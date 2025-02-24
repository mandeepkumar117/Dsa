#include<iostream>
using namespace std;
template<typename v1>
class Cybrom
{
	v1 a;
	public:Cybrom(v1 x)
	{
		a=x;
	}
	v1 show()
	{
		return a+1;
	}
};
template<typename x1,typename x2>
class Bhopal
{
	public:void sum(x1 t1,x2 t2)
	{
		cout<<t1+t2;
	}
};
int main(){
    Cybrom<int>obj(34);
    cout<<obj.show()<<"\n";
    Bhopal<int,double>b;
    b.sum(3,5.4);
}

