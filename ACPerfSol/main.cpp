#include "mainwindow.h"
#include <QApplication>

#include <iostream>
#include "Accel/Accel.h"
#include "Climb/Climb.h"
#include "Cruise/Cruise.h"
#include "Descent/Descent.h"
#include "Misc/RouteFunctions.h"
#include "Misc/Wind.h"
#include "Misc/ISA.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
//    w.show();

    // try to load data for testing
    //std::cout << argv[0] << std::endl;

    TClimbDataSet ClimbData(1);
    ClimbData.LoadData("../../../../myACPerfSol/ACPerfSol/Data/Climbdata.dat", ';', '\n');
    std::cout << "Climb Loaded..." << std::endl;
    TAccelDataSet AccelData(1);
    AccelData.LoadData("../../../../myACPerfSol/ACPerfSol/Data/Acceldata.dat", ';', '\n');
    std::cout << "Accel Loaded..." << std::endl;
    TCruiseDataSet CruiseData(1);
    CruiseData.LoadData("../../../../myACPerfSol/ACPerfSol/Data/Cruisedata.dat", ';', '\n');
    std::cout << "Cruise Loaded..." << std::endl;
    TDescentDataSet DescentData(1);
    DescentData.LoadData("../../../../myACPerfSol/ACPerfSol/Data/Descentdata.dat", ';', '\n');
    std::cout << "Descent Loaded..." << std::endl;

    return a.exec();
}