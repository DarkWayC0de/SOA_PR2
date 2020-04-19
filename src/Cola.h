//
// Created by darkwayc0de on 19/4/20.
//

#ifndef SOA_1920_SINCRONIZACION_DARKWAYC0DE_SRC_COLA_H_
#define SOA_1920_SINCRONIZACION_DARKWAYC0DE_SRC_COLA_H_
#include <memory>
#include <vector>
template <class T, size_t  N>
class Cola{
 private:
  std::vector<std::shared_ptr<T>> salaDeEspera;
  size_t contenido;
  size_t indiceIntro;
  size_t indiceExtr;

 public:
  Cola():contenido(0),indiceIntro(0),indiceExtr(0) {
    salaDeEspera.resize(N);
  }

  void add(std::shared_ptr<T> ptrelemnet){
    if(contenido < N){
      salaDeEspera[indiceIntro]= std::move(ptrelemnet);
      indiceIntro++;
      if(indiceIntro>=N){
        indiceIntro = 0;
      }
      contenido++;
    }
  }

  std::shared_ptr<T> extrac(){
    contenido--;
    std::shared_ptr<T> ptrelemnt = std::move(salaDeEspera[indiceExtr]);
    indiceExtr++;
    if(indiceExtr>=N){
      indiceExtr = 0;
    }
    return ptrelemnt;
  }

  bool empty(){
    return contenido == 0;
  }

};

#endif //SOA_1920_SINCRONIZACION_DARKWAYC0DE_SRC_COLA_H_
