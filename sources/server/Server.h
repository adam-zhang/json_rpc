#ifndef __SERVER__H
#define __SERVER__H

#include "../share/Singleton.h"

class Server : public Singleton<Server>
{
	public:
		Server();
		~Server();
	public:
		void run();
};
#endif//__SERVER__H
