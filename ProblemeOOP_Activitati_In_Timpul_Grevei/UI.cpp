//
// Created by Diana on 5/31/2024.
//

#include <iostream>
#include "UI.h"

UI::UI() {

}

UI::~UI() {

}

void UI::nrProfiGreva() {
    cout << "Numarul profesorilor in greva este: " << s.nrProfiGrevaService() << endl;
}

void UI::menu() {
    cout << "\n====MENIU====\n";
    cout << "1. Numarul profesorilor in greva\n";
    cout << "2. Disciplina/disciplinele cu cei mai multi profesori in greva\n";
    cout << "3. Clasa la care profesorii care ar trebui sa predea (dar nu predau pentru ca sunt in greva) "
            "sunt cei mai multi.\n";
    cout << "4. Disciplinele care se pot tine\n";
}

void UI::run() {
    int optiune = 1;
    while(optiune != 0){
        menu();
        cout << "Introduceti optiunea dorita: ";
        cin>>optiune;
        switch (optiune) {
            case 1:
                nrProfiGreva();
                break;
            case 2:
                disciplinaMaxProfesoriGreva();
                break;
            case 3:
                claseleMaxProfiGreva();
                break;
            case 4:
                disciplinaClasa();
                break;
            case 0:
                break;
        }
    }
}

UI::UI(Service& s) {
    this->s = s;
}

void UI::disciplinaMaxProfesoriGreva() {
    vector<string> rez = s.disciplinaMaxProfesoriGrevaService();
    if(rez.empty())
        cout << "Toti profesorii predau\n";
    for(auto &i: rez) {
        cout << "Disciplina cu cei mai multi profesori in greva este: " << i << endl;
    }
}

void UI::claseleMaxProfiGreva() {
    vector<string> clase = s.claseleMaxProfiGrevaService();
    if(clase.empty()){
        cout << "Toti profesorii predau!" << endl;
    }
    for(auto &i: clase){
        cout<< "Clasa cu cei  ai multi profesori in greva: " << i << endl;
    }
}

void UI::disciplinaClasa() {
    string clasa;
    cout<<"Introduceti clasa:\n";
    cin>>clasa;
    vector<string> rez = s.disciplinaClasaService(clasa);
    if(rez.empty())
        cout << "Nu se poate tine nicio disciplina pentru clasa " << clasa << endl;
    for(auto &i: rez){
        cout<<"Disciplina: "<<i<<endl;
    }
}
