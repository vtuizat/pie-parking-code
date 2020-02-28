#ifndef PARKING_H
#define PARKING_H
#include <queue.h>

class Parking
{
private:
    unsigned int nb_queues;
    std::vector< Queue > queues;
public:
    Parking(/* args */);
    ~Parking();
};

Parking::Parking(/* args */)
{
}

Parking::~Parking()
{
}

#endif // PARKING_H

