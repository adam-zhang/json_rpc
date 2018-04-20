#include <ctime>
#include <iostream>
#include <string>
#include <boost/asio.hpp>
#include "Server.h"

int main()
{
	Server::instance().run();
	return 0;
}

