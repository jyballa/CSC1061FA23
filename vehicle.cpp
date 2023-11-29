#include "vehicle.h"
using namespace std;

//Input: vector of vehicles
//Process: Gets the color, year, make, model, VIN, and Days on lot of the veichles in the vector.
//Output: Displays the information of the vehicles.
void PrintVehicle(vector<vehicle> vehicleList) {
	for (int count = 0; count < vehicleList.size(); count++) {
		cout << "Vehicle: " << vehicleList[count].color << " " << vehicleList[count].year << " " << vehicleList[count].make << " " << vehicleList[count].model << endl;
		cout << "V.I.N: " << vehicleList[count].vin << "\nDays on Lot: " << vehicleList[count].daysOnLot;
	}//end for
}//end PrintVehicle

void Vehicle::SearchBy(vector<Vehicle> vehicleVector(), string type, string parameter) {
    int ii = 0;
    for (ii; ii < type.size(); ii++) {
        tolower(type.at(ii));
    }//end for
    if (isalpha(parameter.at(0))) {
        for (ii = 0; ii < parameter.size(); ii++) {
            tolower(parameter.at(ii));
        }//end for
    }//end if
    switch (type.at(2)) {
        case 'k'://make
            for (ii = 0; ii < vehicleVector.size(); ii++) {
                if (vehicleVector.at(ii).make == parameter) {
                    PrintVehicle(vehicleVector);
                }//end if
            }//end for
        break;
        case 'd'://model
            for (ii = 0; ii < vehicleVector.size(); ii++) {
                if (vehicleVector.at(ii).model == parameter) {
                    PrintVehicle(vehicleVector);
                }//end if
            }//end for
        break;
        case 'l'://color
            for (ii = 0; ii < vehicleVector.size(); ii++) {
                if (vehicleVector.at(ii).color == parameter) {
                    PrintVehicle(vehicleVector);
                }//end if
            }//end for
        break;
        case 'a'://year
            for (ii = 0; ii < vehicleVector.size(); ii++) {
                string yearAsString = vehicleVector.at(ii).year;
                if (yearAsString == parameter) {
                    PrintVehicle(vehicleVector);
                }//end if
            }//end for
        break;
        case 'y'://daysOnLot
            for (ii = 0; ii < vehicleVector.size(); ii++) {
                string daysAsString = vehicleVector.at(ii).year;
                if (daysAsString == parameter) {
                    PrintVehicle(vehicleVector);
                }//end if
            }//end for
        break;
        default:
      }//end switch
}//end SearchBy
