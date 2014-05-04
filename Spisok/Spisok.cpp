#include <iostream>
#include <time.h>

using namespace std;

/// \file spisok.cpp

/// Struktura spiska
struct list  
{
	int value;
	list* next;

	/// \fn Add element in nachalo spiska
	void InsertHead (int a, list *&p, list *&pF) 
	{
		p = new list;
		p->value = a;
		p->next=pF;
		pF=p;

	}

	/// \fn Poluchenie elementa iz spiska po ego nomeru
	void GetValue (int n, list*p, list *pF) 
		for (int i = 0; i < n; i++)
		{
			p = pF;
			pF = pF->next;
		}
		cout <<"value: " <<p->value <<endl;
	}
	
/// \fn Udalenie elementa 
	void remove (int n, list *p, list *pF) 
	{

		int i;
		for (i = 0; i < (n-1); i++)
		{
			p = pF;
			pF = pF->next;
		}
		pF = pF->next;

		for (i += 2; i < n; i++)
		{
			p = pF;
			pF = pF->next;
		}
	}
};

/// \fn osnovnaya functiya
int main()
{
	srand(time(NULL));
	list *pFirst = NULL; /// Ukazatel na nachalo spiska
	list *p; ///Ukazatel na spisok
	int n = 5; ///Kol-vo elementov v spiske

	for (int i = 0; i < n; i++) /// Iznachalno zapolnim spisok
	{
		p->InsertHead(rand() % 100, p, pFirst);
	}

	///Vivod spiska
	while (p)
	{
		cout << p->value << endl;
		p = p->next;
	}

	///Vivod znacheniya elementa iz spiska
	int m;
	cout <<"Enter number of element in list: ";
	cin >> m;
	p->GetValue(m, p, pFirst);

	///Udalaem znachenie iz spiska
	int k;
	cout <<"Enter number of element, which you would like to delete: ";
	cin >> k;
	for (int i = 0; i<n; i++)
	{
		if ((i+1) == k)
		{
			p->remove(k+1, p, pFirst);  
		}
		else /// Vivod spiska
		{
			p->GetValue(i+1,p,pFirst);
			cout<<"\n";
		}
	}

	return 0;
}
