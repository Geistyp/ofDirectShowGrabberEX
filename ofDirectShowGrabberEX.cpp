#include "ofDirectShowGrabberEX.h"


ofDirectShowGrabberEX::ofDirectShowGrabberEX()
{
}


ofDirectShowGrabberEX::~ofDirectShowGrabberEX()
{
}

bool ofDirectShowGrabberEX::getVideoSettingCamera(int deviceID, long Property, long &min, long &max, long &SteppingDelta, long &currentValue, long &flags, long &defaultValue)
{
	return VI.getVideoSettingCamera(deviceID, Property, min, max, SteppingDelta, currentValue, flags, defaultValue);
}

bool ofDirectShowGrabberEX::setVideoSettingFilter(int deviceID, long Property, long lValue, long Flags /*= NULL*/, bool useDefaultValue /*= false*/)
{
	return VI.setVideoSettingFilter(deviceID, Property, lValue, Flags, useDefaultValue);
}

bool ofDirectShowGrabberEX::setVideoSettingFilterPct(int deviceID, long Property, float pctValue, long Flags /*= NULL*/)
{
	return VI.setVideoSettingFilterPct(deviceID, Property, pctValue, Flags);
}

bool ofDirectShowGrabberEX::getVideoSettingFilter(int deviceID, long Property, long &min, long &max, long &SteppingDelta, long &currentValue, long &flags, long &defaultValue)
{
	return VI.getVideoSettingFilter(deviceID, Property, min, max, SteppingDelta, currentValue, flags, defaultValue);
}

bool ofDirectShowGrabberEX::setVideoSettingCamera(int deviceID, long Property, long lValue, long Flags /*= NULL*/, bool useDefaultValue /*= false*/)
{
	return VI.setVideoSettingCamera(deviceID, Property, lValue, Flags, useDefaultValue);
}

bool ofDirectShowGrabberEX::setVideoSettingCameraPct(int deviceID, long Property, float pctValue, long Flags /*= NULL*/)
{
	return VI.setVideoSettingCameraPct(deviceID, Property, pctValue, Flags);
}

void ofDirectShowGrabberEX::toggleFocusMode(int deviceID, bool maual)
{
	if (maual)
		setVideoSettingCamera(deviceID, CameraControl_Focus, 0, CameraControl_Flags_Manual, false);
	else
		setVideoSettingCamera(deviceID, CameraControl_Focus, 0, CameraControl_Flags_Auto, true);
}

void ofDirectShowGrabberEX::setFocusPct(int deviceID, float pct/*[0.0, 1.0]*/)
{
	setVideoSettingCameraPct(deviceID, CameraControl_Focus, pct, CameraControl_Flags_Manual);
}
