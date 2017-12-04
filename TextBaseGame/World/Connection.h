#pragma once

#include <string>

using namespace std;

class Connection
{
public:
	Connection(string nodeId1, string nodeId2, bool connectionStatus, string keyId) :
		m_NodeId1(nodeId1), m_NodeId2(nodeId2), m_ConnectionStatus(connectionStatus), m_Keyid(keyId) {}
	~Connection() {};

	string GetOtherNodeId(string nodeId);

	bool GetConnectionStatus() { return m_ConnectionStatus; }
	void SetConnectionStatus(bool status) { m_ConnectionStatus = status; }

	string GetNodeId1() { return m_NodeId1; }
	string GetNodeId2() { return m_NodeId2; }

	void SetExamineResponceOpen(string responce) { m_ExamineResponce_Open = responce; }
	string GetExamineResponceOpen() { return m_ExamineResponce_Open; }
	void SetExamineResponceClosed(string responce) { m_ExamineResponce_Closed = responce; }
	string GetExamineResponceClosed() { return m_ExamineResponce_Closed; }

	string GetKeyId() { return m_Keyid; }

private:
	bool m_ConnectionStatus;
	string m_NodeId1, m_NodeId2;

	string m_ExamineResponce_Open;
	string m_ExamineResponce_Closed;

	string m_Keyid;
};
