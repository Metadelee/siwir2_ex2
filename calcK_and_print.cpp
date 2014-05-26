#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iomanip>
#include <math.h>
#include <time.h>
#include <sys/time.h>
#include <stdio.h>
#include <cstring>

#define _USE_MATH_DEFINES

using namespace std;

static int NX;
static int NY;
static double delta;
static double eps;
static int vertices; // number of vertices

int main(int argc, char *argv[]){


    if (argc != 3) {
        cerr<<"error: wrong number of arguments"<<endl;
        cout<<"call ./waveguide d e "<<endl;
        cout<<"d: variable for the calculation of the variable coefficient k(x,y) ; e: stopping criterion for the solver"<<endl;
        exit(EXIT_FAILURE);
    }
    delta = atoi(argv[1]);
    eps = atoi(argv[2]);
    vertices = points.length();

    return 0;
}

void printK(){
    ofstream file;
    file.open("ksq.txt", ios::out);
    if(!(file.is_open())){
        printf("%p konnte nicht gespeichert werden\n", str);
        exit(1);
    }
    for(int i = 0; i < vertices; i++){
        file << points[i].x << '\t' << points[i].y << '\t' << getKq(points[i].x,  points[i].y) << '\n';
    }
    file << endl;
    file.close();
}

void printMatrix(String matrix){
     ofstream file;
    file.open(matrix, ios::out);
    if(!(file.is_open())){
        printf("%p konnte nicht gespeichert werden\n", str);
        exit(1);
    }
    for(int i = 0; i < vertices; i++){
        file << points[i].x << '\t' << points[i].y << '\t' << getKq(points[i].x,  points[i].y) << '\n';
    }
    file << endl;
    file.close();

}



double getKq(int x, int y){
    return (100.0+delta)*exp(-50.0*(x*x+y*y))-100.0;
}




