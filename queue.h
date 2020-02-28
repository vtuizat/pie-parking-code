#ifndef QUEUE_H
#define QUEUE_H
#include <vehicle.h>


class Queue
{

    private :
    int length_file ;
    std::vector<Vehicle> vehicles ;
    std::string file_ID ;
    Vehicle vehicule_in_charge ;
    std::vector<float> powers ;
    

    public :
    int get_length_file();
    void set_length_file(int);
    std::vector<Vehicle> get_vehicles ();
    void set_vehicles(Vehicle);
    std::string get_file_ID();
    void set_file_ID(std::string);
    Vehicle get_vehicle_in_charge();
    void set_vehicle_in_charge(Vehicle);
    std::vector<float> get_powers();
    void set_powers(float);




   
}


#endif // QUEUE_H
