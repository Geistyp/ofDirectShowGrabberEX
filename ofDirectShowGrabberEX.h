//  [GeistYp]
// **more info**
// http://msdn.microsoft.com/en-us/library/windows/desktop/dd407328(v=vs.85).aspx
// http://msdn.microsoft.com/en-us/library/windows/desktop/dd407327(v=vs.85).aspx
// http://msdn.microsoft.com/en-us/library/windows/desktop/dd318251(v=vs.85).aspx
// http://msdn.microsoft.com/en-us/library/windows/desktop/dd318253(v=vs.85).aspx
#pragma once

#include "ofMain.h"

class ofDirectShowGrabberEX : public ofDirectShowGrabber
{
public:
	ofDirectShowGrabberEX();
	~ofDirectShowGrabberEX();

	/*
	 *	Camera Prop.
	 */
	typedef enum tagVideoProcAmpFlags {
		VideoProcAmp_Flags_Auto = 0x0001,
		VideoProcAmp_Flags_Manual = 0x0002
	} VideoProcAmpFlags;

	typedef enum tagVideoProcAmpProperty {
		VideoProcAmp_Brightness,
		VideoProcAmp_Contrast,
		VideoProcAmp_Hue,
		VideoProcAmp_Saturation,
		VideoProcAmp_Sharpness,
		VideoProcAmp_Gamma,
		VideoProcAmp_ColorEnable,
		VideoProcAmp_WhiteBalance,
		VideoProcAmp_BacklightCompensation,
		VideoProcAmp_Gain
	} VideoProcAmpProperty;

	typedef enum  {
		CameraControl_Flags_Auto = 0x0001,
		CameraControl_Flags_Manual = 0x0002
	} CameraControlFlags;

	typedef enum tagCameraControlProperty {
		CameraControl_Pan,
		CameraControl_Tilt,
		CameraControl_Roll,
		CameraControl_Zoom,
		CameraControl_Exposure,
		CameraControl_Iris,
		CameraControl_Focus
	} CameraControlProperty;

	/*
	 *	VI function
	 */
	bool setVideoSettingFilter(int deviceID, long Property, long lValue, long Flags = NULL, bool useDefaultValue = false);
	bool setVideoSettingFilterPct(int deviceID, long Property, float pctValue, long Flags = NULL);
	bool getVideoSettingFilter(int deviceID, long Property, long &min, long &max, long &SteppingDelta, long &currentValue, long &flags, long &defaultValue);

	bool setVideoSettingCamera(int deviceID, long Property, long lValue, long Flags = NULL, bool useDefaultValue = false);
	bool setVideoSettingCameraPct(int deviceID, long Property, float pctValue, long Flags = NULL);
	bool getVideoSettingCamera(int deviceID, long Property, long &min, long &max, long &SteppingDelta, long &currentValue, long &flags, long &defaultValue);

	/*
	 *	Baisc
	 */
	void toggleFocusMode(int deviceID, bool maual);
	void setFocusPct(int deviceID, float pct/*[0.0, 1.0]*/);
};

