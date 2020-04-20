//
// Created by darkwayc0de on 19/4/20.
//

#ifndef SOA_1920_SINCRONIZACION_DARKWAYC0DE_SRC_CLIENTE_H_
#define SOA_1920_SINCRONIZACION_DARKWAYC0DE_SRC_CLIENTE_H_

class Cliente {
 private:
  char ID_;
 public:
  char GetId() const;
 public:
  void SetId(char id);
 public:
  explicit Cliente(char id);
};

#endif //SOA_1920_SINCRONIZACION_DARKWAYC0DE_SRC_CLIENTE_H_
