/*-----------------------------------------------------------------------------------
  Program  : MillisTimerLib
  Descr    : Library to use the Millis function as a task scheduler.
             (Be careful with using the Delay function in other parts of the program)
  Author   : Fellipe Couto [ http://www.efeitonerd.com.br ]
  GitHub   : https://github.com/fellipecouto/MillisTimerLib
  Date     : 2020-06-07

  new added enable disable timer using timer.reset()  // timer.timer() return true/false asper timeout
  timer.reset(true)  //timer as per timeout true or false , timer running
  timer.reset(false)  //timer always false no action  , but timer running

  timer.reset();  old-timer set by intialize setup loop object
  timer.reset(long set-time);  resets timer along new set-timer
  -----------------------------------------------------------------------------------*/
#include "MillisTimerLib.h"
#include <Arduino.h>

unsigned long _oldTime = 0;
unsigned long _time = 0;

bool _on-off = true;    // key bool for timer out enable other wise can't stop timer.timer() return bool; 


MillisTimerLib::MillisTimerLib(long delayTime) {
  setDelay(delayTime);
}

bool MillisTimerLib::timer() {
  _on-off = en-time
  if (timerCount() >= _time) {
      reset();
      return true & _on-off;
    }
  return false & _on-off;
}

bool MillisTimerLib::timer(bool en-timer) {
  _on-off = en-timer
  if (timerCount() >= _time) {
      reset();
      return true & _on-off;
    }
  return false & _on-off;
}



long MillisTimerLib::timerCount() {
  return millis() - _oldTime;
}

void MillisTimerLib::setDelay(long delayTime) {
  if (delayTime > 0) {
    _time = delayTime;
  } else {
    _time = 0;
  }
}

long MillisTimerLib::getDelay() {
  return _time;
}

void MillisTimerLib::reset() {
  _oldTime = millis();
}

void MillisTimerLib::reset(long delayTime) {
  _oldTime = millis();
   if (delayTime > 0) {
    _time = delayTime;
  } else {
    _time = 0;
  }
}

