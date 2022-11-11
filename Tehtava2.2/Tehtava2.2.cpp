#include <iostream>
#include <limits>
using namespace std;


// Lukee vain 3 arvoa, en tiedä miksi.
void lue_arvot(int* t, int n)
{
	t = new int[n];
	int luku = 0;

	for (int i = 0; i < n; i++)
	{
		cout << "Anna kokonaisluku:";
		cin >> luku;

		if (luku > numeric_limits<int>::max() || luku < numeric_limits<int>::min())
		{
			cout << "Syöte liian suuri tai liian pieni.\n";
		}
		else
		{
			t[i] = luku;
			i++;
		}
	}
}

int main()
{
	int* taulukko = new int;
	lue_arvot(taulukko, 5);
}
