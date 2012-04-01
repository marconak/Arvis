#ifndef __3DVisualServerNewEdgeExecutor_H__
#define __3DVisualServerNewEdgeExecutor_H__

#include "Network/executors/AbstractExecutor.h"

namespace Network {

    class ServerNewEdgeExecutor : public AbstractExecutor {

    private:
        QDataStream *stream;

    public:
        void execute();
        void setDataStream(QDataStream *ds) {stream=ds;}
        static const quint8 INSTRUCTION_NUMBER = 21;
    };

}

#endif