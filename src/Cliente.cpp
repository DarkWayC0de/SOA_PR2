//
// Created by darkwayc0de on 19/4/20.
//

#include "Cliente.h"

Cliente::Cliente(char id) : ID_(id) {}
void Cliente::SetId(char id) {
  ID_ = id;
}
char Cliente::GetId() const {
  return ID_;
}
