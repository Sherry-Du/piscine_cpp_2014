/**
 * vadee_s
 */

#ifndef LEMON_
#define LEMON_

#include <iostream>
#include "Fruit.h"

class			Lemon : public Fruit
{

 public:

  Lemon();
  ~Lemon();

  virtual std::string const&	getName() const;
};

#endif
