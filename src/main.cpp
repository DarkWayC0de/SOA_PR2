//
// Created by darkwayc0de on 19/4/20.
//

#include <iostream>
#include <thread>
#include <pthread.h>
#include <memory>

#include "Ventanilla.h"
#include "Cliente.h"
#include "Cola.h"
#define  NSILLAS 4

int main (){
  //TODO Clase Cliente
  //TODO Clase Ventanilla
  //TODO 15 sillas de espera
  //TODO se desechan los cliente si no caben en sillas de espera
  //TODO Si trabajador no tiene cliente y sillas de espera esta vacia ir a descansar hasta nuevo cliente entre en silla
  //TODO Mostrar los eventos
  //TODO Emplear tiempos aleatorios para simulacion de la actividad
  auto SalaDeEspera = std::make_shared<Cola<Cliente,NSILLAS>>();
  auto Cliene1 = std::make_shared<Cliente>();
  auto Cliene2 = std::make_shared<Cliente>();
  auto Cliene3 = std::make_shared<Cliente>();
  auto Cliene4 = std::make_shared<Cliente>();
  auto Cliene5 = std::make_shared<Cliente>();
  auto Cliene6 = std::make_shared<Cliente>();
  auto Cliene7 = std::make_shared<Cliente>();
  SalaDeEspera->add(Cliene1);
  SalaDeEspera->add(Cliene2);
  SalaDeEspera->add(Cliene3);
  SalaDeEspera->add(Cliene4);

  auto extra1 =  SalaDeEspera->extrac();
  auto extra2 =  SalaDeEspera->extrac();
  SalaDeEspera->add(Cliene1);
  SalaDeEspera->add(Cliene2);
  auto extra3 =  SalaDeEspera->extrac();
  auto extra4 =  SalaDeEspera->extrac();

;
  SalaDeEspera->add(Cliene3);
  SalaDeEspera->add(extra1);
  SalaDeEspera->add(extra3);


 /*
  // Construimos Correos
 // Ventanilla ventanillaA(punteroSalaDeEspera);
  //Ventanilla ventanillaB();
  //Ventanilla ventanillaC();
  //std::thread hiloventanillA(ventanillaA->trabaja());




  //Abre Correos
  Cliente  cliente1();
  Cliente  cliente2();
  Cliente  cliente3();
  Cliente  cliente4();
  Cliente  cliente5();
  Cliente  cliente6();
  Cliente  cliente7();
  Cliente  cliente8();
  Cliente  cliente9();
  Cliente  cliente10();
  Cliente  cliente11();
  Cliente  cliente12();
  Cliente  cliente13();
  Cliente  cliente14();
  Cliente  cliente15();
  Cliente  cliente16();

  */
  return 0;
}