//
// Created by Diana on 5/31/2024.
//

#include <cassert>
#include <iostream>
#include "Teste.h"
#include "Profesor.h"
#include "Repo.h"
#include "Service.h"

using namespace std;

void Teste::teste_Entitate() {
    vector<string> c1 = {"11A", "12B", "9A", "9C"};
    Profesor p1("Andrei", "Matematica", true, c1);
    assert(p1.getNume() == "Andrei");
    assert(p1.getInGreva() == true);
    assert(p1.getDisciplina() == "Matematica");
    assert(p1.getClase() == c1);
    assert(p1.getClase()[0] == "11A");
    p1.setInGreva(false);
    assert(p1.getInGreva() == false);
    Profesor p2;
    p2 = p1;
    assert(p2.getNume() == "Andrei");
    assert(p1 == p2);
//    cout<<p1;
    cout<<"Testele pentru entitate au trecut cu succes! :)\n";
}

void Teste::testeRepo() {
    Repo r;
    vector<string> c1 = {"11A", "12B", "9A", "9C"};
    vector<string> c2 = {"10A", "12B", "9B"};
    vector<string> c3 = {"11A", "12B", "12C", "9C" , "10E", "11E"};
    Profesor p1("Andrei", "matematica", true, c1);
    Profesor p2("Marin", "fizica", true, c1);
    Profesor p6("Ion", "fizica", true, c2);
    Profesor p3("Ana", "matematica", false, c2);
    Profesor p4("Maria", "informatica", false, c3);
    Profesor p5("Sabin", "matematica", true, c3);
    r.add(p1);
    r.add(p2);
    r.add(p3);
    r.add(p4);
    r.add(p5);
    r.add(p6);
    assert(r.nrProfiGreva() == 4);
    assert(r.profiInGreva().size() == 4);
    assert(r.disciplinaMaxProfesoriGreva()[0] == "matematica");
    assert(r.claseleMaxProfiGreva()[0] == "12B");
    assert(r.disciplinePredate()[0] == "matematica");
    assert(r.disciplinePredate()[1] == "informatica");
    cout<<"Testele pentru repo au trecut cu succes! :)\n";

}

void Teste::teste_Service() {
    Repo r;
    vector<string> c1 = {"11A", "12B", "9A", "9C"};
    vector<string> c2 = {"10A", "12B", "9B"};
    vector<string> c3 = {"11A", "12B", "12C", "9C" , "10E", "11E"};
    Profesor p1("Andrei", "matematica", true, c1);
    Profesor p2("Marin", "fizica", true, c1);
    Profesor p6("Ion", "fizica", true, c2);
    Profesor p3("Ana", "matematica", false, c2);
    Profesor p4("Maria", "informatica", false, c3);
    Profesor p5("Sabin", "matematica", true, c3);
    r.add(p1);
    r.add(p2);
    r.add(p3);
    r.add(p4);
    r.add(p5);
    r.add(p6);
    Service s(r);
    assert(s.nrProfiGrevaService() == 4);
    assert(s.claseleMaxProfiGrevaService()[0] == "12B");
    assert(s.disciplinaMaxProfesoriGrevaService()[0] == "matematica");
    cout<<"Testele pentru service au trecut cu succes! :)\n";
}
