#pragma once
#pragma warning(disable : 4996) 
#include <cstdint>
#include <iostream>
#include <ostream>
#include <iomanip>
#include <ctime>
#include <mutex>

#include <fstream>

#ifdef LOGGING_EXPORTS
#define API_LOGGER __declspec(dllexport)
#else
#define API_LOGGER __declspec(dllimport)
#endif

class API_LOGGER Logger
{
public:
	enum class Level
	{
		Debug,
		Info,
		Warning,
		Error
	};

public:
	Logger(std::ostream& out);

	void Log(const std::string& message, Level logLevel)
	{
		m_out << message;
		std::time_t crtTime = std::time(nullptr);
		m_out << '[' << std::put_time(std::localtime(&crtTime), "%Y-%m-%d %H:%M:%S") << ']';

		//m_out << message << "\n";
	}

private:
	std::ostream& m_out;
	Level m_level;
};