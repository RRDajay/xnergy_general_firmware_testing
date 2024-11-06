#ifndef ROBOT_H
#define ROBOT_H

#include "message.h"

class Robot {
public:

    // Logic for requesting a charge
    void requestCharging();

    // Logic for establishing communication
    void establishCommunication();
    
    // Logic to send a message
    void sendMessage(const Message& msg);

    // Logic to end session
    void endSession();

private:

    // Store the TX/RX messages in these buffers
    Message m_rxBuffer;
    Message m_txBuffer;

};

#endif