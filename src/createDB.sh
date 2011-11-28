#!/bin/bash

#
# RockDove: Database creation script
# 
# Description: this Bash script creates the database, tables and populate them
#

echo "Creating Database ROCKDB"
mysql -p <<END
create database ROCKDB
END


echo "Creating Table ADDRESS"
mysql -p <<END
use ROCKDB;
create table ADDRESS (name char(30), surname char(30), email char(100), last_sent datetime);
END


echo "Populating Table ADDRESS"
mysql -p <<END
use ROCKDB;
insert into ADDRESS (name, surname, email) values ('John', 'Green', 'valid_user@domain.org');
END
