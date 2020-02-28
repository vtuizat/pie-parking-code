#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <vector>


class vehicle
{
    private:
// ID
    std::string vehicleID;

    char userStatus // 
    std::string driverID
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
}

#endif // VEHICLE_H

