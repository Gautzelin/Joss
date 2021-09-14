#include <iostream>
using namespace std;

bool busquedaLineal(int a[], int n, int dato);

int main()
{
	int a[5]= {4,1,2,3,5};
	busquedaLineal(a, 5, 2);

}

bool busquedaLineal(int a[], int n, int dato)
{
	bool c;
	c = false;
	for (int i=0; i<5; i++)
	{
		if (a[i] == dato)
		{
			cout<<"dato encontrado "<<"posicion "<<i<<endl;
			c=true;
	//	return true;
		}
	}
	
	if(c==false)
	{
		cout<<"el valor no esta en el arreglo";
//	return false;
	}
//	return 0;
}
