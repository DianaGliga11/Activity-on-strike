//
// Created by Diana on 5/31/2024.
//

#include "Service.h"

Service::Service() {

}

Service::~Service() {

}

int Service::nrProfiGrevaService() {
    return r->nrProfiGreva();
}

Service::Service(Repo &r) {
    this->r = &r;
}

vector<string> Service::disciplinaMaxProfesoriGrevaService() {
    return r->disciplinaMaxProfesoriGreva();
}

vector<string> Service::claseleMaxProfiGrevaService() {
    return r->claseleMaxProfiGreva();
}

vector<string> Service::disciplinaClasaService(string& cl) {
    return r->disciplinaClasa(cl);
}
