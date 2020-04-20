//
// Created by darkwayc0de on 19/4/20.
//

#ifndef SOA_1920_SINCRONIZACION_DARKWAYC0DE_SRC_COLA_H_
#define SOA_1920_SINCRONIZACION_DARKWAYC0DE_SRC_COLA_H_
#include <memory>
#include <vector>
#include <atomic>
template <class T, size_t  N>
class Cola{
 private:
  std::vector<std::shared_ptr<T>> salaDeEspera;
  std::atomic<size_t> contenido;
  std::atomic<size_t> indiceIntro;
  std::atomic<size_t> indiceExtr;

 public:
  Cola():contenido(0),indiceIntro(0),indiceExtr(0) {
    salaDeEspera.resize(N);
  }

  void add(std::shared_ptr<T> ptrelement){
    if(contenido.load(std::memory_order_seq_cst) < N){
      salaDeEspera[indiceIntro.load(std::memory_order_seq_cst)]= ptrelement;
      indiceIntro.store( indiceIntro.load(std::memory_order_seq_cst) + 1, std::memory_order_seq_cst);
      if(indiceIntro.load(std::memory_order_seq_cst)>=N){
        indiceIntro.store(0);
      }
      contenido.store( contenido.load(std::memory_order_seq_cst) + 1,std::memory_order_seq_cst);
    }
  }

  std::shared_ptr<T> extrac(){
    if(contenido.load(std::memory_order_seq_cst)>0) {
      contenido.store(contenido.load(std::memory_order_seq_cst) - 1);
      std::shared_ptr<T> ptrelemnt = std::move(salaDeEspera[indiceExtr.load(std::memory_order_seq_cst)]);
      indiceExtr.store(indiceExtr.load(std::memory_order_seq_cst) + 1, std::memory_order_seq_cst);
      if (indiceExtr.load(std::memory_order_seq_cst) >= N) {
        indiceExtr.store(0, std::memory_order_seq_cst);
      }
      return ptrelemnt;
    }else{
      std::shared_ptr<T> ptrelemnt = nullptr;
      return ptrelemnt;
    }
  }

  bool empty(){
    return contenido.load(std::memory_order_seq_cst) == 0;
  }

};

#endif //SOA_1920_SINCRONIZACION_DARKWAYC0DE_SRC_COLA_H_
