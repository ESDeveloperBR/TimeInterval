/**
 * @file TimeInterval.h
 * @author ESDeveloperBR (esdeveloperbr@gmail.com)
 * @brief This time control library is based on the MILLIS() and MICROS() procedures, with the main objective of replacing the DELAY() command, thus avoiding the programming LOOP paralyzation.
 * @brief [Português BR]
 * @brief Esta biblioteca de controle de tempo é baseada nos procedimentos MILLIS() e MICROS(), com o objetivo principal de substituir o comando DELAY(), evitando assim a paralisação do LOOP de programação.
 * @version 0.3.7
 * @date 2022-12-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef TIMEINTERVAL_H
#define TIMEINTERVAL_H

#include <Arduino.h>

#define TIMEINTERVAL_VERSION "0.3.7 update 01/12/2022"  

// <<<<<<<<<<<<<<< Classe Botão Externo >>>>>>>>>>>>>>
/**
 * @brief Class with the objective of controlling time intervals avoiding the stop of the program's LOOP.
 * @brief [Português BR]
 * @brief Classe como objetivo de controlar intervalos de tempo evitando a parada do LOOP do programa.
 * 
 * @note See the usage example files.
 * @note [Português BR]
 * @note Veja os arquivos de exemplo de utilização.
 */
class TimeInterval{
  private:
    long _start_Millis = millis();
    long _start_Micros = micros();
     
  public:
    boolean intervalMillis(long millisTime);
    void resetMillis();
    boolean intervalMicros(long microsTime);
    void resetMicros();
    void stopwatchStartMillis();
    long stopwatchStopMillis();
    void stopwatchStartMicros();
    long stopwatchStopMicros();
};

#endif