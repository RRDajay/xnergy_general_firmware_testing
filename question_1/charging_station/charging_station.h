#ifndef CHARGING_STATION_H
#define CHARGING_STATION_H

#include "message.h"

class ChargingStation {
public:
    
    // Logic to accept a charging request
    void acceptRequest();

    // Logic to receive a message
    void receiveMessage(const Message& msg);

    // Check if charging station is occupied or not
    bool isOccupied();

private:

    // Determines if the charging station is currently being used or not
    bool m_occupied;

    // Store the TX/RX messages in these buffers
    Message m_rxBuffer;
    Message m_txBuffer;

};

#endif