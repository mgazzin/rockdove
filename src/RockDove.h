//
//  RockDove.h
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//

#ifndef ROCK_DOVE_H
#define ROCK_DOVE_H

#include <string>
#include <iostream>

/*
class RockDoveLogger
{
public:
	RockDoveLogger(Logger& c,Logger& f);
	~RockDoveLogger();
	void LogInformation(const std::string& msg);
	void LogError(const std::string& msg);
	void LogWarning(const std::string& msg);
	
private:
	
	Logger	 		mConsoleLogger;
	Logger			mFileLogger;
	
};
*/

class RockDoveMailer
{
public: 
    RockDoveMailer(const std::string& HostSMTP, 
					Poco::UInt16 SMTPPort, 
					const std::string& Username, 
					const std::string& Password, 
					const std::string& FromAddress, 
					const std::string& SecurityEnabled,
					const std::string& Subject, 
					const std::string& Content);
//					RockDoveLogger& log);
	~RockDoveMailer();
	int SendMail(const std::string mToAddress);
	
private:
	std::string mHostSMTP;
	Poco::UInt16 mSMTPPort;
	std::string mUsername;
	std::string mPassword;
	std::string mFromAddress;
	std::string mSecurityEnabled;
	std::string mSubject;
	std::string mContent;
	//RockDoveLogger		mLog;

};


class RockDove
{
public:
	//RockDove(const std::string& db, RockDoveLogger& log);
	RockDove(const std::string& db);
	~RockDove();
	int	DisplayRecords();
	int SendAllMails(RockDoveMailer& m);
	void InitDB();
	void ShutdownDB();
		
private:

	std::string		rDB;
	std::string	    rFileHTML;
	//RockDoveLogger			mLog;
	
	

};







#endif	// ROCK_DOVE_H
