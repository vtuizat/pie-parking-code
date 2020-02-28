#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <vector>

enum Status {ENTRE, SORT, FILE } ;

class Vehicle
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
    Vehicle();
    ~Vehicle();

    std::string getID();
    Status getVehicleStatus();
    int getTimeOfArrival();

    float getChargeLevel();
    bool getIsCharging();
    bool getIsPluggedFront();
    bool getIsPluggedBack();



};


#endif // VEHICLE_H

