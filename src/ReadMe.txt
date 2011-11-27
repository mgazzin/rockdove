**
** RockDove
*
** Description: RockDove mailer utility. This program allows to send massive emails
** to some address stored in MySql ROCKDB in the table ADDRESS. 
** It is a command line program and the syntax is:
** #rockdove [-vh] -i:HTMLFilename -c:ConfFile
** where:
** -v displays all the records to be processed
** -h displays an help
** -i use HTMLFile as a file to send to all addresses. This parameter is mandatory
** -c use ConfFile as a config file. The config file looks like this:
** 
** SMTPHostname = smtp.gmail.com
** SMTPPort = 587
** Username = valid_user@gmail.com
** Password = password
** FromAddress = valid_user@gmail.com

RockDove is a mailer program that takes an HTML and send it
to all the address defined in the ADDRESS table in MySQL ROCKDB database.

**
** Linux
**

1. bootstrap
     chmod +x bootstrap
     ./bootstrap
2. configure
    for debug build:
     CXXFLAGS="-g -D_DEBUG -Wall" ./configure --cache=/dev/null --prefix=/usr
    for release build:
     CXXFLAGS="-O2 -Wall" ./configure --cache=/dev/null --prefix=/usr
3. make
     make

**
** Mac OS X
**

1. bootstrap
     cat bootstrap | sed s/libtoolize/glibtoolize/ > bootstrap.mac
     chmod +x bootstrap.mac
     ./bootstrap.mac
2. configure
    for debug build:
     CXXFLAGS="-g -D_DEBUG -Wall" ./configure --cache=/dev/null --prefix=/usr
    for release build:
     CXXFLAGS="-O2 -Wall" ./configure --cache=/dev/null --prefix=/usr
3. make
     make

**
** Windows
** 

1. Environment variable POCO_BASE must be properly defined.
2. Open RockDove.sln file from VC++, then build and run it.


