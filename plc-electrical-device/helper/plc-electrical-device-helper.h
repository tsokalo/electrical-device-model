/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
#ifndef __PLC_ELECTRICAL_DEVICE_HELPER_H__
#define __PLC_ELECTRICAL_DEVICE_HELPER_H__

#include "ns3/plc-defs-extension.h"
#include "ns3/plc-electrical-device.h"

#include "ns3/ptr.h"
#include "ns3/ghn-plc-helper.h"

namespace ns3
{

class PlcElectricalDeviceHelper : public ghn::GhnPlcHelper
{
public:
  static TypeId
  GetTypeId (void);
  PlcElectricalDeviceHelper (ghn::BandPlanType bandplan);

  void
  Setup (void);

private:

};
}

#endif /* __PLC_ELECTRICAL_DEVICE_HELPER_H__ */

