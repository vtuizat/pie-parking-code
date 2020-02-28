#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <vector>

enum Status {ENTRE, SORT, GARE } ;

class vehicle
{
    private:
// ID
    std::string vehicleID;

    Status vehicleStatus;
    int timeOfArrival ;// date d'entree de la voiture dans le parking
// energy
    float chargeLevel;
    bool isCharging;
    bool isPluggedFront;
    bool isPluggedBack;
// movement
    std::vector<float> postition; //utile ?
    std::vector<float> speed;
    bool objectSensor; //avant ? arriere ? global ? 

    public:
    std::string getID();

}

#endif // VEHICLE_H

