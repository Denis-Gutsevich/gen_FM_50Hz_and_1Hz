cmake_minimum_required(VERSION 3.16)

set(START_DIR ".")

add_library(gen_FM_50Hz_and_1Hz
   ${START_DIR}/gen_FM_50Hz_and_1Hz_ert_rtw/gen_FM_50Hz_and_1Hz.cpp
)

target_include_directories(gen_FM_50Hz_and_1Hz
   ${START_DIR}/gen_FM_50Hz_and_1Hz_ert_rtw
)

target_compile_options(gen_FM_50Hz_and_1Hz
   -Wall
   -W
   -O2
)

target_compile_definitions(gen_FM_50Hz_and_1Hz
   -DCLASSIC_INTERFACE=0 
   -DALLOCATIONFCN=0 
   -DTERMFCN=0 
   -DONESTEPFCN=1 
   -DMAT_FILE=0 
   -DMULTI_INSTANCE_CODE=1 
   -DINTEGER_CODE=0 
   -DMT=0
   -DTID01EQ=0
   -DMODEL=gen_FM_50Hz_and_1Hz 
   -DNUMST=1 
   -DNCSTATES=0 
   -DHAVESTDIO 
   -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0
)
