#ifndef MESSAGE_H
#define MESSAGE_H

// This is the message structure to be used by robot and the charging station
// Currently, I only put two buffer fields right now to handle the handshake messages and real-time data messages.
struct Message {
    char payload[100]; // For handshake messages
    char realTimeData[50]; // For real-time data messages
};

#endif // MESSAGE_H