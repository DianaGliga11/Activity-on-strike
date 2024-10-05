//
// Created by Diana on 5/31/2024.
//

#ifndef PROBLEMEOOP_ACTIVITATI_IN_TIMPUL_GREVEI_REPO_H
#define PROBLEMEOOP_ACTIVITATI_IN_TIMPUL_GREVEI_REPO_H


#include "Profesor.h"
class Repo {
private:
    vector<Profesor> profesori;
public:
    Repo();
    ~Repo();
    void add(Profesor &p);
    int nrProfiGreva();
    vector<string> disciplinaMaxProfesoriGreva();
    vector<Profesor> profiInGreva();
    vector<string> claseleMaxProfiGreva();
    vector<string> clasele();
    vector<string> disciplinePredate();
    vector<string> disciplinaClasa(string& cl);

};




#endif //PROBLEMEOOP_ACTIVITATI_IN_TIMPUL_GREVEI_REPO_H
