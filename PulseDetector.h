#ifndef PULSEDETECTOR_H
#define PULSEDETECTOR_H

#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include "opencv2/core/core.hpp"

#include <boost/bind.hpp>
#include <boost/ref.hpp>
#include <boost/chrono.hpp>
#include <boost/accumulators/accumulators.hpp>
#include <boost/accumulators/statistics/stats.hpp>
#include <boost/accumulators/statistics/mean.hpp>

#include <gsl/gsl_errno.h>
#include <gsl/gsl_spline.h>
#include <gsl/gsl_complex.h>
#include <gsl/gsl_complex_math.h>
#include <gsl/gsl_fft_real.h>
#include <gsl/gsl_fft_halfcomplex.h>


#define KEY_ESCAPE	((char) 27)
#define KEY_S		('s')
#define KEY_R		('r')
#define PI 3.14159265

#define MAX_SAMPLES		(250)
#define MIN_SAMPLES 	(10)
#define BPM_FILTER_LOW	(50)
#define BPM_FILTER_HIGH	(180)

#define BPM_TRACE_SIZE		(800)
#define BPM_GRAPH_HEIGHT	(400)
#define BPM_GRAPH_WIDTH		(BPM_TRACE_SIZE)

using namespace std;

typedef struct _PU {
    double bpm;
} PU;

//
// PulseDetector class
//
class PulseDetector {

//Field variables
private:
	cv::Mat _face;
	cv::Rect _forehead;
	vector<double> _means;
	vector<double> _times;
	vector<double> _fftabs;
	vector<double> _frequencies;
	vector<double> _pruned;
	vector<double> _prunedfreq;
	vector<double> _bpms;
	double _fps;
    double _bpm; 
    double gap;
	const static int idx = 1;
	boost::chrono::system_clock::time_point _start;
	

public:
    
	void run();

private:
	void getForehead(const cv::Rect& face, cv::Rect& forehead);
	void getSubface(const cv::Rect& face, cv::Rect& sub, float fh_x, float fh_y, float fh_w, float fh_h);
	PU estimateBPM(const cv::Mat& fhimg);
	double getSubface_means(const cv::Mat& image, cv::Rect& forehead);
	double calculate_mean(const cv::Mat& image);

	double timestamp();
	void clearBuffers();
	// Helper Functions
	vector<double> linspace(double start, double end, int count);
	vector<double> arange(int stop);
	vector<double> hammingWindow(int M);
	vector<double> interp(vector<double> interp_x, vector<double> data_x, vector<double> data_y);

	vector<gsl_complex> fft_transform(vector<double>& samples);
	vector<double> complex_angles(vector<gsl_complex> cvalues);
	vector<double> calculate_complex_angle(vector<gsl_complex> cvalues);
	vector<double> calculate_complex_abs(vector<gsl_complex> cvalues);

	// List Operations
	double list_mean(vector<double>& data);
	void list_multiply(vector<double>& data, double value);
	void list_multiply_vector(vector<double>& data, vector<double>& mult);
	void list_subtract(vector<double>& data, double value);
	void list_trimfront(vector<double>& list, int limit);
	vector<double> list_pruned(vector<double>& data, vector<double>& index);
	vector<double> list_filter(vector<double>& data, double low, double high);
	int list_argmax(vector<double>& data);

	void dump(const string& label,vector<double> data) {
		printf("%s",label.c_str());
		for (int i = 0; i < data.size(); ++i) {
			printf("[%lf]", data[i]);
		}
		printf("\n");
	}
	void dump_complex(const string& label, vector<gsl_complex> data) {
		printf("%s",label.c_str());
		for (int i = 0; i < data.size(); ++i) {
			printf("[%lf : %lf]", GSL_REAL(data[i]), GSL_IMAG(data[i]));
		}
		printf("\n");
	}
};
#endif /* PULSEDETECTOR_H */


