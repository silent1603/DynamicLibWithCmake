#ifndef SHARED_H
#define SHARED_H

#include "shared_EXPORTS.h"
extern "C" void SHARED_EXPORT f();

class SHARED_EXPORT X {
public:
  X();
  void mX();
};
#endif