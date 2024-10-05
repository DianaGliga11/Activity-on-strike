//
// Created by Diana on 5/31/2024.
//

#ifndef PROBLEMEOOP_ACTIVITATI_IN_TIMPUL_GREVEI_SERVICE_H
#define PROBLEMEOOP_ACTIVITATI_IN_TIMPUL_GREVEI_SERVICE_H


#include "Repo.h"

class Service {
private:
    Repo *r;
public:
    Service();
    ~Service();
    Service(Repo& r);
    int nrProfiGrevaService();
    vector<string> disciplinaMaxProfesoriGrevaService();
    vector<string> claseleMaxProfiGrevaService();
    vector<string> disciplinaClasaService(string& cl);
};


#endif //PROBLEMEOOP_ACTIVITATI_IN_TIMPUL_GREVEI_SERVICE_H
