//
// Created by Diana on 5/31/2024.
//

#ifndef PROBLEMEOOP_ACTIVITATI_IN_TIMPUL_GREVEI_PROFESOR_H
#define PROBLEMEOOP_ACTIVITATI_IN_TIMPUL_GREVEI_PROFESOR_H
#include<string>
#include <vector>
#include <fstream>

using namespace std;

class Profesor {
private:
    string nume, disciplina;
    bool inGreva;
    vector<string> clase;
public:
    Profesor();
    Profesor(const Profesor& p);
    Profesor(string n, string d, bool g, vector<string>& c);
    ~Profesor();
    string getNume();
    string getDisciplina();
    bool getInGreva();
    vector<string> getClase();
    void setNume(string n);
    void setDisciplina(string d);
    void setInGreva(bool g);
    void setClase(vector<string> &c);
    bool operator==(Profesor& p);
    Profesor& operator =(const Profesor& p);
    friend ostream &operator<<(std::ostream &os, const Profesor &p);
};




#endif //PROBLEMEOOP_ACTIVITATI_IN_TIMPUL_GREVEI_PROFESOR_H
