#pragma once
#include "ardupilot.equipment.power.BatteryCells.h"
#include "ardupilot.equipment.power.BatteryContinuous.h"
#include "ardupilot.equipment.power.BatteryInfoAux.h"
#include "ardupilot.equipment.power.BatteryPeriodic.h"
#include "ardupilot.equipment.proximity_sensor.Proximity.h"
#include "ardupilot.equipment.trafficmonitor.TrafficReport.h"
#include "ardupilot.gnss.Heading.h"
#include "ardupilot.gnss.MovingBaselineData.h"
#include "ardupilot.gnss.RelPosHeading.h"
#include "ardupilot.gnss.Status.h"
#include "ardupilot.indication.Button.h"
#include "ardupilot.indication.NotifyState.h"
#include "ardupilot.indication.SafetyState.h"
#include "com.hex.equipment.flow.Measurement.h"
#include "com.himark.servo.ServoCmd.h"
#include "com.himark.servo.ServoInfo.h"
#include "com.hobbywing.esc.GetEscID.h"
#include "com.hobbywing.esc.GetMaintenanceInformation.h"
#include "com.hobbywing.esc.GetMajorConfig.h"
#include "com.hobbywing.esc.RawCommand.h"
#include "com.hobbywing.esc.SelfTest.h"
#include "com.hobbywing.esc.SetAngle.h"
#include "com.hobbywing.esc.SetBaud.h"
#include "com.hobbywing.esc.SetDirection.h"
#include "com.hobbywing.esc.SetID.h"
#include "com.hobbywing.esc.SetLED.h"
#include "com.hobbywing.esc.SetReportingFrequency.h"
#include "com.hobbywing.esc.SetThrottleSource.h"
#include "com.hobbywing.esc.StatusMsg1.h"
#include "com.hobbywing.esc.StatusMsg2.h"
#include "com.hobbywing.esc.StatusMsg3.h"
#include "com.tmotor.esc.FocCtrl.h"
#include "com.tmotor.esc.PUSHCAN.h"
#include "com.tmotor.esc.PUSHSCI.h"
#include "com.tmotor.esc.ParamCfg.h"
#include "com.tmotor.esc.ParamGet.h"
#include "com.volz.servo.ActuatorStatus.h"
#include "com.xacti.CopterAttStatus.h"
#include "com.xacti.GimbalAttitudeStatus.h"
#include "com.xacti.GimbalControlData.h"
#include "com.xacti.GnssStatus.h"
#include "com.xacti.GnssStatusReq.h"
#include "cuav.equipment.power.CBAT.h"
#include "dronecan.protocol.CanStats.h"
#include "dronecan.protocol.FlexDebug.h"
#include "dronecan.protocol.Stats.h"
#include "dronecan.remoteid.ArmStatus.h"
#include "dronecan.remoteid.BasicID.h"
#include "dronecan.remoteid.Location.h"
#include "dronecan.remoteid.OperatorID.h"
#include "dronecan.remoteid.SecureCommand.h"
#include "dronecan.remoteid.SelfID.h"
#include "dronecan.remoteid.System.h"
#include "dronecan.sensors.hygrometer.Hygrometer.h"
#include "dronecan.sensors.magnetometer.MagneticFieldStrengthHiRes.h"
#include "dronecan.sensors.rc.RCInput.h"
#include "dronecan.sensors.rpm.RPM.h"
#include "mppt.OutputEnable.h"
#include "mppt.Stream.h"
#include "uavcan.CoarseOrientation.h"
#include "uavcan.Timestamp.h"
#include "uavcan.equipment.actuator.ArrayCommand.h"
#include "uavcan.equipment.actuator.Command.h"
#include "uavcan.equipment.actuator.Status.h"
#include "uavcan.equipment.ahrs.MagneticFieldStrength.h"
#include "uavcan.equipment.ahrs.MagneticFieldStrength2.h"
#include "uavcan.equipment.ahrs.RawIMU.h"
#include "uavcan.equipment.ahrs.Solution.h"
#include "uavcan.equipment.air_data.AngleOfAttack.h"
#include "uavcan.equipment.air_data.IndicatedAirspeed.h"
#include "uavcan.equipment.air_data.RawAirData.h"
#include "uavcan.equipment.air_data.Sideslip.h"
#include "uavcan.equipment.air_data.StaticPressure.h"
#include "uavcan.equipment.air_data.StaticTemperature.h"
#include "uavcan.equipment.air_data.TrueAirspeed.h"
#include "uavcan.equipment.camera_gimbal.AngularCommand.h"
#include "uavcan.equipment.camera_gimbal.GEOPOICommand.h"
#include "uavcan.equipment.camera_gimbal.Mode.h"
#include "uavcan.equipment.camera_gimbal.Status.h"
#include "uavcan.equipment.device.Temperature.h"
#include "uavcan.equipment.esc.RPMCommand.h"
#include "uavcan.equipment.esc.RawCommand.h"
#include "uavcan.equipment.esc.Status.h"
#include "uavcan.equipment.esc.StatusExtended.h"
#include "uavcan.equipment.gnss.Auxiliary.h"
#include "uavcan.equipment.gnss.ECEFPositionVelocity.h"
#include "uavcan.equipment.gnss.Fix.h"
#include "uavcan.equipment.gnss.Fix2.h"
#include "uavcan.equipment.gnss.RTCMStream.h"
#include "uavcan.equipment.hardpoint.Command.h"
#include "uavcan.equipment.hardpoint.Status.h"
#include "uavcan.equipment.ice.FuelTankStatus.h"
#include "uavcan.equipment.ice.reciprocating.CylinderStatus.h"
#include "uavcan.equipment.ice.reciprocating.Status.h"
#include "uavcan.equipment.indication.BeepCommand.h"
#include "uavcan.equipment.indication.LightsCommand.h"
#include "uavcan.equipment.indication.RGB565.h"
#include "uavcan.equipment.indication.SingleLightCommand.h"
#include "uavcan.equipment.power.BatteryInfo.h"
#include "uavcan.equipment.power.CircuitStatus.h"
#include "uavcan.equipment.power.PrimaryPowerSupplyStatus.h"
#include "uavcan.equipment.range_sensor.Measurement.h"
#include "uavcan.equipment.safety.ArmingStatus.h"
#include "uavcan.navigation.GlobalNavigationSolution.h"
#include "uavcan.protocol.AccessCommandShell.h"
#include "uavcan.protocol.CANIfaceStats.h"
#include "uavcan.protocol.DataTypeKind.h"
#include "uavcan.protocol.GetDataTypeInfo.h"
#include "uavcan.protocol.GetNodeInfo.h"
#include "uavcan.protocol.GetTransportStats.h"
#include "uavcan.protocol.GlobalTimeSync.h"
#include "uavcan.protocol.HardwareVersion.h"
#include "uavcan.protocol.NodeStatus.h"
#include "uavcan.protocol.Panic.h"
#include "uavcan.protocol.RestartNode.h"
#include "uavcan.protocol.SoftwareVersion.h"
#include "uavcan.protocol.debug.KeyValue.h"
#include "uavcan.protocol.debug.LogLevel.h"
#include "uavcan.protocol.debug.LogMessage.h"
#include "uavcan.protocol.dynamic_node_id.Allocation.h"
#include "uavcan.protocol.dynamic_node_id.server.AppendEntries.h"
#include "uavcan.protocol.dynamic_node_id.server.Discovery.h"
#include "uavcan.protocol.dynamic_node_id.server.Entry.h"
#include "uavcan.protocol.dynamic_node_id.server.RequestVote.h"
#include "uavcan.protocol.enumeration.Begin.h"
#include "uavcan.protocol.enumeration.Indication.h"
#include "uavcan.protocol.file.BeginFirmwareUpdate.h"
#include "uavcan.protocol.file.Delete.h"
#include "uavcan.protocol.file.EntryType.h"
#include "uavcan.protocol.file.Error.h"
#include "uavcan.protocol.file.GetDirectoryEntryInfo.h"
#include "uavcan.protocol.file.GetInfo.h"
#include "uavcan.protocol.file.Path.h"
#include "uavcan.protocol.file.Read.h"
#include "uavcan.protocol.file.Write.h"
#include "uavcan.protocol.param.Empty.h"
#include "uavcan.protocol.param.ExecuteOpcode.h"
#include "uavcan.protocol.param.GetSet.h"
#include "uavcan.protocol.param.NumericValue.h"
#include "uavcan.protocol.param.Value.h"
#include "uavcan.tunnel.Broadcast.h"
#include "uavcan.tunnel.Call.h"
#include "uavcan.tunnel.Protocol.h"
#include "uavcan.tunnel.SerialConfig.h"
#include "uavcan.tunnel.Targetted.h"
