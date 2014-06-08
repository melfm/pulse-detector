# webcam-pulse-detector
=============

## Overview
C++ implementation of [webcam-pulse-detector Python version](https://github.com/thearn/webcam-pulse-detector).
The application detects the heart-rate of an individual using a common webcam. It has been tested on OSX 10.8.

## Dependencies
All third-party dependencies have been included. Running script has also been provided, use that to run the application.
The application has the following dependencies :
- OpenCV 2.4.8
- Boost 1.55
- GNU Scientific Library (GSL) 1.6

If you try to compile and run into errors, most likely you will need to compile the above libraries especially if running a different version of MacOS.

## Algorithm

Photoplethysmography is a novel video-based methodology for non-contact, automated cardiac pulse measurements. PPG was first described in the 1930s, as a simple low-cost optical technique to measure the blood volume changes. This method has the ability to sense the cardiovascular pulse wave i.e. blood volume pulse through variations in transmitted or reflected surrounding light. This webcam-based technique uses normal ambient light as a source of illumination for remote acquisition of PPG signals and a simple digital camera. This method takes into account the volumetric changes in the facial blood vessels during the cardiac cycle which modify the path length of the incident ambient light in a way that the subsequent changes in amount of reflected light indicate the timing of cardiovascular events i.e. the pulse.

## Limitations

This method is prone to motion-induced signal corruption. Another challenge this method presents is the effectiveness when under the influence of variations in ambient light intensity which can affect the accuracy of physiological assessment. The success of the algorithm relies on good lighting and minimal noise due to motion and under these conditions, a stable heartbeat should be detectable in about 15 seconds.

## Running the application
=============
Compile using the Makefile and run using the run script provided.


## Demo Video
=============
This is a demo video of an Emotion Detection app which uses this algorithm.
https://www.youtube.com/watch?v=cIABgfEnbGs

