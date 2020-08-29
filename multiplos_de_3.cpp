#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int num, cont, multi=0;
for (cont=1;cont<=10;cont++)
	{
		cout<<"Informe o " <<cont<< "º número: ";
		cin>>num;
		if (num%3==0)
		{
			multi=multi+1;
		}	
	}
	cout<<"Foram informados "<< multi<< " números múltiplos de 3.";	
}
