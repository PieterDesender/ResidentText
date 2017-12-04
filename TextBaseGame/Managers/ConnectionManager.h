#pragma once

#include "../Singleton.h"
#include "../World/Connection.h"
#include "NodeManager.h"
//#include "../World/Node.h"

//#include <algorithm>
#include <vector>
//#include <string>

class ConnectionManager : public Singleton<ConnectionManager>
{
public:
	Connection* AddConnection(string nodeId1, string nodeId2, bool connectionStatus, string keyId);

private:
	vector<Connection*> m_VecConnections;

	friend class Singleton<ConnectionManager>;
	ConnectionManager() {};
	~ConnectionManager();
};
