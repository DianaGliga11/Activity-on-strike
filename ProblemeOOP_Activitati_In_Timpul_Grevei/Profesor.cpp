//
// Created by Diana on 5/31/2024.
//

#include "Profesor.h"

Profesor::Profesor(): inGreva(false) {}

Profesor::Profesor(const Profesor &p) {
    this->nume = p.nume;
    this->disciplina = p.disciplina;
    this->inGreva = p.inGreva;
    this->clase = p.clase;
}

Profesor::Profesor(string n, string d, bool g, vector<string> &c) :
    nume(n), disciplina(d), inGreva(g), clase(c){}

Profesor::~Profesor() {
    inGreva = false;
}

string Profesor::getNume() {
    return this->nume;
}

string Profesor::getDisciplina() {
    return this->disciplina;
}

bool Profesor::getInGreva() {
    return this->inGreva;
}

vector<string> Profesor::getClase() {
    return this->clase;
}

bool Profesor::operator==(Profesor &p) {
    return ((this->nume == p.nume) && (this->disciplina == p.disciplina)
    && (this->inGreva == p.inGreva) && (this->clase == p.clase));
}

Profesor &Profesor::operator=(const Profesor &p) {
    if(this == &p)
        return *this;
    this->nume = p.nume;
    this->disciplina = p.disciplina;
    this->inGreva = p.inGreva;
    this->clase = p.clase;
    return *this;
}

ostream& operator<<(ostream& os, const Profesor &p) {
    os << p.nume << " " << p.disciplina << " " << p.inGreva << " ";
    for(const auto & i : p.clase){
        os << i << " ";
    }
    os << endl;
    return os;
}

void Profesor::setNume(string n) {
    this->nume = n;
}

void Profesor::setDisciplina(string d) {
    this->disciplina = d;
}

void Profesor::setInGreva(bool g) {
    this->inGreva = g;
}

void Profesor::setClase(vector<string> &c) {
    this->clase = c;
}
