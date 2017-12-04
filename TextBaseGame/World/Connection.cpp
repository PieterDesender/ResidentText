#include "Connection.h"

string Connection::GetOtherNodeId(string nodeId)
{
	if (nodeId == m_NodeId1)
		return m_NodeId2;
	return m_NodeId1;
}