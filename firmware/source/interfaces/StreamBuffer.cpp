#include "StreamBuffer.h"



StreamBuffer::StreamBuffer(uint streamBufferSize)
    : _buffer(streamBufferSize/4 + 2, 0), _bufSize(0) {

}

StreamBuffer::~StreamBuffer() {

}
