#include <iostream> // korzystając z funkcji if else sprawdź czy x jest większe od y jeśli tak wyświetl komunikat większe jeśli nie wyświetl komunikat mniejsze
using namespace std;
int main() {
    int x;
    int y;
    cout << "Wprowadz x: ";
    cin >> x;
    cout << "Wprowadz y: ";
    cin >> y;
    if (x > y) {
        cout << "x jest wieksze od y";
    }
    else if (x<y) {
        cout << "x jest mniejsze od y";
    }
    else {
        cout << "x jest rowne y";
    }
    return 0;
}
