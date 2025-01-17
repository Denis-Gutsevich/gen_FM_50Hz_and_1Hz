//
// File: gen_FM_50Hz_and_1Hz.cpp
//
// Code generated for Simulink model 'gen_FM_50Hz_and_1Hz'.
//
// Model version                  : 1.2
// Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
// C/C++ source code generated on : Fri Jan 17 15:07:08 2025
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-M
// Code generation objectives:
//    1. Traceability
//    2. Execution efficiency
//    3. ROM efficiency
// Validation result: Not run
//
#include "gen_FM_50Hz_and_1Hz.h"
#include <cmath>
#include "rtwtypes.h"

// Model step function
void gen_50Hz_and_1Hz::step()
{
  real_T HoldSine;
  real_T rtb_Sum;

  // Sin: '<Root>/1 Hz'
  if (rtDW.systemEnable != 0) {
    rtb_Sum = 6.2831853071795862 * ((((&rtM)->Timing.clockTick0+(&rtM)
      ->Timing.clockTickH0* 4294967296.0)) * 1.0E-5);
    rtDW.lastSin = std::sin(rtb_Sum);
    rtDW.lastCos = std::cos(rtb_Sum);
    rtDW.systemEnable = 0;
  }

  // Sum: '<Root>/Sum' incorporates:
  //   Constant: '<Root>/Carrier'
  //   Sin: '<Root>/1 Hz'

  rtb_Sum = ((rtDW.lastSin * 0.99999999802607908 + rtDW.lastCos *
              -6.283185303045417E-5) * 0.99999999802607908 + (rtDW.lastCos *
              0.99999999802607908 - rtDW.lastSin * -6.283185303045417E-5) *
             6.283185303045417E-5) + 50.0;

  // Outport: '<Root>/Outport' incorporates:
  //   DiscreteIntegrator: '<Root>/Discrete-Time Integrator'
  //   Gain: '<Root>/Gain2'
  //   Trigonometry: '<Root>/Cos'

  rtY.Outport = std::cos(6.2831853071795862 * rtDW.DiscreteTimeIntegrator_DSTATE);

  // Update for Sin: '<Root>/1 Hz'
  HoldSine = rtDW.lastSin;
  rtDW.lastSin = rtDW.lastSin * 0.99999999802607908 + rtDW.lastCos *
    6.283185303045417E-5;
  rtDW.lastCos = rtDW.lastCos * 0.99999999802607908 - HoldSine *
    6.283185303045417E-5;

  // Update for DiscreteIntegrator: '<Root>/Discrete-Time Integrator'
  rtDW.DiscreteTimeIntegrator_DSTATE += 1.0E-5 * rtb_Sum;

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The resolution of this integer timer is 1.0E-5, which is the step size
  //  of the task. Size of "clockTick0" ensures timer will not overflow during the
  //  application lifespan selected.
  //  Timer of this task consists of two 32 bit unsigned integers.
  //  The two integers represent the low bits Timing.clockTick0 and the high bits
  //  Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.

  (&rtM)->Timing.clockTick0++;
  if (!(&rtM)->Timing.clockTick0) {
    (&rtM)->Timing.clockTickH0++;
  }
}

// Model initialize function
void gen_50Hz_and_1Hz::initialize()
{
  // Enable for Sin: '<Root>/1 Hz'
  rtDW.systemEnable = 1;
}

// Constructor
gen_50Hz_and_1Hz::gen_50Hz_and_1Hz() :
  rtY(),
  rtDW(),
  rtM()
{
  // Currently there is no constructor body generated.
}

// Destructor
gen_50Hz_and_1Hz::~gen_50Hz_and_1Hz()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
gen_50Hz_and_1Hz::RT_MODEL * gen_50Hz_and_1Hz::getRTM()
{
  return (&rtM);
}

//
// File trailer for generated code.
//
// [EOF]
//
