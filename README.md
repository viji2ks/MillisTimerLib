# MillisTimer
Library to use the Millis function as a task scheduler

*(Be careful with using the Delay function in other parts of the program)*

## Usage

```c++
//Initializes the library by passing the delay timer value in milliseconds
MillisTimerLib(long delayTime);

//Returns true every time cycle
bool timer();    // timer continuos no user control to off 
bool timer(true); // enable customer timer on
bool timer(false);  // disable timer off

//Returns the delay count in milliseconds
long timerCount();

//Sets a new delay timer value in milliseconds
void setDelay(long delayTime);

//Returns the currently configured delay value in milliseconds
long getDelay();

//Reset timer counter
void reset();
void reset(3000); // reset the timer with new delay time of 3000ms or 3 sec
```

Author : Fellipe Couto [ http://www.efeitonerd.com.br ]

Date : 2020-06-07
