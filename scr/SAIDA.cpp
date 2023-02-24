#include "SAIDA.h"
Saida::Saida(int pin){
    _pin = pin;
    pinMode(_pin, OUTPUT);
}
test_saida(){
    digitalWrite(_pin, HIGH);
    delay(_tempo);
    digitalWrite(_pin, LOW);
    delay(_tempo);
    
}