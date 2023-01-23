#include <iostream>
#include <cmath>
using namespace std;

int main () {
	setlocale(LC_ALL, "fi_FI");
	
	int luku;
	char laskutoimitus;
	
	while (laskutoimitus != 'L') {
		cout << "Valitse laskutoimitus (1=neliöjuuri, 2=log, 3=exp ja 4=tan, L=lopetus): ";
		cin >> laskutoimitus;
		
		if (laskutoimitus == '1') {
			cout << "Syötä luku: ";
			cin >> luku;
			cout << "Syöttämäsi luvun neliöjuuri on " << sqrt(luku) << endl;
		}
		else if (laskutoimitus == '2') {
			cout << "Syötä luku: ";
			cin >> luku;
			cout << "Syöttämäsi luvun logaritmi on " << log(luku) << endl;
		}
		else if (laskutoimitus == '3') {
			cout << "Syötä luku: ";
			cin >> luku;
			cout << "Syöttämäsi luvun eksponenttifunktio on " << exp(luku) << endl;
		}
		else if (laskutoimitus == '4') {
			cout << "Syötä luku: ";
			cin >> luku;
			cout << "Syöttämäsi luvun tangentti on " << tan(luku) << endl;
		}
	}
	
	return 0;
}