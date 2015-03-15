RockDove is a small mailing utility that allows to send massive emails. 
RockDove takes email addresses stored in MySql ROCKDB in the table ADDRESS and deliver an HTML file to all the addressed.
More enanchements will include the following topics:

Threads management
Windows version and test

This project is developed in C++ with POCO libraries (http://pocoproject.org/). --- AUTHOR: Marco Gazzin ---

Command syntax:


#rockdove [-vh] -i:HTMLFilename -c:ConfFile
where:
-v displays all the records to be processed
-h displays an help
-V verbose (rockdove.log)
-r Reset the field last_sent to enable to send email
-i use HTMLFile as a file to send to all addresses. This parameter is mandatory
-c use ConfFile as a config file. The config file looks like this:

SMTPHostname = smtp.gmail.com
SMTPPort = 587
Username = valid_user@gmail.com
Password = password
FromAddress = valid_user@gmail.com
