//
// Created by darkwayc0de on 19/4/20.
//

#include <iostream>
#include <thread>
#include <pthread.h>
#include <memory>
#include <ctime>
#include <cstdlib>
#define  NSILLAS 15
#include "Cliente.h"
#include "Cola.h"

void trabajar(const std::shared_ptr<Cola<Cliente,NSILLAS>>& SalaDeEspera,char  ID);

int main (){
  srand(time(nullptr));
  auto SalaDeEspera = std::make_shared<Cola<Cliente,NSILLAS>>();

  std::thread hiloventanillaA(&trabajar,std::ref(SalaDeEspera),'A');
  std::thread hiloventanillaB(&trabajar,std::ref(SalaDeEspera),'B');
  std::thread hiloventanillaC(&trabajar,std::ref(SalaDeEspera),'C');
   int a =0;
  while (true){
    auto cliente = std::make_shared<Cliente>('A'+ a);
    SalaDeEspera->add(cliente);
    a++;
    if(a ==26){
      a=0;
    }
  }
  return 0;
}
void trabajar(const std::shared_ptr<Cola<Cliente,NSILLAS>>& salaDeEspera, char ID){
  while (true){
    std::cout<<"El trabajador"<<ID<<" comprueba si hay clientes esperando\n";
    if (salaDeEspera->empty()){
      std::cout<<"El trabajador"<<ID<<" se fue a descansar\n";
      std::this_thread::sleep_for(std::chrono::seconds(rand()%10));
    }else{
      auto cliente = std::move(salaDeEspera->extrac());
      std::cout<<"El trabajador"<<ID<<" empieza a atender al cliente"<<cliente->ID<<"\n";
      std::this_thread::sleep_for(std::chrono::seconds(rand()%10));
      std::cout<<"El trabajador"<<ID<<" termina de  atender al cliente"<<cliente->ID<<"\n";
    }
  }
}
