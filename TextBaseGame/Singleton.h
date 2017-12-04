#pragma once
#ifndef _SINGLETON_H
#define _SINGLETON_H

template<typename T>
class Singleton
{
public:
	static T* GetInstance();
	static void destroy();

private:

	Singleton(Singleton const&) = delete;
	Singleton& operator=(Singleton const&) = delete;

protected:
	static T* m_instance;

	Singleton() { m_instance = static_cast <T*> (this); }
	~Singleton() {}
};

template<typename T>
T* Singleton<T>::m_instance = nullptr;

template<typename T>
T* Singleton<T>::GetInstance()
{
	if (!m_instance)
	{
		m_instance = new T();
	}

	return m_instance;
}

template<typename T>
void Singleton<T>::destroy()
{
	delete m_instance;
	m_instance = 0;
}

#endif