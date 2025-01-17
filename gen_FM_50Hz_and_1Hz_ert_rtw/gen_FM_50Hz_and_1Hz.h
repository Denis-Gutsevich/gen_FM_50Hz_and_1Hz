//
// File: gen_FM_50Hz_and_1Hz.h
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
#ifndef RTW_HEADER_gen_FM_50Hz_and_1Hz_h_
#define RTW_HEADER_gen_FM_50Hz_and_1Hz_h_
#include "rtwtypes.h"

// Model Code Variants

// Class declaration for model gen_FM_50Hz_and_1Hz
class gen_50Hz_and_1Hz final
{
  // public data and function members
 public:
  // Block signals and states (default storage) for system '<Root>'
  struct DW {
    real_T DiscreteTimeIntegrator_DSTATE;// '<Root>/Discrete-Time Integrator'
    real_T lastSin;                    // '<Root>/1 Hz'
    real_T lastCos;                    // '<Root>/1 Hz'
    int32_T systemEnable;              // '<Root>/1 Hz'
  };

  // External outputs (root outports fed by signals with default storage)
  struct ExtY {
    real_T Outport;                    // '<Root>/Outport'
  };

  // Real-time Model Data Structure
  struct RT_MODEL {
    //
    //  Timing:
    //  The following substructure contains information regarding
    //  the timing information for the model.

    struct {
      uint32_T clockTick0;
      uint32_T clockTickH0;
    } Timing;
  };

  // Copy Constructor
  gen_50Hz_and_1Hz(gen_50Hz_and_1Hz const&) = delete;

  // Assignment Operator
  gen_50Hz_and_1Hz& operator= (gen_50Hz_and_1Hz const&) & = delete;

  // Move Constructor
  gen_50Hz_and_1Hz(gen_50Hz_and_1Hz &&) = delete;

  // Move Assignment Operator
  gen_50Hz_and_1Hz& operator= (gen_50Hz_and_1Hz &&) = delete;

  // Real-Time Model get method
  gen_50Hz_and_1Hz::RT_MODEL * getRTM();

  // External outputs
  ExtY rtY;

  // model initialize function
  void initialize();

  // model step function
  void step();

  // Constructor
  gen_50Hz_and_1Hz();

  // Destructor
  ~gen_50Hz_and_1Hz();

  // private data and function members
 private:
  // Block states
  DW rtDW;

  // Real-Time Model
  RT_MODEL rtM;
};

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Gain1' : Eliminated nontunable gain of 1


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'gen_FM_50Hz_and_1Hz'

#endif                                 // RTW_HEADER_gen_FM_50Hz_and_1Hz_h_

//
// File trailer for generated code.
//
// [EOF]
//
