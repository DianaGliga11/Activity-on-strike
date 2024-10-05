//
// Created by Diana on 5/31/2024.
//

#include <map>
#include "Repo.h"

int Repo::nrProfiGreva() {
    int crt = 0;
    for(auto & i : profesori){
        if(i.getInGreva())
            crt++;
    }
    return crt;
}

Repo::Repo() {

}

Repo::~Repo() {

}

void Repo::add(Profesor& p) {
    profesori.push_back(p);
}

vector<string> Repo::disciplinaMaxProfesoriGreva() {
///    Functia returneaza un vector ce contine disciplinele cu cei mai multi
///    profesori in greva.

    vector<Profesor> profInGreva = profiInGreva();
    int max =0;
    vector<string> rez ;
    for(int i=0;i<profInGreva.size()-1;i++){
        int crt = 1;
        string dis = profInGreva[i].getDisciplina();
        for(int j=i+1;j<profInGreva.size();j++){
            if(profInGreva[j].getDisciplina() == dis) {
                crt++;
                if (crt > max ) {
                    max = crt;
                    while(!rez.empty())
                        rez.pop_back();
                    rez.push_back(dis);
                }
                else if(crt == max)
                    rez.push_back(dis);
            }
        }
    }
    return rez;
}

vector<Profesor> Repo::profiInGreva() {
    ///Functia returneaza un vector cu toti profesorii aflati
    ///in greva.

    vector<Profesor> profInGreva;
    for(auto &i : profesori){
        if(i.getInGreva())
            profInGreva.push_back(i);
    }
    return profInGreva;
}

vector<string> Repo::claseleMaxProfiGreva() {
    ///Functia returneaza un vector cu clasele cu cei mai multi
    ///profesori in greva.

    vector<Profesor> profInGreva = profiInGreva();
    vector<string> clase = clasele();
    int max = 0;
    vector<string> rez ;
    for(int i=0;i<clase.size()-1;i++){
        int crt = 1;
        string c = clase[i];
        for(int j=i+1;j<clase.size();j++){
            if(c == clase[j] ){
                crt++;
                if(crt>max){
                    max = crt;
                    while(!rez.empty())
                        rez.pop_back();
                    rez.push_back(c);
                }
                else{
                    if(crt == max){
                        rez.push_back(c);
                    }
                }
            }
        }
    }
    return rez;
}

vector<string> Repo::clasele() {
    ///Functia returneaza toate clasele

    vector<Profesor> profInGreva = profiInGreva();
    vector<string> clase ;
    for(auto &i:profInGreva){
        for(int j=0;j<i.getClase().size();j++){
            clase.push_back(i.getClase()[j]);
        }
    }
    return clase;
}

vector<string> Repo::disciplinePredate() {
    ///Functia returneaza disciplina/disciplinele care
    ///pot fi predate.

    vector<string> dis;
    for(auto &i:profesori){
        if(!i.getInGreva()){
            dis.push_back(i.getDisciplina());
        }
    }
    return dis;
}

vector<string> Repo::disciplinaClasa(string& cl) {
    ///Functia returneaza un vector cu disciplinele care se
    ///pot preda la o clasa citita de la tastatura.

    vector<string>rez;
    for(auto &i: profesori){
        if(!i.getInGreva()){
            for(auto &j: i.getClase()){
                if(j == cl){
                    rez.push_back(i.getDisciplina());
                }
            }
        }
    }
    return rez;
}
