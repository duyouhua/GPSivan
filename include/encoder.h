#ifndef _ENCODER_H_
#define _ENCODER_H_

void update_encoder();

class encoder
{
 public:
  encoder();
  ~encoder();

 public:
  int _pin_a;
  int _pin_b;
  volatile long _value;
  volatile int _lastEncoded;

 public:
  void setup_encoder(int pin_a, int pin_b);
};

extern encoder enc;

#endif
