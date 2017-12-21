/*
*Author:GeneralSandman
*Code:https://github.com/GeneralSandman/TinyWeb
*E-mail:generalsandman@163.com
*Web:www.generalsandman.cn
*/

/*---class TimerId---
*
****************************************
*
*/

#ifndef TIMER_ID_H
#define TIMER_ID_H

#include "timer.h"
#include "log.h"

class TimerId
{
private:
  Timer *m_pTimer;
  unsigned long long m_nIdNum;

public:
  TimerId(Timer *timer = nullptr, unsigned long long idnum = 0)
      : m_pTimer(timer),
        m_nIdNum(idnum)
  {

    LOG(Debug) << "class TimerId construct\n";
  }

  friend class Timer;
  friend class TimerQueue;
};

#endif // !TIMER_ID_H
