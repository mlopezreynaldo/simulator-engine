//
// Created by Miguel Angel on 12/1/21.
//

#ifndef SIMENGINE_SYSTEMBUSCONTROLLER_H
#define SIMENGINE_SYSTEMBUSCONTROLLER_H


#include "../messaging/message/Msg.h"
#include "../messaging/bus/MessageBus.h"

class SystemBusController {
public:
    void handleMessage(Msg *msg) {
        switch (msg->type) {

        }
    }

private:
    MessageBus *msgBus;

};


#endif //SIMENGINE_SYSTEMBUSCONTROLLER_H
