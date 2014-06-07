#ifndef COMMON_H
#define COMMON_H

#include <cstdio>
#include <stdio.h>
#include <algorithm>
#include <iterator>
#include <list> 
#include <fstream>
#include <string.h>
#include <stdlib.h>

#include <iostream>
#include <string>
#include <vector>

#include <KanakoLive.h>

using namespace std;

typedef struct _PU {
    double bpm;
} PU;

// Gloabl variables for kanako
extern unsigned short port;
extern unsigned short cameraid;

extern vector<AU> aus;
extern string auspath;
extern string ip;
extern string fdetector;
extern string eyesdetector;

extern void ParseOptions (int argc, const char **argv);

extern int LoadIndexes(const string &filename, vector<unsigned int> &indexes, vector<unsigned short> &blocks);

extern int ParseAUs();


#endif /* COMMON_H */