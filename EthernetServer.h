#ifndef ethernetserver_h
#define ethernetserver_h

#include "Server.h"
#include "socket.h"

class EthernetClient;

class EthernetServer : 
public Server {
private:
  uint16_t _port;
  W5000socket sock;
  void accept();
public:
  EthernetServer(uint16_t);
  EthernetClient available();
  virtual void begin();
  virtual size_t write(uint8_t);
  virtual size_t write(const uint8_t *buf, size_t size);
  using Print::write;
};

#endif
