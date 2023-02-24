#ifndef _SAIDA_
#define _SAIDA_
#include "Arduino.h"
class Saida{
    private:
        byte _pin;
        int _tempo = 1000;
        boolean _estado = false;
    public:
        Saida(int pin);
        void test_saida();
};
#endif