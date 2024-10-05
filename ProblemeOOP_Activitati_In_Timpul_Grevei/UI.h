//
// Created by Diana on 5/31/2024.
//

#ifndef PROBLEMEOOP_ACTIVITATI_IN_TIMPUL_GREVEI_UI_H
#define PROBLEMEOOP_ACTIVITATI_IN_TIMPUL_GREVEI_UI_H


#include "Service.h"

class UI {
private:
    Service s;
public:
    UI();
    ~UI();
    UI(Service& s);
    void menu();
    void run();
    void nrProfiGreva();
    void disciplinaMaxProfesoriGreva();
    void claseleMaxProfiGreva();
    void disciplinaClasa();
};


#endif //PROBLEMEOOP_ACTIVITATI_IN_TIMPUL_GREVEI_UI_H
