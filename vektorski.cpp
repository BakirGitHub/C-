#include <iostream>
#include <string>
#include <vector>
using namespace std;

int brojStudenataNaPredmetu(string predmet, vector<vector<string> > predmeti) {

    int brojac = 0;

    for (int i=0; i<predmeti.size(); i++) {
        for (int j=0; j<predmeti[i].size(); j++) {
            if (predmeti[i][j] == predmet) {
                brojac++;
            }
        }
    }
    return brojac;
}

void
ispisiStudenteNaPredmetu(string predmet,
                        vector<vector<string> > predmeti,
                        vector<string> studenti) {

    for (int i=0; i<predmeti.size(); i++) {
        for (int j=0; j<predmeti[i].size(); j++) {
            if (predmeti[i][j] == predmet) {
                cout << studenti[i] << endl;
            }
        }
    }
}

void
dodajPredmet(string student, string predmet,
             vector<vector<string> > &predmeti,
             vector<string> studenti) {

    int index_studenta = -1;

    for (int i=0; i<studenti.size(); i++) {
        if (studenti[i] == student) {
            index_studenta = i;
            break;
        }
    }

    // nismo pronašli studenta
    if (index_studenta == -1) {
        return;
    }

    // provjeravamo da li student vec slusa predmet
    for (int i=0; i<predmeti[index_studenta].size(); i++) {
        if (predmeti[index_studenta][i] == predmet) {
            return;
        }
    }
    predmeti[index_studenta].push_back(predmet);
}

int main() {

    vector<string> studenti = vector<string>();
    string unos = "";

    while (true) {
        cout << "Unesite studenta: ";
        cin >> unos;

        if (unos == "KRAJ") {
            break;
        }

        studenti.push_back(unos);
    }

    vector<vector<string> > predmeti = vector<vector<string> >();

    for (int i=0; i<studenti.size(); i++) {

        predmeti.push_back(vector<string>());
        while (true) {
            cout << "Unesite predmet za studenta " << studenti[i] << ": ";
            cin >> unos;

            if (unos == "KRAJ") {
                break;
            }

            predmeti[i].push_back(unos);
        }
    }

//    cout << brojStudenataNaPredmetu("a", predmeti);


    dodajPredmet("Malek", "Predmet", predmeti, studenti);
    ispisiStudenteNaPredmetu("Predmet", predmeti, studenti);

    return 0;
}