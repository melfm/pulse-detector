#
# Pulse Detector Makefile
#

# 3rd party dependency headers
BOOST_DIR = 3rdparty/boost/1.55/osx/shared
OPENCV_DIR = 3rdparty/opencv/2.4.8/osx/shared
GSL_DIR = 3rdparty/gsl/1.16/osx/shared

CC = g++

CFLAGS = -c -I $(BOOST_DIR)/include -I $(OPENCV_DIR)/include -I $(GSL_DIR)/include
LFLAGS = -L $(BOOST_DIR)/lib -L $(OPENCV_DIR)/lib -L $(GSL_DIR)/lib


# 3rd party dependencies
BOOST_LIBS = -lboost_system -lboost_chrono
OPENCV_LIBS = -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_objdetect
GSL_LIBS = -lgsl

pulse:	PulseDetector.o main.o
	$(CC) $(LFLAGS) $(BOOST_LIBS) $(OPENCV_LIBS) $(GSL_LIBS) PulseDetector.o main.o -o pulse 
	
main.o: main.cpp lib/PulseDetector.h
	$(CC) $(CFLAGS) -o main.o main.cpp 

PulseDetector.o:	lib/PulseDetector.cpp lib/PulseDetector.h
	$(CC) $(CFLAGS) lib/PulseDetector.cpp


clean:
	rm *.o
