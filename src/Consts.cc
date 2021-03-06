#include "beaconConsts.h" 


const char * beacon::getUnitString(beacon::units u)
{
  switch (u) 
  {
    case UNITS_NS: 
      return "ns"; 
    case UNITS_SAMPLE:
      return "samples"; 
     case UNITS_ADC: 
      return "ADC"; 
     case UNITS_MV: 
      return "mV"; 
     default: 
      return "???" ; 
  }
}

