#include <iostream>
#include <string>
using namespace std;

int main(){

    int broj_predmeta, broj_studenata;
    cout<<"unesite broj predmeta: "<<endl;
    cin>>broj_predmeta;
    cout<<"unesite broj studenata: "<<endl;
    cin>>broj_studenata;

    string predmeti[broj_predmeta], studenti[broj_studenata];


    for (int i=0; i<broj_predmeta; i++){
        cout<<"unesite nazive predmeta: "<<endl;
        cin>>predmeti[i];
    }

    for (int i=0; i<broj_studenata; i++){
        cout<<"unesite imena studenta: "<<endl;
        cin>>studenti[i];
    }

    int ocjene[broj_studenata][broj_predmeta];
    double prosjek_s[broj_studenata], prosjek_p[broj_predmeta];

    for (int i=0; i<broj_studenata; i++) {
        cout << "Unesite ocjene za studenta: " << studenti[i] << endl;
        double suma_s = 0;

        // unos ocjena za svaki predmet za studente
        for (int j=0; j<broj_predmeta; j++) {
            cout << "Predmet " << predmeti[j] << ":" << endl;
            cin >> ocjene[i][j];
            suma_s += ocjene[i][j];
        }

        prosjek_s[i] = suma_s / broj_predmeta;

    }

    for (int i=0; i<broj_studenata; i++){
        cout<<studenti[i]<<" : "<<prosjek_s<<endl;

    }

    for (int i=0; i<broj_predmeta; i++){
        double suma_p = 0;

        for (int j=0; j<broj_studenata; i++){
            suma_p += ocjene[j][i];
        }
        prosjek_p[i] = suma_p / broj_studenata;
    }

    for (int i=0; i<broj_predmeta; i++){
        cout<<(predmeti[i])<<" : "<<prosjek_p[i] <<endl;
    }


    return 0;
}
