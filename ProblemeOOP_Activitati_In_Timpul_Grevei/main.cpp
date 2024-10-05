#include <iostream>
#include"Teste.h"
#include "Repo.h"
#include "Service.h"
#include "UI.h"

int main() {
    Teste teste;
    teste.teste_Entitate();
    teste.testeRepo();
    teste.teste_Service();
    vector<string> c1 = {"11A", "12B", "9A", "9C"};
    vector<string> c2 = {"10A", "12B", "9B"};
    vector<string> c3 = {"11A", "12B", "12C", "9C" , "10E", "11E"};
    Repo r;
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
    UI ui(s);
    ui.run();
    return 0;
}
